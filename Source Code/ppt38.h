#ifndef PPT38_H
#define PPT38_H
#include "ppt39.h"
#include <QWidget>

namespace Ui {
class PPT38;
}

class PPT38 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT38(QWidget *parent = 0);
    ~PPT38();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();


private:
    Ui::PPT38 *ui;
    PPT39 *P39;
};

#endif // PPT38_H
