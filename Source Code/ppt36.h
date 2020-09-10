#ifndef PPT36_H
#define PPT36_H
#include "dt5.h"
#include <QWidget>

namespace Ui {
class PPT36;
}

class PPT36 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT36(QWidget *parent = 0);
    ~PPT36();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT36 *ui;
    dt5 *d5;
};

#endif // PPT36_H
