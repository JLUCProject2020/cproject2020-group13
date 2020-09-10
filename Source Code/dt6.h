#ifndef DT6_H
#define DT6_H
#include "ppt43.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class dt6;
}

class dt6 : public QWidget
{
    Q_OBJECT

public:
    explicit dt6(QWidget *parent = 0);
    ~dt6();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();

private:
    Ui::dt6 *ui;
     PPT43 *P43;
};

#endif // DT6_H
