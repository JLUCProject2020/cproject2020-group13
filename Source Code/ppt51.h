#ifndef PPT51_H
#define PPT51_H
#include "ppt52.h"
#include <QWidget>

namespace Ui {
class PPT51;
}

class PPT51 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT51(QWidget *parent = 0);
    ~PPT51();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT51 *ui;
    PPT52 *P52;

};

#endif // PPT51_H
