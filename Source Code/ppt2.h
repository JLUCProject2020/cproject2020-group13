#ifndef PPT2_H
#define PPT2_H

#include <QWidget>

namespace Ui {
class PPT2;
}

class PPT2 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT2(QWidget *parent = 0);
    ~PPT2();
     void paintEvent(QPaintEvent *);

private slots:
     void on_pushButton_clicked();

private:
    Ui::PPT2 *ui;
};

#endif // PPT2_H
