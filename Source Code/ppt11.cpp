#include "ppt11.h"
#include "ui_ppt11.h"
#include <QPainter>
#include "player.h"

PPT11::PPT11(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT11)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(170, 170, 255);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT11::~PPT11()
{
    delete ui;
}
void PPT11::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/np11.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT11::on_pushButton_clicked()
{
    this->P12= new PPT12;
    this->close();
    P12->show();
}
