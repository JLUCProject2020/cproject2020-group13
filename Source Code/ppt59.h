#ifndef PPT59_H
#define PPT59_H
#include "ppt61.h"
#include <QWidget>

namespace Ui {
class PPT59;
}

class PPT59 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT59(QWidget *parent = 0);
    ~PPT59();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PPT59 *ui;
    PPT61 *P61;
};

#endif // PPT59_H
