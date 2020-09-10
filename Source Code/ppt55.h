#ifndef PPT55_H
#define PPT55_H
#include "ppt56.h"
#include <QWidget>

namespace Ui {
class PPT55;
}

class PPT55 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT55(QWidget *parent = 0);
    ~PPT55();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT55 *ui;
      PPT56 *P56;

};

#endif // PPT55_H
