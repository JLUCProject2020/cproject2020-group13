#include "ppt56.h"
#include "ui_ppt56.h"
#include <QPainter>
#include "player.h"
PPT56::PPT56(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT56)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);

}

PPT56::~PPT56()
{
    delete ui;
}
void PPT56::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n56.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT56::on_pushButton_clicked()
{
    this->P57= new PPT57;
    this->close();
    P57->show();
}
