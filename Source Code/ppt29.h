#ifndef PPT29_H
#define PPT29_H
#include "ppt30.h"
#include <QWidget>

namespace Ui {
class PPT29;
}

class PPT29 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT29(QWidget *parent = 0);
    ~PPT29();
   void paintEvent(QPaintEvent *);
private slots:
   void on_pushButton_clicked();

private:
    Ui::PPT29 *ui;
      PPT30 *P30;
};

#endif // PPT29_H
