#ifndef PPT53_H
#define PPT53_H
#include "ppt54.h"
#include "ppt59.h"
#include <QWidget>

namespace Ui {
class PPT53;
}

class PPT53 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT53(QWidget *parent = 0);
    ~PPT53();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::PPT53 *ui;
     PPT59 *P59;

       PPT54 *P54;
};

#endif // PPT53_H
