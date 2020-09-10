#include "ppt61.h"
#include "ui_ppt61.h"
#include <QPainter>
#include "player.h"

#include <QPropertyAnimation>
PPT61::PPT61(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT61)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->setAttribute(Qt::WA_DeleteOnClose);

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
}

PPT61::~PPT61()
{
    delete ui;
}
void PPT61::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/61.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT61::on_toolButton_clicked()
{
    this->P62= new ppt62;
    this->close();
    P62->show();
}
