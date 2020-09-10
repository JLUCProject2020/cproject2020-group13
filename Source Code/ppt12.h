#ifndef PPT12_H
#define PPT12_H
#include "ppt13.h"
#include <QWidget>
#include "dt2.h"
namespace Ui {
class PPT12;
}

class PPT12 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT12(QWidget *parent = 0);
    ~PPT12();
    void paintEvent(QPaintEvent *);

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::PPT12 *ui;
     PPT13 *P13;
     dt2 *d2;
};

#endif // PPT12_H
