#ifndef PPT52_H
#define PPT52_H
#include "ppt53.h"
#include <QWidget>

namespace Ui {
class PPT52;
}

class PPT52 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT52(QWidget *parent = 0);
    ~PPT52();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT52 *ui;
     PPT53 *P53;
};

#endif // PPT52_H
