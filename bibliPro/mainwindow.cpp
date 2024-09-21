#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDate>
#include <QTimer>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QPen>
#include <QPixmap>

#include <QtCharts>
#include <QLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->addForm->hide();

//    ui->imgeContainer->setStyleSheet("border-radius: 50%;border: 1px solid;");

//    QPixmap photos(":/icons/logo.jpeg") ;
//    QPixmap resizePixmap = photos.scaled(200,800,Qt::KeepAspectRatio) ;

//    QLabel *label = ui->stackedWidget->findChild<QLabel *>("imageLabel");
//    QHBoxLayout *layoutVertical = new QHBoxLayout(ui->imgeContainer) ;
//    ui->imgeContainer->setLayout(layoutVertical);
//    QLabel *label = new QLabel(ui->imgeContainer);
//    label->setAlignment(Qt::AlignCenter);
//    label->setPixmap(resizePixmap);
//    layoutVertical->setAlignment(Qt::AlignCenter) ;


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("BIBLIOTHEQUE");
    db.setHostName("localhost");
    db.setUserName("Tefy");
    db.setPassword("28052006tefY");

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
    QBarSet *set_1 = new QBarSet("Visiteurs");
    QBarSet *set_2 = new QBarSet("Emprunteurs");

    set_1->append(55);
    set_1->append(80);
    set_1->append(90);
    set_1->append(70);
    set_1->append(65);
    set_1->append(50);

    set_2->append(40);
    set_2->append(50);
    set_2->append(65);
    set_2->append(30);
    set_2->append(20);
    set_2->append(30);

    set_1->setPen(QPen(Qt::blue, 1));
    set_1->setBrush(Qt::blue);
    set_2->setPen(QPen(Qt::black, 1));
    set_2->setBrush(Qt::black);

    series->append(set_1);
    series->append(set_2);

    m_chart = new QChart();
    m_chart->addSeries(series);
    m_chart->setTitle("Visiteurs et Emprunteurs");
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

    QPieSlice *slice_1 = series_2->append("Nouveau", 30);
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
QString getNumAdherent(QTableWidgetItem *mail, QTableWidget *tableView){
    int r = tableView->row(mail) ;
    QString num = tableView->item(r,0)->text() ;
    return num ;
}

/*==================================================*/

void MainWindow::displayData(QTableWidget *tableView){
    tableView->setColumnCount(6) ;
    tableView->setHorizontalHeaderLabels({"Numero","Nom","Prenom", "Telephone","Email","Adresse"}) ;
    tableView->setColumnWidth(0,150) ;
    tableView->setColumnWidth(1,200) ;
    tableView->setColumnWidth(2,100) ;
    tableView->setColumnWidth(3,100) ;
    tableView->setColumnWidth(4,200) ;
    tableView->setColumnWidth(5,200) ;
    QSqlQuery query(db);
    query.prepare("SELECT NUMADHERENT, NOM, PRENOM, TEL, EMAIL, ADRESSE FROM ADHERENT WHERE 1;");

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

/*=============GERER ADDITION MEMBRE===============*/
void MainWindow::on_btnAdd_clicked()
{
    ui->search_widget->hide();
    ui->addForm->show();
    ui->resultMembre->hide();
}


void MainWindow::on_save_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Confirmation","Voulez vous vraiment enregistrer ?",QMessageBox::Yes | QMessageBox::No);

    /*===============INSTRUCTION A EFFECTUER SI ENREGISTRER ======================*/
    if(reply == QMessageBox::Yes){
        ui->search_widget->show();
        ui->addForm->hide();
        ui->resultMembre->show();
        QString numero = ui->numAdherent->text();
        QString nom = ui->nom->text();
        QString prenom = ui->prenom->text();
        QString email = ui->email->text();
        QString tel = ui->tel->text();
        QString domaine = ui->domaine->text();
        QString adresse = ui->adresse->text();
        QSqlQuery query(db);
        query.prepare("INSERT INTO ADHERENT VALUES (:numero,:nom,:prenom,:email,:tel,:domaine,CURDATE(),:adresse,:photo);");
        query.bindValue(":numero",numero);
        query.bindValue(":nom",nom);
        query.bindValue(":prenom",prenom);
        query.bindValue(":email",email);
        query.bindValue(":tel",tel);
        query.bindValue(":domaine",domaine);
        query.bindValue(":adresse",adresse);
        query.bindValue(":photo","img.jpg");

        if(!query.exec()){
            QMessageBox::warning(this,"echeque","Operation non effectuer");
            qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
            return;
        }


        QMessageBox::information(this,"Message","Operation en succes !");
    }
}


void MainWindow::on_cancel_btn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Confirmation","Annuler l'operation ?",QMessageBox::Yes | QMessageBox::No);

    /*===============INSTRUCTION A EFFECTUER SI ENREGISTRER ======================*/
    if(reply == QMessageBox::Yes){
        ui->search_widget->show();
        ui->addForm->hide();
        ui->resultMembre->show();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    badge *carteMembre = new badge;
    carteMembre->show();
}

