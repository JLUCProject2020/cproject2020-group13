#include "ppt62.h"
#include "ui_ppt62.h"
#include <QPainter>
#include "player.h"
#include "ppt1.h"
ppt62::ppt62(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ppt62)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setAttribute(Qt::WA_DeleteOnClose);

    setStyleSheet("QPushButton{color:black}");
    ui->cd->setStyleSheet("border-radius:10px");
}

ppt62::~ppt62()
{
    delete ui;
}
void ppt62::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/62.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void ppt62::on_pushButton_clicked()
{
    this->P60= new PPT60;
    this->close();
    P60->show();
}
