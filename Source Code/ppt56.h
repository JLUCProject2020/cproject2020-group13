#ifndef PPT56_H
#define PPT56_H
#include "ppt57.h"
#include <QWidget>

namespace Ui {
class PPT56;
}

class PPT56 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT56(QWidget *parent = 0);
    ~PPT56();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT56 *ui;
    PPT57 *P57;
};

#endif // PPT56_H
