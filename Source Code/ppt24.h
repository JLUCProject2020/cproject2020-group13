#ifndef PPT24_H
#define PPT24_H

#include "ppt25.h"

#include <QWidget>

namespace Ui {
class PPT24;
}

class PPT24 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT24(QWidget *parent = 0);
    ~PPT24();

    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT24 *ui;
        PPT25 *P25;
};

#endif // PPT24_H
