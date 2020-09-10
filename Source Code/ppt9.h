#ifndef PPT9_H
#define PPT9_H
#include "ppt10.h"
#include <QWidget>

namespace Ui {
class PPT9;
}

class PPT9 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT9(QWidget *parent = 0);
    ~PPT9();

private slots:
    void on_pushButton_clicked();
    void paintEvent(QPaintEvent *);

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
    Ui::PPT9 *ui;
       PPT10 *P10;
};

#endif // PPT9_H
