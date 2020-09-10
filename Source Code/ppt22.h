#ifndef PPT22_H
#define PPT22_H
#include "ppt23.h"
#include "ppt24.h"

#include <QWidget>

namespace Ui {
class PPT22;
}

class PPT22 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT22(QWidget *parent = 0);
    ~PPT22();

     void paintEvent(QPaintEvent *);


private slots:
     void on_radioButton_clicked();

     void on_radioButton_2_clicked();

private:
        Ui::PPT22 *ui;
         PPT23 *P23;
         PPT24 *P24;
    };

    #endif // PPT22_H
