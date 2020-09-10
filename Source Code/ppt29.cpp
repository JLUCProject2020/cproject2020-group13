#include "ppt29.h"
#include "ui_ppt29.h"
#include <QPainter>
#include "player.h"
PPT29::PPT29(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT29)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT29::~PPT29()
{
    delete ui;
}
void PPT29::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n29.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT29::on_pushButton_clicked()
{
    this->P30= new PPT30;
    this->close();
    P30->show();
}
