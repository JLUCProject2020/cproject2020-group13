#ifndef PPT34_H
#define PPT34_H

#include <QWidget>
#include "ppt35.h"
#include "ppt36.h"
namespace Ui {
class PPT34;
}

class PPT34 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT34(QWidget *parent = 0);
    ~PPT34();
    void paintEvent(QPaintEvent *);

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::PPT34 *ui;
     PPT35 *P35;
     PPT36 *P36;
};

#endif // PPT34_H
