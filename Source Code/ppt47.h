#ifndef PPT47_H
#define PPT47_H
#include "dt7.h"
#include <QWidget>

namespace Ui {
class PPT47;
}

class PPT47 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT47(QWidget *parent = 0);
    ~PPT47();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::PPT47 *ui;
     dt7 *d7;

};

#endif // PPT47_H
