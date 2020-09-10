#include "ppt1.h"
#include <QApplication>
#include "player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PPT1 w;
    P1.init_val();
    w.show();

    return a.exec();
}
