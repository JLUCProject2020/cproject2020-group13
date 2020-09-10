#ifndef PPT31_H

#define PPT31_H
#include "ppt32.h"

#include <QWidget>

namespace Ui {
class PPT31;
}

class PPT31 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT31(QWidget *parent = 0);
    ~PPT31();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::PPT31 *ui;
    PPT32 *P32;


};
#endif // PPT31_H

