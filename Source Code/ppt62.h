#ifndef PPT62_H
#define PPT62_H
#include "ppt60.h"
#include <QWidget>

namespace Ui {
class ppt62;
}

class ppt62 : public QWidget
{
    Q_OBJECT

public:
    explicit ppt62(QWidget *parent = 0);
    ~ppt62();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ppt62 *ui;
    PPT60 *P60;

};

#endif // PPT62_H
