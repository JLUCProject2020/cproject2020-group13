#include "ppt45.h"
#include "ui_ppt45.h"
#include "player.h"

PPT45::PPT45(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT45)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));


    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT45::~PPT45()
{
    delete ui;
}

void PPT45::on_radioButton_clicked()
{
    //学习值+2
    P1.val_study_add(2);
    this->P46= new PPT46;

    this->close();
    P46->show();
}

void PPT45::on_radioButton_2_clicked()
{
    //学习值+1
     P1.val_study_add(1);
    this->P47= new PPT47;
    this->close();
    P47->show();

}

void PPT45::on_radioButton_3_clicked()
{
   //学习值+3
     P1.val_study_add(3);
    this->P48= new PPT48;
    this->close();
    P48->show();

}

void PPT45::on_radioButton_4_clicked()
{
    //学习值-2你四六级没过
     P1.val_study_add(-2);
    this->P49= new PPT49;
    this->close();
    P49->show();

}

void PPT45::on_radioButton_5_clicked()
{
    //你分没了
    this->P50= new PPT50;
    this->close();
    P50->show();

}
