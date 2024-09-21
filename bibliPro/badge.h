#ifndef BADGE_H
#define BADGE_H

#include <QDialog>

namespace Ui {
class badge;
}

class badge : public QDialog
{
    Q_OBJECT

public:
    explicit badge(QWidget *parent = nullptr);
    ~badge();

private slots:
    void addProfil(QWidget *container, QString source);


private:
    Ui::badge *ui;
};

#endif // BADGE_H
