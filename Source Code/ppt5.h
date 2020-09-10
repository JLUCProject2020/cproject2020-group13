#ifndef PPT5_H
#define PPT5_H
#include "ppt6.h"
#include <QWidget>

namespace Ui {
class PPT5;
}

class PPT5 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT5(QWidget *parent = 0);
    ~PPT5();
     void paintEvent(QPaintEvent *);
private slots:
     void on_pushButton_clicked();

     void on_stackedWidget_destroyed();

private:
    Ui::PPT5 *ui;
    PPT6 *P6;
};

#endif // PPT5_H
