#ifndef PPT42_H
#define PPT42_H
#include "dt6.h"
#include <QWidget>

namespace Ui {
class PPT42;
}

class PPT42 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT42(QWidget *parent = 0);
    ~PPT42();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT42 *ui;
    dt6 *d6;

};

#endif // PPT42_H
