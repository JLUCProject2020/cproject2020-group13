#include "ppt9.h"
#include "ui_ppt9.h"
#include <QPainter>
#include "player.h"
PPT9::PPT9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT9)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //按钮 水平坐标X 垂直坐标Y 宽W 高H
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
}

PPT9::~PPT9()
{
    delete ui;
}

void PPT9::on_pushButton_clicked()
{
//统计分数
    bool r1 = this->ui->radioButton->isChecked();
    bool r2 = this->ui->radioButton_2->isChecked();
    bool r3 = this->ui->radioButton_3->isChecked();

    bool r4 = this->ui->radioButton_4->isChecked();
    bool r5 = this->ui->radioButton_5->isChecked();
    bool r6 = this->ui->radioButton_6->isChecked();

    bool r7 = this->ui->radioButton_7->isChecked();
    bool r8 = this->ui->radioButton_8->isChecked();
    bool r9 = this->ui->radioButton_9->isChecked();

    bool r10 = this->ui->radioButton_10->isChecked();
    bool r11 = this->ui->radioButton_11->isChecked();
    bool r12 = this->ui->radioButton_12->isChecked();

    if(r1)
        P1.val_study_add(-2);
    else if(r3)
        P1.val_study_add(2);

    if(r4)
        P1.val_health_add(-2);
    else if(r6)
        P1.val_health_add(2);

    if(r7)
        P1.val_health_add(-2);
    else if(r9)
        P1.val_health_add(2);

    if(r10)
        P1.val_person_add(-2);
    else if(r12)
        P1.val_person_add(2);


    this->P10= new PPT10;
    this->close();
    P10->show();
}
void PPT9::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/p9.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}

void PPT9::on_radioButton_clicked()
{
    //学习能力-2

}

void PPT9::on_radioButton_2_clicked()
{
    //学习能力不变

}

void PPT9::on_radioButton_3_clicked()
{
    //学习能力+2

}

void PPT9::on_radioButton_4_clicked()
{
    //健康值-2

}

void PPT9::on_radioButton_5_clicked()
{
    //健康值不变

}

void PPT9::on_radioButton_6_clicked()
{
    //健康值+2

}

void PPT9::on_radioButton_7_clicked()
{
    //健康值-2

}

void PPT9::on_radioButton_8_clicked()
{
    //健康值不变

}

void PPT9::on_radioButton_9_clicked()
{
    //健康值+2

}

void PPT9::on_radioButton_10_clicked()
{
    //人缘值-2

}

void PPT9::on_radioButton_11_clicked()
{
    //人缘值不变

}

void PPT9::on_radioButton_12_clicked()
{
    //人缘值+2

}
