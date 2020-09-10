#ifndef PPT48_H
#define PPT48_H
#include "dt7.h"
#include <QWidget>

namespace Ui {
class PPT48;
}

class PPT48 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT48(QWidget *parent = 0);
    ~PPT48();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::PPT48 *ui;
      dt7 *d7;
};

#endif // PPT48_H
