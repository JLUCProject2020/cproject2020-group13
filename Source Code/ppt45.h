#ifndef PPT45_H
#define PPT45_H
#include "ppt46.h"
#include "ppt47.h"
#include "ppt48.h"
#include "ppt49.h"
#include "ppt50.h"
#include <QWidget>

namespace Ui {
class PPT45;
}

class PPT45 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT45(QWidget *parent = 0);
    ~PPT45();


private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

private:
    Ui::PPT45 *ui;
    PPT46 *P46;
    PPT47 *P47;
    PPT48 *P48;
    PPT49 *P49;
    PPT50 *P50;


};

#endif // PPT45_H
