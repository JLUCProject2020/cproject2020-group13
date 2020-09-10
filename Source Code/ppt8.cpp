#include "ppt8.h"
#include "ui_ppt8.h"
#include <QPainter>
#include "player.h"
PPT8::PPT8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT8)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
ui->gz2->setStyleSheet("border-radius:10px");
    this->setAttribute(Qt::WA_DeleteOnClose);

}

PPT8::~PPT8()
{
    delete ui;
}

void PPT8::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n8.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT8::on_pushButton_clicked()
{
    this->P9= new PPT9;
    this->close();
    P9->show();
}
