#ifndef PPT19_H
#define PPT19_H
#include "ppt21.h"
#include <QWidget>

namespace Ui {
class PPT19;
}

class PPT19 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT19(QWidget *parent = 0);
    ~PPT19();
        void paintEvent(QPaintEvent *);

private slots:
        void on_pushButton_clicked();

private:
    Ui::PPT19 *ui;
    PPT21 *P21;
};

#endif // PPT19_H
