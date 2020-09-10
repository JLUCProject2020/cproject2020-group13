#ifndef PPT30_H
#define PPT30_H
#include "ppt31.h"
#include <QWidget>

namespace Ui {
class PPT30;
}

class PPT30 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT30(QWidget *parent = 0);
    ~PPT30();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT30 *ui;
       PPT31 *P31;

};

#endif // PPT30_H
