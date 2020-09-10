#ifndef PPT14_H
#define PPT14_H
#include "ppt15.h"
#include "ppt16.h"
#include "dt3.h"


#include <QWidget>

namespace Ui {
class PPT14;
}

class PPT14 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT14(QWidget *parent = 0);
    ~PPT14();
    void paintEvent(QPaintEvent *);

private slots:

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_clicked();

private:
    Ui::PPT14 *ui;
      PPT15 *P15;
      PPT16 *P16;
      dt3 *d3;

};

#endif // PPT14_H
