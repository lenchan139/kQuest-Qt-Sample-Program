#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_actionABOUT_THIS_APP_triggered();

    void on_btnResult_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *mw2;
    int score;
    int click;
};

#endif // MAINWINDOW_H
