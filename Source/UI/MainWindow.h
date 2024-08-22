#ifndef DUNGEONOFDESPAIR_MAINWINDOW_H
#define DUNGEONOFDESPAIR_MAINWINDOW_H

#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr): QMainWindow(parent) { initialization(); }
    ~MainWindow() {}

private:
    void initialization();

};
#endif // DUNGEONOFDESPAIR_MAINWINDOW_H
