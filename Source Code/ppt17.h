#ifndef PPT17_H
#define PPT17_H
#include "ppt18.h"
#include <QWidget>

namespace Ui {
class PPT17;
}

class PPT17 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT17(QWidget *parent = 0);
    ~PPT17();
 void paintEvent(QPaintEvent *);
private slots:
 void on_pushButton_clicked();

private:
    Ui::PPT17 *ui;
        PPT18 *P18;
};

#endif // PPT17_H
