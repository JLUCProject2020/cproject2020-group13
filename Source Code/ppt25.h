#ifndef PPT25_H
#define PPT25_H

#include "ppt26.h"
#include <QWidget>

namespace Ui {
class PPT25;
}

class PPT25 : public QWidget
{
    Q_OBJECT

public:
    explicit PPT25(QWidget *parent = 0);
    ~PPT25();
      void paintEvent(QPaintEvent *);

private slots:
      //void on_pushButton_clicked();

      void on_jq3_clicked();

private:
    Ui::PPT25 *ui;
          PPT26 *P26;
};

#endif // PPT25_H
