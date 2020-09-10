#include "ppt7.h"
#include "ui_ppt7.h"
#include <QPainter>
#include "player.h"
PPT7::PPT7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT7)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(85, 170, 255);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT7::~PPT7()
{
    delete ui;
}
void PPT7::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n7.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT7::on_pushButton_clicked()
{
    this->P8= new PPT8;
    this->close();
    P8->show();
}
