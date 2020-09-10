#ifndef PPT10_H
#define PPT10_H
#include "dt1.h"
#include <QWidget>

namespace Ui {
class PPT10;
}

class PPT10 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT10(QWidget *parent = 0);
    ~PPT10();
      void paintEvent(QPaintEvent *);

private slots:
      void on_pushButton_clicked();

private:
    Ui::PPT10 *ui;
     dt1 *d1;
};

#endif // PPT10_H
