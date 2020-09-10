#ifndef PPT37_H
#define PPT37_H
#include "ppt38.h"
#include "dt6.h"
#include <QWidget>

namespace Ui {
class PPT37;
}

class PPT37 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT37(QWidget *parent = 0);
    ~PPT37();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PPT37 *ui;
     PPT38 *P38;
      dt6 *d6;
};

#endif // PPT37_H
