#include "ppt42.h"
#include "ui_ppt42.h"
#include <QPainter>
#include "player.h"

PPT42::PPT42(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT42)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    ui->zd1->setStyleSheet("QPushButton{color:pink}");
    ui->bt2->setStyleSheet("border-radius:10px");
    ui->zd1->setStyleSheet("border-radius:10px");
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT42::~PPT42()
{
    delete ui;
}
void PPT42::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/gz2.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT42::on_pushButton_clicked()
{
    this->d6= new dt6;
    this->close();
    d6->show();

}
