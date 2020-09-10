#ifndef DT3_H
#define DT3_H
#include "ppt17.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt3;
}

class dt3 : public QWidget
{
    Q_OBJECT

public:
    explicit dt3(QWidget *parent = 0);
    ~dt3();
     void paintEvent(QPaintEvent *);

private slots:
     void on_toolButton_clicked();

private:
    Ui::dt3 *ui;
    PPT17 *P17;
};

#endif // DT3_H
