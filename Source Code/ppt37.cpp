#include "ppt37.h"
#include "ui_ppt37.h"
#include <QPainter>
#include "player.h"
PPT37::PPT37(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT37)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    //this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT37::~PPT37()
{
    delete ui;
}

void PPT37::on_pushButton_clicked()
{
    //学习值+1人缘值+1
    P1.val_study_add(1);
    P1.val_person_add(1);
    this->P38= new PPT38;
    this->close();
    P38->show();

}
void PPT37::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/37.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT37::on_pushButton_2_clicked()
{
    this->d6= new dt6;
    this->close();
    d6->show();

}
