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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QWidget *menu_side;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAccueil;
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
    QStackedWidget *stackedWidget;
    QWidget *acueil;
    QPushButton *pushButton;
    QWidget *dashboar;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QFrame *chartBar;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_12;
    QLabel *label_3;
    QComboBox *comboBox;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_11;
    QFrame *bookAdded;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *new_books_count;
    QPushButton *iconAdd;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QFrame *lostBook;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lost_books_count;
    QPushButton *iconLost;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QFrame *borrowedBook;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_14;
    QLabel *borrows_books_count;
    QPushButton *iconBorrowed;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QFrame *returnedBook;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *returned_books_count;
    QPushButton *iconReturned;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QFrame *availableBook;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_15;
    QLabel *avalaible_books_count;
    QPushButton *iconAvailable;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_10;
    QFrame *frame_11;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_18;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_19;
    QFrame *memberContent;
    QHBoxLayout *horizontalLayout_20;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_21;
    QFrame *addContent;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *new_members_count;
    QFrame *delContent;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_11;
    QPushButton *pushButton_10;
    QLabel *ex_members_count;
    QFrame *totalContent;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_16;
    QPushButton *pushButton_11;
    QLabel *total_members_count;
    QFrame *frame_16;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_19;
    QFrame *memberChart;
    QFrame *frame_22;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_25;
    QLabel *particuliers_count;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_26;
    QLabel *students_count;
    QLabel *label_23;
    QFrame *frame_7;
    QWidget *membre;
    QPushButton *pushButton_3;
    QWidget *livres;
    QPushButton *pushButton_4;
    QWidget *emprunt;
    QPushButton *pushButton_5;
    QWidget *communication;
    QPushButton *pushButton_6;
    QWidget *parametres;
    QPushButton *pushButton_7;
    QWidget *apropos;
    QPushButton *pushButton_8;
    QWidget *aide;
    QPushButton *pushButton_9;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1069, 821);
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
"/*==============================*/\n"
"#btnAbout{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnAccueil{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnBook{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnCommunication{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnDash{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnEmprunt{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnHelp{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnMember{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"#btnSetting{\n"
"	padding: 20px;\n"
"    background-color: #00204a;\n"
"}\n"
"\n"
"/*=========================="
                        "====*/\n"
"#btnAbout:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnAccueil:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnBook:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnCommunication:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnDash:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnEmprunt:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnHelp:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnMember:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"\n"
"#btnSetting:hover{\n"
"	padding: 20px;\n"
"    background-color: #007fa4;\n"
"}\n"
"/*==============================*/\n"
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
        icon.addFile(QString::fromUtf8(":/icons/smile.svg"), QSize(), QIcon::Normal, QIcon::Off);
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

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menu_side = new QWidget(widget_2);
        menu_side->setObjectName(QString::fromUtf8("menu_side"));
        menu_side->setMinimumSize(QSize(181, 300));
        menu_side->setMaximumSize(QSize(100, 16777215));
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
        btnAccueil = new QPushButton(frame_4);
        btnAccueil->setObjectName(QString::fromUtf8("btnAccueil"));
        btnAccueil->setStyleSheet(QString::fromUtf8("#btnAccueil{\n"
"	text-align: left;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconWhite/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAccueil->setIcon(icon1);
        btnAccueil->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnAccueil);

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

        main_body = new QFrame(widget_2);
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
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(main_body);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        acueil = new QWidget();
        acueil->setObjectName(QString::fromUtf8("acueil"));
        pushButton = new QPushButton(acueil);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 140, 161, 81));
        stackedWidget->addWidget(acueil);
        dashboar = new QWidget();
        dashboar->setObjectName(QString::fromUtf8("dashboar"));
        verticalLayout_4 = new QVBoxLayout(dashboar);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(dashboar);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_5);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 874, 1170));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        chartBar = new QFrame(scrollAreaWidgetContents);
        chartBar->setObjectName(QString::fromUtf8("chartBar"));
        chartBar->setFrameShape(QFrame::StyledPanel);
        chartBar->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(chartBar);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(chartBar);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_6);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_12 = new QFrame(frame_6);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setMinimumSize(QSize(0, 50));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_12);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 71, 18));
        comboBox = new QComboBox(frame_12);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(590, 10, 93, 26));

        verticalLayout_8->addWidget(frame_12, 0, Qt::AlignTop);

        frame_13 = new QFrame(frame_6);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setMinimumSize(QSize(500, 120));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_13);
        horizontalLayout_11->setSpacing(17);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(18, 0, 18, 0);
        bookAdded = new QFrame(frame_13);
        bookAdded->setObjectName(QString::fromUtf8("bookAdded"));
        bookAdded->setMinimumSize(QSize(170, 0));
        bookAdded->setStyleSheet(QString::fromUtf8("#bookAdded{\n"
"	background-color: #0f4a9b;\n"
"	padding : 3px;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"}"));
        bookAdded->setFrameShape(QFrame::StyledPanel);
        bookAdded->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(bookAdded);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        new_books_count = new QLabel(bookAdded);
        new_books_count->setObjectName(QString::fromUtf8("new_books_count"));
        new_books_count->setStyleSheet(QString::fromUtf8("#label_2{\n"
"	font-size:30px;\n"
"}"));

        horizontalLayout_12->addWidget(new_books_count);

        iconAdd = new QPushButton(bookAdded);
        iconAdd->setObjectName(QString::fromUtf8("iconAdd"));
        iconAdd->setStyleSheet(QString::fromUtf8("#iconAdd{\n"
"	text-align: right;\n"
"	color:blue;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/iconWhite/plus-square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        iconAdd->setIcon(icon10);
        iconAdd->setIconSize(QSize(35, 35));

        horizontalLayout_12->addWidget(iconAdd);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(bookAdded);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);


        verticalLayout_9->addLayout(horizontalLayout_7);


        horizontalLayout_11->addWidget(bookAdded);

        lostBook = new QFrame(frame_13);
        lostBook->setObjectName(QString::fromUtf8("lostBook"));
        lostBook->setMinimumSize(QSize(170, 0));
        lostBook->setStyleSheet(QString::fromUtf8("#lostBook{\n"
"	background-color: #00204a;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"    padding : 5px;\n"
"}"));
        lostBook->setFrameShape(QFrame::StyledPanel);
        lostBook->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(lostBook);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lost_books_count = new QLabel(lostBook);
        lost_books_count->setObjectName(QString::fromUtf8("lost_books_count"));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        lost_books_count->setFont(font2);

        horizontalLayout_13->addWidget(lost_books_count);

        iconLost = new QPushButton(lostBook);
        iconLost->setObjectName(QString::fromUtf8("iconLost"));
        iconLost->setStyleSheet(QString::fromUtf8("#iconLost{\n"
"	text-align: right;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/iconWhite/x-square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        iconLost->setIcon(icon11);
        iconLost->setIconSize(QSize(35, 35));

        horizontalLayout_13->addWidget(iconLost);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(lostBook);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_8->addWidget(label_8);


        verticalLayout_10->addLayout(horizontalLayout_8);


        horizontalLayout_11->addWidget(lostBook);

        borrowedBook = new QFrame(frame_13);
        borrowedBook->setObjectName(QString::fromUtf8("borrowedBook"));
        borrowedBook->setMinimumSize(QSize(170, 0));
        borrowedBook->setStyleSheet(QString::fromUtf8("#borrowedBook{\n"
"	background-color: #1e5fb9;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"	padding : 5px;\n"
"}"));
        borrowedBook->setFrameShape(QFrame::StyledPanel);
        borrowedBook->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(borrowedBook);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        borrows_books_count = new QLabel(borrowedBook);
        borrows_books_count->setObjectName(QString::fromUtf8("borrows_books_count"));
        QFont font3;
        font3.setPointSize(20);
        borrows_books_count->setFont(font3);

        horizontalLayout_14->addWidget(borrows_books_count);

        iconBorrowed = new QPushButton(borrowedBook);
        iconBorrowed->setObjectName(QString::fromUtf8("iconBorrowed"));
        iconBorrowed->setStyleSheet(QString::fromUtf8("#iconBorrowed{\n"
"	text-align: right;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/iconWhite/arrow-up-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        iconBorrowed->setIcon(icon12);
        iconBorrowed->setIconSize(QSize(35, 35));

        horizontalLayout_14->addWidget(iconBorrowed);


        verticalLayout_11->addLayout(horizontalLayout_14);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(borrowedBook);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        horizontalLayout_9->addWidget(label_10);


        verticalLayout_11->addLayout(horizontalLayout_9);


        horizontalLayout_11->addWidget(borrowedBook);

        returnedBook = new QFrame(frame_13);
        returnedBook->setObjectName(QString::fromUtf8("returnedBook"));
        returnedBook->setMinimumSize(QSize(170, 0));
        returnedBook->setStyleSheet(QString::fromUtf8("#returnedBook{\n"
"	background-color: #0e3875;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"	padding : 5px;\n"
"}"));
        returnedBook->setFrameShape(QFrame::StyledPanel);
        returnedBook->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(returnedBook);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        returned_books_count = new QLabel(returnedBook);
        returned_books_count->setObjectName(QString::fromUtf8("returned_books_count"));
        returned_books_count->setFont(font3);

        horizontalLayout_16->addWidget(returned_books_count);

        iconReturned = new QPushButton(returnedBook);
        iconReturned->setObjectName(QString::fromUtf8("iconReturned"));
        iconReturned->setStyleSheet(QString::fromUtf8("#iconReturned{\n"
"	text-align: right;\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/iconWhite/arrow-down-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        iconReturned->setIcon(icon13);
        iconReturned->setIconSize(QSize(35, 35));

        horizontalLayout_16->addWidget(iconReturned);


        verticalLayout_13->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(returnedBook);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        horizontalLayout_17->addWidget(label_17);


        verticalLayout_13->addLayout(horizontalLayout_17);


        horizontalLayout_11->addWidget(returnedBook);

        availableBook = new QFrame(frame_13);
        availableBook->setObjectName(QString::fromUtf8("availableBook"));
        availableBook->setMinimumSize(QSize(170, 0));
        availableBook->setStyleSheet(QString::fromUtf8("#availableBook{\n"
"	background-color: #035da7;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"	padding : 5px;\n"
"}"));
        availableBook->setFrameShape(QFrame::StyledPanel);
        availableBook->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(availableBook);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        avalaible_books_count = new QLabel(availableBook);
        avalaible_books_count->setObjectName(QString::fromUtf8("avalaible_books_count"));
        avalaible_books_count->setFont(font3);

        horizontalLayout_15->addWidget(avalaible_books_count);

        iconAvailable = new QPushButton(availableBook);
        iconAvailable->setObjectName(QString::fromUtf8("iconAvailable"));
        iconAvailable->setStyleSheet(QString::fromUtf8("#iconAvailable{\n"
"	text-align: right;\n"
"}"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/iconWhite/check-square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        iconAvailable->setIcon(icon14);
        iconAvailable->setIconSize(QSize(35, 35));

        horizontalLayout_15->addWidget(iconAvailable);


        verticalLayout_12->addLayout(horizontalLayout_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(availableBook);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        horizontalLayout_10->addWidget(label_13);


        verticalLayout_12->addLayout(horizontalLayout_10);


        horizontalLayout_11->addWidget(availableBook);


        verticalLayout_8->addWidget(frame_13);


        verticalLayout_7->addWidget(frame_6);

        frame_8 = new QFrame(chartBar);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMinimumSize(QSize(0, 400));
        frame_8->setMaximumSize(QSize(16777215, 350));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_8);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(200, 0));
        frame_10->setMaximumSize(QSize(16777215, 16777215));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        frame_11 = new QFrame(frame_10);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(420, -10, 450, 400));
        frame_11->setMinimumSize(QSize(450, 100));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(frame_10);


        verticalLayout_7->addWidget(frame_8, 0, Qt::AlignTop);

        frame_9 = new QFrame(chartBar);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(0, 600));
        frame_9->setMaximumSize(QSize(600, 600));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_9);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(18, 0, 18, -1);
        frame_2 = new QFrame(frame_9);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(900, 0));
        frame_2->setMaximumSize(QSize(900, 400));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(frame_2);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        memberContent = new QFrame(frame_2);
        memberContent->setObjectName(QString::fromUtf8("memberContent"));
        memberContent->setMinimumSize(QSize(0, 330));
        memberContent->setMaximumSize(QSize(600, 16777215));
        memberContent->setStyleSheet(QString::fromUtf8("#memberContent{\n"
"	background-color: rgb(65, 172, 190);\n"
"	border-radius:5px;\n"
"}"));
        memberContent->setFrameShape(QFrame::StyledPanel);
        memberContent->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(memberContent);
        horizontalLayout_20->setSpacing(4);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(9, 0, 24, 0);
        frame_15 = new QFrame(memberContent);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setMaximumSize(QSize(300, 300));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_15);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        frame_17 = new QFrame(frame_15);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setMinimumSize(QSize(300, 150));
        frame_17->setMaximumSize(QSize(300, 16777215));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_17);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        addContent = new QFrame(frame_17);
        addContent->setObjectName(QString::fromUtf8("addContent"));
        addContent->setMinimumSize(QSize(100, 0));
        addContent->setMaximumSize(QSize(150, 16777215));
        addContent->setStyleSheet(QString::fromUtf8("#addContent{\n"
"	background-color: #0f4a9b;\n"
"	padding : 3px;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"}"));
        addContent->setFrameShape(QFrame::StyledPanel);
        addContent->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(addContent);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_4 = new QLabel(addContent);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setWeight(75);
        label_4->setFont(font4);

        horizontalLayout_22->addWidget(label_4);

        pushButton_2 = new QPushButton(addContent);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/iconWhite/user-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon15);
        pushButton_2->setIconSize(QSize(30, 30));

        horizontalLayout_22->addWidget(pushButton_2);


        verticalLayout_15->addLayout(horizontalLayout_22);

        new_members_count = new QLabel(addContent);
        new_members_count->setObjectName(QString::fromUtf8("new_members_count"));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        new_members_count->setFont(font5);

        verticalLayout_15->addWidget(new_members_count);


        horizontalLayout_21->addWidget(addContent);

        delContent = new QFrame(frame_17);
        delContent->setObjectName(QString::fromUtf8("delContent"));
        delContent->setMinimumSize(QSize(100, 0));
        delContent->setMaximumSize(QSize(150, 16777215));
        delContent->setStyleSheet(QString::fromUtf8("#delContent{\n"
"	background-color: #0f4a9b;\n"
"	padding : 3px;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"}"));
        delContent->setFrameShape(QFrame::StyledPanel);
        delContent->setFrameShadow(QFrame::Raised);
        verticalLayout_16 = new QVBoxLayout(delContent);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_11 = new QLabel(delContent);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_11->setFont(font6);

        horizontalLayout_23->addWidget(label_11);

        pushButton_10 = new QPushButton(delContent);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/iconWhite/user-minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon16);
        pushButton_10->setIconSize(QSize(30, 30));

        horizontalLayout_23->addWidget(pushButton_10);


        verticalLayout_16->addLayout(horizontalLayout_23);

        ex_members_count = new QLabel(delContent);
        ex_members_count->setObjectName(QString::fromUtf8("ex_members_count"));
        ex_members_count->setFont(font5);

        verticalLayout_16->addWidget(ex_members_count);


        horizontalLayout_21->addWidget(delContent);


        verticalLayout_14->addWidget(frame_17, 0, Qt::AlignLeft);

        totalContent = new QFrame(frame_15);
        totalContent->setObjectName(QString::fromUtf8("totalContent"));
        totalContent->setMinimumSize(QSize(0, 0));
        totalContent->setMaximumSize(QSize(300, 16777215));
        totalContent->setStyleSheet(QString::fromUtf8("#totalContent{\n"
"	background-color: #0f4a9b;\n"
"	padding : 3px;\n"
"	border-radius:5px;\n"
"	border: 1px solid #00bbf0;\n"
"}"));
        totalContent->setFrameShape(QFrame::StyledPanel);
        totalContent->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(totalContent);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_16 = new QLabel(totalContent);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QFont font7;
        font7.setPointSize(25);
        label_16->setFont(font7);

        horizontalLayout_24->addWidget(label_16);

        pushButton_11 = new QPushButton(totalContent);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setIcon(icon3);
        pushButton_11->setIconSize(QSize(40, 40));

        horizontalLayout_24->addWidget(pushButton_11);


        verticalLayout_17->addLayout(horizontalLayout_24);

        total_members_count = new QLabel(totalContent);
        total_members_count->setObjectName(QString::fromUtf8("total_members_count"));
        total_members_count->setFont(font5);

        verticalLayout_17->addWidget(total_members_count);


        verticalLayout_14->addWidget(totalContent);


        horizontalLayout_20->addWidget(frame_15);

        frame_16 = new QFrame(memberContent);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setMaximumSize(QSize(300, 300));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_16);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(frame_16);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_19->addWidget(label_19, 0, Qt::AlignTop);

        memberChart = new QFrame(frame_16);
        memberChart->setObjectName(QString::fromUtf8("memberChart"));
        memberChart->setMinimumSize(QSize(0, 180));
        memberChart->setFrameShape(QFrame::StyledPanel);
        memberChart->setFrameShadow(QFrame::Raised);

        verticalLayout_19->addWidget(memberChart, 0, Qt::AlignVCenter);

        frame_22 = new QFrame(frame_16);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_22);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        particuliers_count = new QLabel(frame_22);
        particuliers_count->setObjectName(QString::fromUtf8("particuliers_count"));

        horizontalLayout_25->addWidget(particuliers_count);

        label_20 = new QLabel(frame_22);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_25->addWidget(label_20);


        verticalLayout_18->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        students_count = new QLabel(frame_22);
        students_count->setObjectName(QString::fromUtf8("students_count"));

        horizontalLayout_26->addWidget(students_count);

        label_23 = new QLabel(frame_22);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_26->addWidget(label_23);


        verticalLayout_18->addLayout(horizontalLayout_26);


        verticalLayout_19->addWidget(frame_22);


        horizontalLayout_20->addWidget(frame_16);


        horizontalLayout_19->addWidget(memberContent);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(100, 0));
        frame_7->setMaximumSize(QSize(300, 0));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_19->addWidget(frame_7);


        horizontalLayout_18->addWidget(frame_2, 0, Qt::AlignTop);


        verticalLayout_7->addWidget(frame_9);


        verticalLayout_6->addWidget(chartBar);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);


        verticalLayout_4->addWidget(frame_5);

        stackedWidget->addWidget(dashboar);
        membre = new QWidget();
        membre->setObjectName(QString::fromUtf8("membre"));
        pushButton_3 = new QPushButton(membre);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 180, 191, 81));
        stackedWidget->addWidget(membre);
        livres = new QWidget();
        livres->setObjectName(QString::fromUtf8("livres"));
        pushButton_4 = new QPushButton(livres);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 220, 191, 91));
        stackedWidget->addWidget(livres);
        emprunt = new QWidget();
        emprunt->setObjectName(QString::fromUtf8("emprunt"));
        pushButton_5 = new QPushButton(emprunt);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 250, 131, 61));
        stackedWidget->addWidget(emprunt);
        communication = new QWidget();
        communication->setObjectName(QString::fromUtf8("communication"));
        pushButton_6 = new QPushButton(communication);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 190, 201, 61));
        stackedWidget->addWidget(communication);
        parametres = new QWidget();
        parametres->setObjectName(QString::fromUtf8("parametres"));
        pushButton_7 = new QPushButton(parametres);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(340, 230, 131, 81));
        stackedWidget->addWidget(parametres);
        apropos = new QWidget();
        apropos->setObjectName(QString::fromUtf8("apropos"));
        pushButton_8 = new QPushButton(apropos);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 220, 201, 81));
        stackedWidget->addWidget(apropos);
        aide = new QWidget();
        aide->setObjectName(QString::fromUtf8("aide"));
        pushButton_9 = new QPushButton(aide);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 220, 201, 71));
        stackedWidget->addWidget(aide);

        horizontalLayout_5->addWidget(stackedWidget);


        horizontalLayout->addWidget(main_body);


        verticalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1069, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        menuBtn->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menuBtn->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "2MCT's Project", nullptr));
        btnAccueil->setText(QCoreApplication::translate("MainWindow", "Accueil", nullptr));
        btnDash->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        btnMember->setText(QCoreApplication::translate("MainWindow", "Membres", nullptr));
        btnBook->setText(QCoreApplication::translate("MainWindow", "Livres", nullptr));
        btnEmprunt->setText(QCoreApplication::translate("MainWindow", "Emprunts", nullptr));
        btnCommunication->setText(QCoreApplication::translate("MainWindow", "Communication", nullptr));
        btnSetting->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        btnAbout->setText(QCoreApplication::translate("MainWindow", "A Propos", nullptr));
        btnHelp->setText(QCoreApplication::translate("MainWindow", "Aide", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "acueil", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "New Item", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "New Item", nullptr));

        new_books_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iconAdd->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "NOUVEAUX", nullptr));
        lost_books_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iconLost->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "PERDUS", nullptr));
        borrows_books_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iconBorrowed->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "EMPRUNTES", nullptr));
        returned_books_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iconReturned->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "RETOURNES", nullptr));
        avalaible_books_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iconAvailable->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "DISPONIBLES", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nouveaux", nullptr));
        pushButton_2->setText(QString());
        new_members_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Anciens", nullptr));
        pushButton_10->setText(QString());
        ex_members_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TOTAL", nullptr));
        pushButton_11->setText(QString());
        total_members_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Membres", nullptr));
        particuliers_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Particuliers", nullptr));
        students_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Etudiants", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "membre", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "livres", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "emprunt", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "communication", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "parametres", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "apropos", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
