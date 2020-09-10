#ifndef DT1_H
#define DT1_H
#include "ppt11.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt1;
}

class dt1 : public QWidget
{
    Q_OBJECT

public:
    explicit dt1(QWidget *parent = 0);
    ~dt1();
    void paintEvent(QPaintEvent *);

private slots:


    void on_toolButton_clicked();

private:
    Ui::dt1 *ui;
    PPT11 *P11;
};

#endif // DT1_H
