#ifndef PPT57_H
#define PPT57_H
#include "ppt58.h"
#include <QWidget>

namespace Ui {
class PPT57;
}

class PPT57 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT57(QWidget *parent = 0);
    ~PPT57();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT57 *ui;
    PPT58 *P58;
};

#endif // PPT57_H
