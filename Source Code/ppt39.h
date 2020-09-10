#ifndef PPT39_H
#define PPT39_H
#include "ppt40.h"
#include "ppt41.h"
#include <QWidget>

namespace Ui {
class PPT39;
}

class PPT39 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT39(QWidget *parent = 0);
    ~PPT39();
    void paintEvent(QPaintEvent *);
    void on_pushButton_clicked();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::PPT39 *ui;
    PPT40 *P40;
    PPT41 *P41;
};

#endif // PPT39_H
