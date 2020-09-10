#include "ppt34.h"
#include "ui_ppt34.h"
#include <QPainter>
#include "player.h"
PPT34::PPT34(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT34)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT34::~PPT34()
{
    delete ui;
}
void PPT34::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/P34.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT34::on_radioButton_clicked()
{
    //人缘值+2学习值+2
    P1.val_person_add(2);
    P1.val_study_add(2);
    this->P35= new PPT35;
    this->close();
    P35->show();

}

void PPT34::on_radioButton_2_clicked()
{
   //学术值+1
    P1.val_study_add(1);
    this->P36= new PPT36;
   this->close();
   P36->show();
}
