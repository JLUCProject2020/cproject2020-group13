#ifndef DT7_H
#define DT7_H
#include "ppt51.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt7;
}

class dt7 : public QWidget
{
    Q_OBJECT

public:
    explicit dt7(QWidget *parent = 0);
    ~dt7();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();

private:
    Ui::dt7 *ui;
     PPT51 *P51;
};

#endif // DT7_H
