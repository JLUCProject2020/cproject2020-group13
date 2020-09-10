#include "ppt21.h"
#include "ui_ppt21.h"
#include <QPainter>
#include "player.h"
PPT21::PPT21(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT21)
{
    ui->setupUi(this);

    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setAttribute(Qt::WA_DeleteOnClose);
}


PPT21::~PPT21()
{
    delete ui;
}

void PPT21::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/np21.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT21::on_pushButton_clicked()
{
    this->P22= new PPT22;
    this->close();
    P22->show();
}
