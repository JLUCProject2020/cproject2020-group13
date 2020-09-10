#ifndef PPT7_H
#define PPT7_H
#include "ppt8.h"
#include <QWidget>

namespace Ui {
class PPT7;
}

class PPT7 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT7(QWidget *parent = 0);
    ~PPT7();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT7 *ui;
        PPT8 *P8;
};

#endif // PPT7_H
