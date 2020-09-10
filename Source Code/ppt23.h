#ifndef PPT23_H
#define PPT23_H
#include "ppt25.h"
#include <QWidget>

namespace Ui {
class PPT23;
}

class PPT23 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT23(QWidget *parent = 0);
    ~PPT23();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT23 *ui;
    PPT25 *P25;
};

#endif // PPT23_H
