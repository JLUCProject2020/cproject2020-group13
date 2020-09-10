#include "ppt60.h"
#include "ui_ppt60.h"
#include <QPainter>
#include "player.h"
#include "ppt1.h"

PPT60::PPT60(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT60)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //查看积分按钮的位置
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT60::~PPT60()
{
    delete ui;
}
void PPT60::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/60.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT60::on_pushButton_clicked()
{
    PPT1 *ppt1= new PPT1;
    this->close();
    ppt1->show();
}
