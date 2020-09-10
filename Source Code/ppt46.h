#ifndef PPT46_H
#define PPT46_H
#include "dt7.h"
#include <QWidget>

namespace Ui {
class PPT46;
}

class PPT46 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT46(QWidget *parent = 0);
    ~PPT46();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::PPT46 *ui;
    dt7 *d7;

};

#endif // PPT46_H
