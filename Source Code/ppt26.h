#ifndef PPT26_H
#define PPT26_H
#include "ppt27.h"
#include "ppt28.h"
#include "ppt29.h"
#include <QWidget>

namespace Ui {
class PPT26;
}

class PPT26 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT26(QWidget *parent = 0);
    ~PPT26();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::PPT26 *ui;
    PPT27 *P27;
    PPT29 *P29;
    PPT28 *P28;
};

#endif // PPT26_H
