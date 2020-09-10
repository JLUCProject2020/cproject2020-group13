#ifndef PPT58_H
#define PPT58_H
#include "ppt59.h"
#include <QWidget>

namespace Ui {
class PPT58;
}

class PPT58 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT58(QWidget *parent = 0);
    ~PPT58();
    void paintEvent(QPaintEvent *);


private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT58 *ui;
    PPT59 *P59;
};

#endif // PPT58_H
