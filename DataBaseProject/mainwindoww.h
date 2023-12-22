#ifndef MAINWINDOWW_H
#define MAINWINDOWW_H

#include <QMainWindow>

namespace Ui {
class MainWindoww;
}

class MainWindoww : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindoww(QWidget *parent = nullptr);
    ~MainWindoww();

private:
    Ui::MainWindoww *ui;
};

#endif // MAINWINDOWW_H
