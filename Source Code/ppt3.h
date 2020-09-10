#ifndef PPT3_H
#define PPT3_H

#include <QWidget>
#include "ppt4.h"

namespace Ui{
class PPT3;
}

class PPT3 : public QWidget{
    Q_OBJECT

public:
    explicit PPT3(QWidget *parent = 0);
    ~PPT3();
        void paintEvent(QPaintEvent *);

private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_3_clicked();

private:
    Ui::PPT3 *ui;
    PPT4 *P4;
};

#endif // PPT3_H
