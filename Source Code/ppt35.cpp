#include "ppt35.h"
#include "ui_ppt35.h"
#include <QPainter>
#include "player.h"

PPT35::PPT35(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT35)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
  //  this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:rgb(255, 170, 127);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT35::~PPT35()
{
    delete ui;
}
void PPT35::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/np35.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT35::on_pushButton_clicked()
{

}


void PPT35::on_pushButton_2_clicked()
{
    this->d5= new dt5;
    this->close();
    d5->show();
}
