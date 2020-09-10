#include "player.h"
#include <QMessageBox>
//#include <QDebug>
#include <QDir>
#include <QMediaPlayer>
#include <QCoreApplication>
#include "music.h"
#include <QSound>
Player P1 = Player(); //实例化对象
int window_w = 1200;
int window_h = 800;
int btn_w = 100;
int btn_h = 50;


void Player::init_val()
{//构造函数 初始化数据
    this->val_study = 5;
    this->val_person = 5;
    this->val_health = 5;

//播放音乐

  //  QString runPath = QCoreApplication::applicationDirPath();//获取当前exe所在路径
   // QString absDir = runPath + "/"+"test.mp3";
         //qDebug() << absDir;
   // QMediaPlayer * player = new QMediaPlayer;
   // player->setMedia(QUrl::fromLocalFile(absDir));
   // player->setVolume(50);
   // player->play();



}

void Player::val_study_add(int num)
{
    this->val_study += num;

}

void Player::val_person_add(int num)
{
    this->val_person += num;

}

void Player::val_health_add(int num)
{
    this->val_health += num;

}

int Player::get_val_study()
{
    return this->val_study;
}

int Player::get_val_person()
{
    return this->val_person;
}

int Player::get_val_health()
{
    return this->val_health;
}

void Player::ShowValue()
{
    //int转QString字符串
    //参数二 进制(2 8 10) 参数三 精度 4位保留小数点后4位小数
    QString study = QString::number(this->get_val_study(), 10, 0);
    QString person = QString::number(this->get_val_person(), 10, 0);
    QString health = QString::number(this->get_val_health(), 10, 0);

    QMessageBox::information(NULL, "属性值", "[学术值]  "+study+'\n'+"[人缘值]  "+person+'\n'+"[健康值]  "+health+'\n');
}
