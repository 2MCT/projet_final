/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *header;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *menuBtn;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QWidget *menu_side;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnSearch;
    QPushButton *btnDash;
    QPushButton *btnMember;
    QPushButton *btnBook;
    QPushButton *btnEmprunt;
    QPushButton *btnCommunication;
    QPushButton *btnSetting;
    QPushButton *btnAbout;
    QPushButton *btnHelp;
    QFrame *main_body;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(730, 615);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("*{\n"
"    border: none;\n"
"    background-color: transparent;\n"
"	color : #fff;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color: #132f55;\n"
"}\n"
"\n"
"#menu_side{\n"
"   background-color: #00204a;\n"
"}\n"
"\n"
"QPushButton{\n"
"    padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"QPushButton:clicked{\n"
"    padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#main_body{\n"
"    border-radius : 2px;  \n"
"	background-color: rgb(192, 218, 241);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header = new QFrame(centralwidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setMinimumSize(QSize(0, 70));
        header->setMaximumSize(QSize(16777215, 60));
        header->setStyleSheet(QString::fromUtf8("#header{\n"
"	background-color : rgb(98, 160, 234);\n"
"}"));
        header->setFrameShape(QFrame::StyledPanel);
        header->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(header);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(header);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 70));
        frame->setMaximumSize(QSize(16777215, 70));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        menuBtn = new QPushButton(frame);
        menuBtn->setObjectName(QString::fromUtf8("menuBtn"));
        menuBtn->setMinimumSize(QSize(180, 60));
        menuBtn->setMaximumSize(QSize(16777215, 70));
        menuBtn->setStyleSheet(QString::fromUtf8("#menuBtn{\n"
"	background-color : #035da7;\n"
"	border: 1px solid rgb(192, 218, 241);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconWhite/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuBtn->setIcon(icon);
        menuBtn->setIconSize(QSize(21, 21));

        horizontalLayout_4->addWidget(menuBtn);


        horizontalLayout_2->addWidget(frame, 0, Qt::AlignLeft);

        frame_3 = new QFrame(header);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        horizontalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(header);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menu_side = new QWidget(frame_2);
        menu_side->setObjectName(QString::fromUtf8("menu_side"));
        menu_side->setMinimumSize(QSize(180, 300));
        menu_side->setMaximumSize(QSize(100, 700));
        verticalLayout_2 = new QVBoxLayout(menu_side);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(menu_side);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSearch = new QPushButton(frame_4);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setStyleSheet(QString::fromUtf8("#btnSearch{\n"
"	text-align: left\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconWhite/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearch->setIcon(icon1);
        btnSearch->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnSearch);

        btnDash = new QPushButton(frame_4);
        btnDash->setObjectName(QString::fromUtf8("btnDash"));
        btnDash->setStyleSheet(QString::fromUtf8("#btnDash{\n"
"	text-align: left\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconWhite/bar-chart-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDash->setIcon(icon2);
        btnDash->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnDash);

        btnMember = new QPushButton(frame_4);
        btnMember->setObjectName(QString::fromUtf8("btnMember"));
        btnMember->setStyleSheet(QString::fromUtf8("#btnMember{\n"
"	text-align: left\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconWhite/users.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnMember->setIcon(icon3);
        btnMember->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnMember);

        btnBook = new QPushButton(frame_4);
        btnBook->setObjectName(QString::fromUtf8("btnBook"));
        btnBook->setStyleSheet(QString::fromUtf8("#btnBook{\n"
"	text-align: left\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconWhite/book.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnBook->setIcon(icon4);
        btnBook->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnBook);

        btnEmprunt = new QPushButton(frame_4);
        btnEmprunt->setObjectName(QString::fromUtf8("btnEmprunt"));
        btnEmprunt->setStyleSheet(QString::fromUtf8("#btnEmprunt{\n"
"	text-align: left;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconWhite/repeat.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnEmprunt->setIcon(icon5);
        btnEmprunt->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnEmprunt);

        btnCommunication = new QPushButton(frame_4);
        btnCommunication->setObjectName(QString::fromUtf8("btnCommunication"));
        btnCommunication->setStyleSheet(QString::fromUtf8("#btnCommunication{\n"
"	text-align: left;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iconWhite/mail.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCommunication->setIcon(icon6);
        btnCommunication->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnCommunication);

        btnSetting = new QPushButton(frame_4);
        btnSetting->setObjectName(QString::fromUtf8("btnSetting"));
        btnSetting->setStyleSheet(QString::fromUtf8("#btnSetting{\n"
"	text-align: left;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iconWhite/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetting->setIcon(icon7);
        btnSetting->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnSetting);

        btnAbout = new QPushButton(frame_4);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setStyleSheet(QString::fromUtf8("#btnAbout{\n"
"	text-align: left;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/iconWhite/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbout->setIcon(icon8);
        btnAbout->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnAbout);

        btnHelp = new QPushButton(frame_4);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setStyleSheet(QString::fromUtf8("#btnHelp{\n"
"	text-align: left;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/iconWhite/help-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnHelp->setIcon(icon9);
        btnHelp->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnHelp);


        verticalLayout_2->addWidget(frame_4, 0, Qt::AlignTop);


        horizontalLayout->addWidget(menu_side);

        main_body = new QFrame(frame_2);
        main_body->setObjectName(QString::fromUtf8("main_body"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(main_body->sizePolicy().hasHeightForWidth());
        main_body->setSizePolicy(sizePolicy1);
        main_body->setMinimumSize(QSize(0, 0));
        main_body->setFrameShape(QFrame::StyledPanel);
        main_body->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(main_body);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(main_body);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        stackedWidget = new QStackedWidget(main_body);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_5->addWidget(stackedWidget);


        horizontalLayout->addWidget(main_body);


        verticalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        menuBtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\"><img src=\":/icons/logo.jpeg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        menuBtn->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "2MCT's Project", nullptr));
        btnSearch->setText(QCoreApplication::translate("MainWindow", "Aceuil", nullptr));
        btnDash->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        btnMember->setText(QCoreApplication::translate("MainWindow", "Membres", nullptr));
        btnBook->setText(QCoreApplication::translate("MainWindow", "Livres", nullptr));
        btnEmprunt->setText(QCoreApplication::translate("MainWindow", "Emprunts", nullptr));
        btnCommunication->setText(QCoreApplication::translate("MainWindow", "Communication", nullptr));
        btnSetting->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        btnAbout->setText(QCoreApplication::translate("MainWindow", "A Propos", nullptr));
        btnHelp->setText(QCoreApplication::translate("MainWindow", "Aide", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
