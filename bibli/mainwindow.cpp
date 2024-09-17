#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
}


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


