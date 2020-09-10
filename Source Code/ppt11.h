#ifndef PPT11_H
#define PPT11_H
#include "ppt12.h"
#include <QWidget>

namespace Ui {
class PPT11;
}

class PPT11 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT11(QWidget *parent = 0);
    ~PPT11();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT11 *ui;
        PPT12 *P12;
};

#endif // PPT11_H
