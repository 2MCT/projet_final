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
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("biblio");
    db.setHostName("localhost");
    db.setUserName("Miarimanana");
    db.setPassword("miarimanana2006");

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
    QBarSet *set_1 = new QBarSet("Emprunteurs");

    set_1->append(55);
    set_1->append(80);
    set_1->append(90);
    set_1->append(70);
    set_1->append(65);
    set_1->append(50);

    set_1->setPen(QPen(Qt::blue, 1));
    set_1->setBrush(Qt::blue);

    series->append(set_1);

    m_chart = new QChart();
    m_chart->addSeries(series);
    m_chart->setTitle("EMPRUNTEURS");
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
    axeY->setRange(0, 100);
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

    QPieSlice *slice_1 = series_2->append("Nouveaux", 30);
    //slice_1->setLabelVisible(true);
    slice_1->setPen(QPen(Qt::green, 1));
    slice_1->setBrush(Qt::green);

    QPieSlice *slice_2 = series_2->append("Perdus", 5);
    //slice_2->setLabelVisible(true);
    slice_2->setPen(QPen(Qt::red, 1));
    slice_2->setBrush(Qt::red);

    QPieSlice *slice_3 = series_2->append("Retournés", 20);
    //slice_3->setLabelVisible(true);
    slice_3->setPen(QPen(Qt::yellow, 1));
    slice_3->setBrush(Qt::yellow);

    QPieSlice *slice_4 = series_2->append("Sortis", 15);
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

   QPieSlice *slc_1 = series_3->append("PARTICULIERS",30);
   slc_1->setPen(QPen(Qt::blue, 0));
   slc_1->setBrush(Qt::blue);

   QPieSlice *slc_2 = series_3->append("ETUDIANTS", 25);
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
    this->displayData(ui->resultMembre) ;
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

/*=====================================================*/

void MainWindow::displayData(QTableWidget *tableView){
    tableView->setColumnCount(6) ;
    tableView->setHorizontalHeaderLabels({"ID","NOM","PRENOM", "TELEPHONE","EMAIL","ADRESSE"}) ;
    tableView->setColumnWidth(0,130) ;
    tableView->setColumnWidth(1,200) ;
    tableView->setColumnWidth(2,200) ;
    tableView->setColumnWidth(3,120) ;
    tableView->setColumnWidth(4,230) ;
    tableView->setColumnWidth(5,200) ;

    tableView->setAlternatingRowColors(true);

    tableView->setStyleSheet(
         "QTableWidget::item {"
         "  background-color : #98caf8;"
         "}"

         "QTableWidget::item:alternate {"
         "  background-color : #e3f4f7;"
         "}"

         "QTableWidget::item {"
         "  color : #101f36;"
         "  padding-top : 15px;"
         "  padding-bottom : 15px;"
         "}"

    );

    QSqlQuery query(db);
    query.prepare("SELECT NUMADHERENT, NOM, PRENOM, TEL, EMAIL, ADRESSE FROM adherent WHERE 1;");

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return;
    }
    int row = 0;

    while(query.next()){
        tableView->insertRow(row) ;
        QLabel *Action = new QLabel ;
        Action->setText("Modifier") ;
        QTableWidgetItem *num = new QTableWidgetItem(query.value(0).toString()) ;
        QTableWidgetItem *nom = new QTableWidgetItem(query.value(1).toString()) ;
        QTableWidgetItem *prenom = new QTableWidgetItem(query.value(2).toString()) ;
        QTableWidgetItem *tel = new QTableWidgetItem(query.value(3).toString()) ;
        QTableWidgetItem *mail = new QTableWidgetItem(query.value(4).toString()) ;
        QTableWidgetItem *adress = new QTableWidgetItem(query.value(5).toString()) ;

        num->setFlags(num->flags() & ~Qt::ItemIsEditable) ;
        nom->setFlags(nom->flags() & ~Qt::ItemIsEditable) ;
        prenom->setFlags(prenom->flags() & ~Qt::ItemIsEditable) ;
        tel->setFlags(tel->flags() & ~Qt::ItemIsEditable) ;
        mail->setFlags(mail->flags() & ~Qt::ItemIsEditable) ;
        adress->setFlags(adress->flags() & ~Qt::ItemIsEditable) ;

        tableView->setItem(row, 0, num) ;
        tableView->setItem(row, 1, nom) ;
        tableView->setItem(row, 2, prenom) ;
        tableView->setItem(row, 3, tel) ;
        tableView->setItem(row, 4, mail) ;
        tableView->setItem(row, 5, adress) ;
//        if(tableView->item(row,0)->isS+elected() or tableView->item(row,1)->isSelected() or tableView->item(row,2)->isSelected() or tableView->item(row,3)->isSelected()  or tableView->item(row,4)->isSelected() ){
//            ui->formWidget->show();
//        }
        row++;
     }

}


