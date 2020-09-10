#ifndef PPT15_H
#define PPT15_H
#include "dt3.h"
#include <QWidget>

namespace Ui {
class PPT15;
}

class PPT15 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT15(QWidget *parent = 0);
    ~PPT15();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT15 *ui;
    dt3 *d3;
};

#endif // PPT15_H
