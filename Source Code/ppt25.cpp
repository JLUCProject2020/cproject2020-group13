#include "ppt25.h"
#include "ui_ppt25.h"
#include <QPainter>
#include "player.h"
PPT25::PPT25(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT25)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    //ui->jq3->setStyleSheet("background-color: rgba(50, 0, 0, 0)");
    ui->jq3->setStyleSheet("QPushButton{background-color:rgb(170, 170, 255);color: white;  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                          "QPushButton:hover{background-color:white; color: black;}"
                                         "QPushButton:pressed{background-color:white; border-style: inset; }" );
}

PPT25::~PPT25()
{
    delete ui;
}
void PPT25::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n25.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}



void PPT25::on_jq3_clicked()
{
    this->P26= new PPT26;
    this->close();
    P26->show();

}
