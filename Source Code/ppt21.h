#ifndef PPT21_H
#define PPT21_H
#include "ppt22.h"
#include <QWidget>

namespace Ui {
class PPT21;
}

class PPT21 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT21(QWidget *parent = 0);
    ~PPT21();

    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT21 *ui;
     PPT22 *P22;

};

#endif // PPT21_H
