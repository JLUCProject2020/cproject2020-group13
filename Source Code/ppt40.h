#ifndef PPT40_H
#define PPT40_H
#include "ppt42.h"
#include <QWidget>

namespace Ui {
class PPT40;
}

class PPT40 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT40(QWidget *parent = 0);
    ~PPT40();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT40 *ui;
    PPT42 *P42;
};

#endif // PPT40_H
