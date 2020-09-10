#ifndef DT5_H
#define DT5_H
#include "ppt37.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt5;
}

class dt5 : public QWidget
{
    Q_OBJECT

public:
    explicit dt5(QWidget *parent = 0);
    ~dt5();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();

private:
    Ui::dt5 *ui;
    PPT37 *P37;
};

#endif // DT5_H
