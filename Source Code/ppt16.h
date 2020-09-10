#ifndef PPT16_H
#define PPT16_H
#include "dt3.h"
#include <QWidget>

namespace Ui {
class PPT16;
}

class PPT16 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT16(QWidget *parent = 0);
    ~PPT16();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT16 *ui;
    dt3 *d3;
};

#endif // PPT16_H
