
#include "ppt3.h"
#include "ui_ppt3.h"
#include <QPainter>



PPT3::PPT3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT3)
{
    ui->setupUi(this);
    this->setFixedSize(1200,800);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    ui->gz1->setStyleSheet("border-radius:10px");
    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT3::~PPT3()
{
    delete ui;
}
void PPT3::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/gz2.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);

     //按钮变色
      ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(255, 255, 127);color:rgb(255, 170, 0);  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                            "QPushButton:hover{background-color:white; color: black;}"
                                           "QPushButton:pressed{background-color:white; border-style: inset; }" );
      ui->pushButton_2->setStyleSheet("QPushButton{background-color:rgb(255, 255, 127);color:rgb(255, 170, 0);  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                            "QPushButton:hover{background-color:white; color: black;}"
                                           "QPushButton:pressed{background-color:white; border-style: inset; }" );
      ui->pushButton_3->setStyleSheet("QPushButton{background-color:rgb(255, 255, 127);color:rgb(255, 170, 0);  border-radius: 10px; border: 2px groove gray;border-style: outset;}"
                                            "QPushButton:hover{background-color:white; color: black;}"
                                           "QPushButton:pressed{background-color:white; border-style: inset; }" );

}

void PPT3::on_pushButton_clicked()
{
    this->P4=new PPT4;
    this->close();
    P4->show();

}

void PPT3::on_pushButton_2_clicked()
{
    this->P4=new PPT4;
    this->close();
    P4->show();

}

void PPT3::on_pushButton_3_clicked()
{
    this->P4=new PPT4;
    this->close();
    P4->show();

}
