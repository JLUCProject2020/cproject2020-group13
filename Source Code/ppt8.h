#ifndef PPT8_H
#define PPT8_H
#include "ppt9.h"
#include <QWidget>

namespace Ui {
class PPT8;
}

class PPT8 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT8(QWidget *parent = 0);
    ~PPT8();
    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT8 *ui;
        PPT9 *P9;
};

#endif // PPT8_H
