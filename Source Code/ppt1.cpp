#include "ppt1.h"
#include "ppt59.h"
#include "ui_ppt1.h"
#include <QPainter>
#include "dataview.h"
#include <QSound>
PPT1::PPT1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT1)
{

    ui->setupUi(this);
    this->setFixedSize(1200,800);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));


    this->setAttribute(Qt::WA_DeleteOnClose);

    this->ui->pushButton->hide();
    ui->bt->setStyleSheet("border-radius:10px");
    //setStyleSheet("QPushButton{color:red}");
   // ui->pp->setStyleSheet("QPushButton{background-color:pink}");

    QSound *startsound=new QSound(":/test.wav",this);
        startsound->play();//
        startsound->setLoops(-1);

}

PPT1::~PPT1()
{
    delete ui;
}



void PPT1::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/xb.jpg").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}




void PPT1::on_radioButton_clicked()//游戏开始键
{

    this->P3=new PPT3;
    this->close();
    P3->show();
}

void PPT1::on_radioButton_2_clicked()//规则说明键
{
    this->P2=new PPT2;
    P2->show();
    this->close();
}

void PPT1::on_radioButton_3_clicked()//退出游戏键
{
    this->close();

}

void PPT1::on_radioButton_4_clicked()
{
    //查看记录
    DataView *dv = new DataView;
    dv->show();
    this->close();
}

void PPT1::on_pushButton_clicked()
{
    //测试按钮
    PPT59 *P59=new PPT59;
    P59->show();
    this->close();
}
