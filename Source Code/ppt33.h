#ifndef PPT33_H
#define PPT33_H
#include "dt4.h"
#include <QWidget>

namespace Ui {
class PPT33;
}

class PPT33 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT33(QWidget *parent = 0);
    ~PPT33();
    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_10_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_12_clicked();

private:
    Ui::PPT33 *ui;
    dt4 *d4;

     void on_pushButton_2_clicked();
};

#endif // PPT33_H
