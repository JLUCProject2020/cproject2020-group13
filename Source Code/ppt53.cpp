#include "ppt53.h"
#include "ui_ppt53.h"
#include "player.h"

PPT53::PPT53(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT53)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));


    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT53::~PPT53()
{
    delete ui;
}

void PPT53::on_radioButton_clicked()
{
    //学习值+5
    P1.val_study_add(5);
    this->P54= new PPT54;
    this->close();
    P54->show();
}

void PPT53::on_radioButton_2_clicked()
{
    this->P59= new PPT59;
    this->close();
    P59->show();
}
