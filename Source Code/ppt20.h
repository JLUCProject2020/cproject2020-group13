#ifndef PPT20_H
#define PPT20_H
#include "ppt21.h"
#include <QWidget>

namespace Ui {
class PPT20;
}

class PPT20 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT20(QWidget *parent = 0);
    ~PPT20();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT20 *ui;

     PPT21 *P21;
};

#endif // PPT20_H
