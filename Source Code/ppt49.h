#ifndef PPT49_H
#define PPT49_H
#include "dt7.h"
#include <QWidget>

namespace Ui {
class PPT49;
}

class PPT49 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT49(QWidget *parent = 0);
    ~PPT49();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::PPT49 *ui;
     dt7 *d7;
};
#endif // PPT49_H
