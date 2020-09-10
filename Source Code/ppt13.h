#ifndef PPT13_H
#define PPT13_H
#include "dt2.h"
#include <QWidget>

namespace Ui {
class PPT13;
}

class PPT13 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT13(QWidget *parent = 0);
    ~PPT13();
 void paintEvent(QPaintEvent *);
private slots:
 void on_pushButton_clicked();

private:
    Ui::PPT13 *ui;
         dt2 *d2;
};

#endif // PPT13_H
