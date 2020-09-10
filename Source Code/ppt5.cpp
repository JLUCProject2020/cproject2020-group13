#include "ppt5.h"
#include "ui_ppt5.h"
#include <QPainter>
#include "player.h"
PPT5::PPT5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT5)
{
    ui->setupUi(this);

    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小

    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(85, 170, 255);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT5::~PPT5()
{
    delete ui;
}
void PPT5::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/xb.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT5::on_pushButton_clicked()
{
    this->P6= new PPT6;
    this->close();
    P6->show();
}

void PPT5::on_stackedWidget_destroyed()
{

}
