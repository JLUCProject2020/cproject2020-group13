#include "dt3.h"
#include "ui_dt3.h"
#include <QPainter>
#include "player.h"
#include <QPropertyAnimation>
dt3::dt3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dt3)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}

dt3::~dt3()
{
    delete ui;
}
void dt3::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/ndt3.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void dt3::on_toolButton_clicked()
{
    this->P17= new PPT17;
    this->close();
    P17->show();
}
