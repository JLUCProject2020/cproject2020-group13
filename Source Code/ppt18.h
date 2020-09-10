#ifndef PPT18_H
#define PPT18_H
#include "ppt19.h"
#include "ppt20.h"
#include <QWidget>

namespace Ui {
class PPT18;
}

class PPT18 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT18(QWidget *parent = 0);
    ~PPT18();
    void paintEvent(QPaintEvent *);

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::PPT18 *ui;
    PPT19 *P19;
    PPT20 *P20;
};

#endif // PPT18_H
