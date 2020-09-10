#include "ppt39.h"
#include "ui_ppt39.h"
#include <QPainter>
#include "player.h"
PPT39::PPT39(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT39)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    ui->qj1->setStyleSheet("border-radius:10px");
    this->setAttribute(Qt::WA_DeleteOnClose);

}

PPT39::~PPT39()
{
    delete ui;
}
void PPT39::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/yy.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT39::on_radioButton_clicked()
{
    this->P40= new PPT40;

    this->close();
    P40->show();
}

void PPT39::on_radioButton_2_clicked()
{
   this->P41= new PPT41;
    this->close();
    P41->show();

}
