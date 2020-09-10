#include "ppt18.h"
#include "ui_ppt18.h"
#include <QPainter>
#include "player.h"

PPT18::PPT18(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT18)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    setStyleSheet("QPushButton{color:green}");
    ui->dh2->setStyleSheet("border-radius:10px;");
    //ui->dh2->setStyleSheet("color:green;");
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT18::~PPT18()
{
    delete ui;
}
void PPT18::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/hr.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT18::on_radioButton_clicked()
{
    this->P19= new PPT19;
    this->close();
    P19->show();

}

void PPT18::on_radioButton_2_clicked()
{
    this->P20= new PPT20;
    this->close();
    P20->show();

}
