#ifndef PPT6_H
#define PPT6_H
#include "ppt7.h"
#include <QWidget>

namespace Ui {
class PPT6;
}

class PPT6 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT6(QWidget *parent = 0);
    ~PPT6();
void paintEvent(QPaintEvent *);
private slots:
void on_pushButton_clicked();

private:
    Ui::PPT6 *ui;
    PPT7 *P7;
};

#endif // PPT6_H
