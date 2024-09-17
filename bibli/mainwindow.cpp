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


