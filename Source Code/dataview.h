#ifndef DATAVIEW_H
#define DATAVIEW_H

#include <QMainWindow>

namespace Ui {
class DataView;
}

class DataView : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataView(QWidget *parent = nullptr);
    ~DataView();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DataView *ui;
};

#endif // DATAVIEW_H
