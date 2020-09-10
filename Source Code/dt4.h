#ifndef DT4_H
#define DT4_H
#include "ppt34.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt4;
}

class dt4 : public QWidget
{
    Q_OBJECT

public:
    explicit dt4(QWidget *parent = 0);
    ~dt4();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();

private:
    Ui::dt4 *ui;
    PPT34 *P34;
};

#endif // DT4_H
