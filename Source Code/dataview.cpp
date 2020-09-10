#include "dataview.h"
#include "ui_dataview.h"
#include "player.h"
#include "ppt1.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

DataView::DataView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataView)
{

    ui->setupUi(this);
    this->setFixedSize(1200,800);
    this->setWindowTitle("唐班天才小白养成记");
    this->setWindowIcon(QIcon(":/P1-6/IMAGE/TAQ.jpg"));
    this->ui->pushButton->setGeometry(window_w-btn_w-10,window_h-btn_h-40,btn_w,btn_h); //按钮的位置及大小

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->ui->plainTextEdit->hide();

//读文件

    int count=0;
    string line = "";
    ifstream in;
    in.open("data.txt",ios::in);
    this->ui->tableWidget->clear(); //初始化
    this->ui->tableWidget->setColumnCount(4); //4列
    QStringList strs = {"学术值", "健康值", "人缘值", "综合值"};
    this->ui->tableWidget->setHorizontalHeaderLabels(strs); //设置表头

    char str[255];
    //char *pstr = str;
    while(in)
    {
        in.getline(str,255);
        count++;
    }
    this->ui->tableWidget->setRowCount(count); //行数
    in.close();

    in.open("data.txt",ios::in);
    count = 0;
    while(in)
    {
        in.getline(str,255);
        line = str;

        istringstream istr(line);
        string out;
        int i = 0;
        while (istr >> out)
        {
            //this->ui->plainTextEdit->appendPlainText(QString::fromStdString(out));
            this->ui->tableWidget->setItem(count,i,new QTableWidgetItem(QString::fromStdString(out)));
            i++; //列
        }

        count++; //行

    }

    in.close();

    //计算综合值
    int sum = 0,a=0,b=0,c=0;
    int col_num = this->ui->tableWidget->rowCount();

    for(int i=0;i<col_num-1;i++)
    {
        a = this->ui->tableWidget->item(i,0)->text().toInt(); //去除tableWidget中的i行0列的文本 转为整数
        b = this->ui->tableWidget->item(i,1)->text().toInt();
        c = this->ui->tableWidget->item(i,2)->text().toInt();

        //权重
        sum = a + b + c;

        this->ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(sum)));
    }

}

DataView::~DataView()
{
    delete ui;
}

void DataView::on_pushButton_2_clicked()
{
    //数据排序
    int col_num = this->ui->tableWidget->rowCount();

    int data[255][4] = {0,0,0,0};

    for(int i=0;i<col_num-1;i++)
    {
        data[i][0] = this->ui->tableWidget->item(i,0)->text().toInt();
        data[i][1] = this->ui->tableWidget->item(i,1)->text().toInt();
        data[i][2] = this->ui->tableWidget->item(i,2)->text().toInt();
        data[i][3] = this->ui->tableWidget->item(i,3)->text().toInt();
    }

    //冒泡排序
    int i = 0,j = 0, k = 0;
    int temp = 0;
    for(i=0;i<col_num-2;i++)
    {
        for(j=0;j<col_num-2-i;j++)
            if(data[j][3]<data[j+1][3])
            {
                for(k=0;k<4;k++)
                {
                    temp = data[j][k];
                    data[j][k] = data[j+1][k];
                    data[j+1][k] = temp;
                }
            }

    }

    //把二维数组重新写到tableWidget里
    for(int i=0;i<col_num-1;i++)
    {
        for(k=0;k<4;k++)
        {
            this->ui->tableWidget->setItem(i,k,new QTableWidgetItem(QString::number(data[i][k])));
        }
    }


}

void DataView::on_pushButton_clicked()
{
    //返回
    PPT1 *ppt1 = new PPT1;
    ppt1->show();
    this->close();
}

void DataView::on_pushButton_3_clicked()
{
    //清空数据
    ofstream out; //定义一个输出流
    out.open("data.txt",ios::out); //向文件中追加写入
    out.close(); //关闭文件输出流
    this->ui->tableWidget->clear(); //清空表格框
    QStringList strs = {"学术值", "健康值", "人缘值", "综合值"};
    this->ui->tableWidget->setHorizontalHeaderLabels(strs); //设置表头

}
