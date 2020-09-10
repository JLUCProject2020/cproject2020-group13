#ifndef PPT4_H
#define PPT4_H

#include "ppt5.h"

#include <QWidget>

namespace Ui {
class PPT4;
}

class PPT4 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT4(QWidget *parent = 0);
    ~PPT4();
     //void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT4 *ui;
    PPT5 *P5;
};

#endif // PPT4_H
