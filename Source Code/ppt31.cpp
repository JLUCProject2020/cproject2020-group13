#include "ppt31.h"
#include "ui_ppt31.h"
#include <QPainter>
#include "player.h"
#include "ppt4.h"

PPT31::PPT31(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT31)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton_2->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    //查看积分按钮的位置
    this->ui->pushButton->setGeometry(window_w-2*btn_w-20,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小


    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->ui->pushButton_2->setEnabled(false);
}

PPT31::~PPT31()
{
    delete ui;
}
void PPT31::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/p31.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT31::on_pushButton_2_clicked()
{//继续按钮
    this->P32= new PPT32;
    this->close();
    P32->show();
}

void PPT31::on_pushButton_clicked()
{
    //查看积分
    P1.ShowValue();
    this->ui->pushButton_2->setEnabled(true);

    if(P1.get_val_health()<=0||P1.get_val_study()<=0)
    {
        PPT4 *p4 = new PPT4;
        p4->show();
        P1.init_val();
        this->close();
    }

}
