#ifndef PPT50_H
#define PPT50_H
#include "dt7.h"
#include <QWidget>

namespace Ui {
class PPT50;
}

class PPT50 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT50(QWidget *parent = 0);
    ~PPT50();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::PPT50 *ui;
      dt7 *d7;
};

#endif // PPT50_H
