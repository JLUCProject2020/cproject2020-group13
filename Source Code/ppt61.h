#ifndef PPT61_H
#define PPT61_H
#include "ppt62.h"
#include <QWidget>
#include <QPropertyAnimation>
namespace Ui {
class PPT61;
}

class PPT61 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT61(QWidget *parent = 0);
    ~PPT61();
    void paintEvent(QPaintEvent *);

private slots:
    void on_toolButton_clicked();

private:
    Ui::PPT61 *ui;
     ppt62 *P62;

};

#endif // PPT61_H
