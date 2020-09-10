#ifndef PPT35_H
#define PPT35_H
#include "dt5.h"
#include <QWidget>

namespace Ui {
class PPT35;
}

class PPT35 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT35(QWidget *parent = 0);
    ~PPT35();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PPT35 *ui;
         dt5 *d5;
};

#endif // PPT35_H
