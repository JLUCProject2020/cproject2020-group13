#ifndef DT2_H
#define DT2_H
#include "ppt14.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt2;
}

class dt2 : public QWidget
{
    Q_OBJECT

public:
    explicit dt2(QWidget *parent = 0);
    ~dt2();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();


private:
    Ui::dt2 *ui;
    PPT14 *P14;
};

#endif // DT2_H
