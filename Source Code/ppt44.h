#ifndef PPT44_H
#define PPT44_H
#include "ppt45.h"
#include <QWidget>

namespace Ui {
class PPT44;
}

class PPT44 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT44(QWidget *parent = 0);
    ~PPT44();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT44 *ui;
    PPT45 *P45;
};

#endif // PPT44_H
