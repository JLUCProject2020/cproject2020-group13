#ifndef PPT27_H
#define PPT27_H
#include "ppt30.h"
#include <QWidget>

namespace Ui {
class PPT27;
}

class PPT27 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT27(QWidget *parent = 0);
    ~PPT27();
   void paintEvent(QPaintEvent *);

private slots:
   void on_pushButton_clicked();

private:
    Ui::PPT27 *ui;
     PPT30 *P30;
};

#endif // PPT27_H
