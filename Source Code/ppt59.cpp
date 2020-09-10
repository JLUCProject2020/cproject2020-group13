#include "ppt59.h"
#include "ui_ppt59.h"
#include <QPainter>
#include "player.h"
#include "ppt4.h"
#include <fstream>
#include <iostream>

using namespace std;

PPT59::PPT59(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PPT59)
{
    ui->setupUi(this);
    this->setFixedSize(window_w,window_h);
    //查看积分按钮的位置
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小

    this->ui->pushButton_2->setGeometry(window_w-2*btn_w-20,window_h-btn_h-10,btn_w,btn_h); //按钮的位置及大小

    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->ui->pushButton->setEnabled(false);
}

PPT59::~PPT59()
{
    delete ui;
}
void PPT59::paintEvent(QPaintEvent *)
{
     QPixmap pixmap = QPixmap(":/P1-6/IMAGE/59.png").scaled(this->size());
     QPainter painter(this);
     painter.drawPixmap(this->rect(), pixmap);
}
void PPT59::on_pushButton_clicked()
{
//记录信息
    ofstream out; //定义一个输出流
    out.open("data.txt",ios::app); //向文件中追加写入
    if(out)
    {
        out << P1.get_val_study() << " ";
        out << P1.get_val_health() << " ";
        out << P1.get_val_person() << " ";

    }
    out << "\n";
    out.close(); //关闭文件输出流

    if(P1.get_val_health()>=0&&P1.get_val_study()>=0)
        {
        this->P61= new PPT61;
        this->close();
        P61->show();}
        else {
           this->close();
        }

}



void PPT59::on_pushButton_2_clicked()
{
    //查看积分
    P1.ShowValue();
    this->ui->pushButton->setEnabled(true);

    if(P1.get_val_health()<=0||P1.get_val_study()<=0)
    {
        PPT4 *p4 = new PPT4;
        p4->show();
        P1.init_val();
        this->close();
    }



}
