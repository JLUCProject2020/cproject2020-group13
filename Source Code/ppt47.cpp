#include "ppt47.h"
#include "ui_ppt47.h"
#include <QPainter>
#include "player.h"
PPT47::PPT47(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT47)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

this->setAttribute(Qt::WA_DeleteOnClose);}

PPT47::~PPT47()
{
    delete ui;
}
void PPT47::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/46GPA.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT47::on_pushButton_clicked()
{
    this->close();
    this->d7= new dt7;
    d7->show();

}
