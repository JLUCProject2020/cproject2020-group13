#include "dt2.h"
#include "ui_dt2.h"
#include <QPainter>
#include "player.h"
#include <QPropertyAnimation>
dt2::dt2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dt2)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}

dt2::~dt2()
{
    delete ui;
}
void dt2::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/ndt2.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void dt2::on_toolButton_clicked()
{
    this->P14= new PPT14;
    this->close();
    P14->show();
}
