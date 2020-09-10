#ifndef PPT60_H
#define PPT60_H

#include <QWidget>

namespace Ui {
class PPT60;
}

class PPT60 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT60(QWidget *parent = 0);
    ~PPT60();
    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_clicked();

private:
    Ui::PPT60 *ui;

};

#endif // PPT60_H
