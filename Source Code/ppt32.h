#ifndef PPT32_H
#define PPT32_H
#include "ppt33.h"
#include <QWidget>

namespace Ui {
class PPT32;
}

class PPT32 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT32(QWidget *parent = 0);
    ~PPT32();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_2_clicked();

private:
    Ui::PPT32 *ui;
    PPT33 *P33;

};

#endif // PPT32_H
