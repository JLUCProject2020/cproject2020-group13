#include "ppt14.h"
#include "ui_ppt14.h"
#include <QPainter>
#include "player.h"
PPT14::PPT14(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT14)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT14::~PPT14()
{
    delete ui;
}
void PPT14::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/n14.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}





void PPT14::on_radioButton_2_clicked()
{
//人缘值+2
    P1.val_person_add(2);
    this->P16= new PPT16;
    this->close();
    P16->show();

}

void PPT14::on_radioButton_3_clicked()
{

    this->d3= new dt3;
    this->close();
    d3->show();

}

void PPT14::on_radioButton_clicked()
{
    //人缘值+2
    P1.val_person_add(2);
    this->P15= new PPT15;
    this->close();
    P15->show();
}


