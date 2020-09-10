#include "ppt2.h"
#include "ui_ppt2.h"
#include <QPainter>
#include "ppt1.h"
#include "player.h"

PPT2::PPT2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT2)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setAttribute(Qt::WA_DeleteOnClose);

    //QPixmap *pixmap = new QPixmap(":/res/dx4.jpg");
    //pixmap->scaled(ui->lb->size(), Qt::KeepAspectRatio);
    //ui->lb->setScaledContents(true);
    //ui->lb->setPixmap(*pixmap);


}

PPT2::~PPT2()
{
    delete ui;
}


void PPT2::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/p2.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT2::on_pushButton_clicked()
{
   PPT1* ppt1=new PPT1;
   ppt1->show();
   this->close();
}
