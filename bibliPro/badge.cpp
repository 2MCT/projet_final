#include "badge.h"
#include "ui_badge.h"

badge::badge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::badge)
{
    ui->setupUi(this);

    addProfil(ui->imgContainer,":/image/mihary.jpg");

}

badge::~badge()
{
    delete ui;
}

void badge::addProfil(QWidget *container, QString source){
    QPixmap pixmap(source) ;
    QLabel *label = new QLabel(container);
    QSize labelSize = label->size();
    QPixmap scaledPixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
//    label->setScaledContents(true);
//    label->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    QVBoxLayout *layout = new QVBoxLayout(ui->imgContainer);
    label->setLayout(layout);
    label->setMinimumHeight(200);
    label->setMinimumWidth(200);
    label->setPixmap(pixmap);
    label->show();
}


