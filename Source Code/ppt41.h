#ifndef PPT41_H
#define PPT41_H
#include "ppt42.h"
#include <QWidget>

namespace Ui {
class PPT41;
}

class PPT41 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT41(QWidget *parent = 0);
    ~PPT41();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT41 *ui;
    PPT42 *P42;
};

#endif // PPT41_H
