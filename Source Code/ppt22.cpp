#include "ppt22.h"
#include "ui_ppt22.h"
#include <QPainter>
#include "player.h"

PPT22::PPT22(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT22)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    setStyleSheet("QPushButton{color:orange}");

    ui->dh3->setStyleSheet("border-radius:10px");
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT22::~PPT22()
{
    delete ui;
}
void PPT22::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/yy.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT22::on_radioButton_clicked()
{
    //人缘值+2
    P1.val_person_add(2);
    this->P23= new PPT23;
    this->close();
    P23->show();
}

void PPT22::on_radioButton_2_clicked()
{

    this->P24= new PPT24;
    this->close();
    P24->show();
}
