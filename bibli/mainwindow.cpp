#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDatabase>

#include <QDate>
#include <QTimer>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QPen>

#include <QtCharts>
#include <QLayout>

QString new_members(QSqlQuery query){
    query.exec("SELECT COUNT(*) FROM ADHERENT WHERE DATEADHESION > DATE_SUB(CURDATE(), INTERVAL 4 WEEK)") ;
    QString result ;
    while(query.next())
        result = query.value(0).toString() ;
    return result ;
}

QString ex_members(QSqlQuery query){
    query.exec("SELECT COUNT(*) FROM ADHERENT WHERE DATE_SUB(CURDATE(), INTERVAL 1 YEAR)>DATEADHESION")  ;
    QString result ;
    while(query.next())
        result = query.value(0).toString() ;
    return result ;
}

QString particuliers(QSqlQuery query){
    query.exec("SELECT count(*) FROM ADHERENT WHERE NUMADHERENT REGEXP '.*P.*' ;")  ;
    QString result ;
    while(query.next())
        result = query.value(0).toString() ;
    return result ;
}

QString students(QSqlQuery query){
    query.exec("SELECT count(*) FROM ADHERENT WHERE NUMADHERENT REGEXP '.*E.*' ;")  ;
    QString result ;
    while(query.next())
        result = query.value(0).toString() ;
    return result ;
}

QString total_members(QSqlQuery query){
    query.exec("SELECT count(*) FROM ADHERENT WHERE 1;")  ;
    QString result ;
    while(query.next())
        result = query.value(0).toString() ;
    return result ;
}

int emprunteurs(QSqlQuery query, int x) {
    query.prepare("SELECT COUNT(*) FROM EMPRUNTER WHERE DATE_PRET = DATE_SUB(CURDATE(), INTERVAL :X DAY) ;") ;
    query.bindValue(":X",x) ;
    query.exec() ;
    int result ;
    while(query.next())
        result = query.value(0).toInt() ;
    return result ;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->new_books_count->setStyleSheet("font-size: 30px;") ;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("biblio");
    db.setHostName("192.168.43.1");
    db.setUserName("2MCT");
    db.setPassword("2MCT@database");

    if (!db.open()) {
        qDebug() << "DATABASE IS NOT CONNECTED :(";
        qDebug() << db.lastError().text();  // Print detailed error message
        return;
    }

    qDebug() << "DATABASE IS CONNECTED :)";

    // Print available drivers for debugging
    QStringList drivers = QSqlDatabase::drivers();
    qDebug() << "Available drivers:" << drivers;

    QSqlQuery query(db);
    query.prepare("SELECT * FROM ADHERENT");


    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return;
    }

    while(query.next()){
            QString nom = query.value("NOM").toString();
            QString prenom =query.value("PRENOM").toString();

            qDebug() << "Nom : "<<nom<<"\t"<<"Prénom : "<<prenom<<"\n";
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAccueil_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btnDash_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QWidget *barChartContainer = ui->frame_10;
    QString avalaible_books ;
    QSqlQuery avalaible_book ;
    avalaible_book.prepare("SELECT COUNT(NUMEXEMPLAIRE) FROM EXEMPLAIRE WHERE (COTELIVRE, NUMEXEMPLAIRE) NOT IN (SELECT COTELIVRE, NUMEXEMPLAIRE FROM EMPRUNTER WHERE DATERETOUR IS NULL);") ;
    if(avalaible_book.exec()){
        while(avalaible_book.next()){
            avalaible_books = avalaible_book.value(0).toString() ;
        }
    ui->avalaible_books_count->setText(avalaible_books) ;
}
    QSqlQuery query;
    ui->new_members_count->setText(new_members(query)) ;
    ui->ex_members_count->setText(ex_members(query)) ;
    ui->particuliers_count->setText(particuliers(query)) ;
    ui->students_count->setText(students(query)) ;
    ui->total_members_count->setText(total_members(query)) ;

    if (barChartContainer->layout() == nullptr) {
        QVBoxLayout *layout = new QVBoxLayout(barChartContainer);
        barChartContainer->setLayout(layout);
    }
    else {
        QLayoutItem *item;
        while ((item = barChartContainer->layout()->takeAt(0))) {
            delete item->widget();
            delete item;
        }
    }

    QBarSeries *series = new QBarSeries();
    QBarSet *set_2 = new QBarSet("Emprunteurs");
/**
    Modification de chart(emprunteurs)
**/
    QDate date ;
    QDate y = date.currentDate() ;
    int x = y.dayOfWeek();
    for (int i = 7; i > 0; i--) {
        if((x-i+7) % 7 != 0){
            //qDebug() << emprunteurs(query,(x-i+7)%7) ;
            set_2->append(emprunteurs(query,(x-i+7)%7)) ;
        }
    }

    set_2->setPen(QPen(Qt::black, 1));
    set_2->setBrush(Qt::black);

    series->append(set_2);

    m_chart = new QChart();
    m_chart->addSeries(series);
    m_chart->setTitle("Emprunteurs");
    m_chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList jours;
    for (int i = 6; i >= 0; --i) {
        jours.append(QDate::currentDate().addDays(-i).toString("ddd"));
    }

    QBarCategoryAxis *axeX = new QBarCategoryAxis();
    axeX->append(jours);
    m_chart->addAxis(axeX, Qt::AlignBottom);
    series->attachAxis(axeX);

    QValueAxis *axeY = new QValueAxis();
    axeY->setRange(0, 5);
    m_chart->addAxis(axeY, Qt::AlignLeft);
    series->attachAxis(axeY);

    m_chart->legend()->setVisible(true);
    m_chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *barChartView = new QChartView(m_chart);
    barChartView->setRenderHint(QPainter::Antialiasing);

    barChartContainer->layout()->addWidget(barChartView);

    QWidget *pieChartContainer = ui->frame_11;

    if (pieChartContainer->layout() == nullptr) {
        QVBoxLayout *layout = new QVBoxLayout(pieChartContainer);
        pieChartContainer->setLayout(layout);
    }
    else {
        QLayoutItem *item;
        while ((item = pieChartContainer->layout()->takeAt(0))) {
            delete item->widget();
            delete item;
        }
    }

    QPieSeries *series_2 = new QPieSeries();
    series_2->setHoleSize(0.5);
    QSqlQuery new_books ;
    int count = 0;
    new_books.exec("SELECT COUNT(COTELIVRE) FROM LIVRE") ;
    while(new_books.next()){
        count = new_books.value(0).toInt() ;
    }
    QPieSlice *slice_1 = series_2->append("Nouveau",count);
    //slice_1->setLabelVisible(true);
    slice_1->setPen(QPen(Qt::green, 1));
    slice_1->setBrush(Qt::green);
    QPieSlice *slice_2 = series_2->append("Perdu", 5);
    //slice_2->setLabelVisible(true);
    slice_2->setPen(QPen(Qt::red, 1));
    slice_2->setBrush(Qt::red);

    QPieSlice *slice_3 = series_2->append("Retourné", 20);
    //slice_3->setLabelVisible(true);
    slice_3->setPen(QPen(Qt::yellow, 1));
    slice_3->setBrush(Qt::yellow);

    QPieSlice *slice_4 = series_2->append("Sorti", 15);
    //slice_4->setLabelVisible(true);
    slice_4->setPen(QPen(Qt::blue, 1));
    slice_4->setBrush(Qt::blue);

    QChart *pieChart = new QChart();
    pieChart->addSeries(series_2);
    pieChart->legend()->setVisible(true);
    pieChart->setTitle("Rapport Au Total de Livres");
    pieChart->legend()->setAlignment(Qt::AlignBottom);
    pieChart->setAnimationOptions(QChart::SeriesAnimations);

    QChartView *pieChartView = new QChartView(pieChart);
    pieChartView->setRenderHint(QPainter::Antialiasing);

    pieChartContainer->layout()->addWidget(pieChartView);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateChart);
    timer->start(86400000);

    updateChart();

    /*==================CHART MEMBERS==================*/
    QWidget *memberChart = ui->memberChart;

    if(memberChart->layout() == nullptr){
        QVBoxLayout *layout = new QVBoxLayout(memberChart);
        memberChart->setLayout(layout);
    }
    
    else{
        QLayoutItem *item;
        while((item = memberChart->layout()->takeAt(0))){
            delete item->widget();
            delete item;
        }
    }

   QPieSeries *series_3 = new QPieSeries();
   series_3->setHoleSize(0);

   QPieSlice *slc_1 = series_3->append("PARTICULIERS",particuliers(query).toInt());
   slc_1->setPen(QPen(Qt::blue, 0));
   slc_1->setBrush(Qt::blue);

   QPieSlice *slc_2 = series_3->append("ETUDIANTS", students(query).toInt());
   slc_2->setPen(QPen(Qt::black, 0));
   slc_2->setBrush(Qt::black);

   QChart *pieMember = new QChart();
   pieMember->addSeries(series_3);
   pieMember->setAnimationOptions(QChart::SeriesAnimations);

   QChartView *pieMemberChartview = new QChartView(pieMember);
   pieMemberChartview->setRenderHint(QPainter::Antialiasing);

   memberChart->layout()->addWidget(pieMemberChartview);

}



/*=========================UPDATE=========================*/
void MainWindow::updateChart()
{
    QStringList dayLabels;
    int count = 0;
    QDate currentDate = QDate::currentDate();

    for (int i = 0; count < 7; ++i) {
        QDate date = currentDate.addDays(-i);
        if (date.dayOfWeek() != 7) {
            dayLabels.prepend(date.toString("ddd"));
            count++;
        }
    }

    auto axeX = qobject_cast<QBarCategoryAxis*>(m_chart->axisX());
    if (axeX) {
        axeX->clear();
        axeX->append(dayLabels);
    }
}

/*=========================================================*/

void MainWindow::on_btnMember_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_btnBook_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_btnEmprunt_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_btnCommunication_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_btnSetting_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_btnAbout_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_btnHelp_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

