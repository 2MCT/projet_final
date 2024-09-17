#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

private:
    Ui::MainWindow *ui;

    QSqlDatabase db;
    QSqlQuery query;

};
#endif // MAINWINDOW_H
