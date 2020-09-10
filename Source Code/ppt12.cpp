#include "ppt12.h"
#include "ui_ppt12.h"
#include <QPainter>
#include "player.h"
PPT12::PPT12(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT12)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    setStyleSheet("QPushButton{color:pink}");
    ui->dh1->setStyleSheet("border-radius:10px");
    //ui->dh1->setStyleSheet("color:pink;");
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT12::~PPT12()
{
    delete ui;
}
void PPT12::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/xx.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT12::on_radioButton_clicked()
{
    //人缘值+2学习值+2

    P1.val_person_add(2);
    P1.val_study_add(2);
    this->P13= new PPT13;
    this->close();
    P13->show();
}

void PPT12::on_radioButton_2_clicked()
{
    //学习值+2
    P1.val_study_add(2);
    this->d2= new dt2;
    this->close();
    d2->show();
}
