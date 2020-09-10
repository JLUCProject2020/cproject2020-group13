#ifndef PPT43_H
#define PPT43_H
#include "ppt44.h"
#include <QWidget>

namespace Ui {
class PPT43;
}

class PPT43 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT43(QWidget *parent = 0);
    ~PPT43();
    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT43 *ui;
    PPT44 *P44;
};

#endif // PPT43_H
