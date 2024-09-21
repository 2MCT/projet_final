#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "badge.h"

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include <QtCharts>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     void displayMember(QString NumAdherent) ;

private slots:
    void on_btnDash_clicked();

    void on_btnMember_clicked();

    void on_btnBook_clicked();

    void on_btnEmprunt_clicked();

    void on_btnCommunication_clicked();

    void on_btnSetting_clicked();

    void on_btnAbout_clicked();

    void on_btnHelp_clicked();

    void on_btnAccueil_clicked();

    /*===================*/
    void updateChart();
    /*===================*/

    void displayData(QTableWidget *tableView);


    void on_btnAdd_clicked();

    void on_save_btn_clicked();

    void on_cancel_btn_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    QSqlDatabase db;
    QSqlQuery query;

    QChart *m_chart;

};
#endif // MAINWINDOW_H
