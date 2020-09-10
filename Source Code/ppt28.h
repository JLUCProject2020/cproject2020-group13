#ifndef PPT28_H
#define PPT28_H
#include "ppt30.h"
#include <QWidget>

namespace Ui {
class PPT28;
}

class PPT28 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT28(QWidget *parent = 0);
    ~PPT28();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT28 *ui;
      PPT30 *P30;
};

#endif // PPT28_H
