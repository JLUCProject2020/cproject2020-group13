#include "music.h"
#include "ui_music.h"
#include <QSound>
music::music(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::music)
{
    ui->setupUi(this);
    QSound *startsound=new QSound(":/test.wav",this);
        startsound->play();//
        startsound->setLoops(-1);
}

music::~music()
{
    delete ui;
}
