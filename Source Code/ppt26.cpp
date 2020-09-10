#include "ppt26.h"
#include "ui_ppt26.h"
#include "player.h"

PPT26::PPT26(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT26)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT26::~PPT26()
{
    delete ui;
}

void PPT26::on_radioButton_clicked()
{
    //人缘值-2
    P1.val_person_add(-2);
    this->P27= new PPT27;

    this->close();
    P27->show();
}

void PPT26::on_radioButton_2_clicked()
{
    //人缘值+2
    P1.val_person_add(2);
    this->P28= new PPT28;

    this->close();
    P28->show();
}

void PPT26::on_radioButton_3_clicked()
{
   //健康值-3
    P1.val_health_add(-3);
    this->P29= new PPT29;
    this->close();
    P29->show();
}
