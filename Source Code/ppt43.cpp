#include "ppt43.h"
#include "ui_ppt43.h"
#include <QPainter>
#include "player.h"
PPT43::PPT43(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT43)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(255, 0, 0);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT43::~PPT43()
{
    delete ui;
}
void PPT43::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT43::on_pushButton_clicked()
{
    this->P44= new PPT44;
    this->close();
    P44->show();
}
