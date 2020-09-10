#ifndef PPT1_H
#define PPT1_H
#include <QPaintEvent>
#include <QWidget>
#include "ppt2.h"
#include "ppt3.h"
namespace Ui {
class PPT1;
}

class PPT1 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT1(QWidget *parent = 0);
    ~PPT1();
    void paintEvent(QPaintEvent *);

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::PPT1 *ui;
    PPT2 *P2;
    PPT3 *P3;
};

#endif // PPT1_H
