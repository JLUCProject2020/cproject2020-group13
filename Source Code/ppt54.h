#ifndef PPT54_H
#define PPT54_H
#include "ppt55.h"
#include <QWidget>

namespace Ui {
class PPT54;
}

class PPT54 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT54(QWidget *parent = 0);
    ~PPT54();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT54 *ui;
         PPT55 *P55;
};

#endif // PPT54_H
