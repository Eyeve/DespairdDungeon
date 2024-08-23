#ifndef DUNGEONOFDESPAIR_MAINWINDOW_H
#define DUNGEONOFDESPAIR_MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

#include "Camera.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

    Camera* camera;

public:
    MainWindow(QWidget* parent = nullptr): QMainWindow(parent), camera(new Camera(this)) { initialization(); }
    ~MainWindow() {}

protected:
    void keyPressEvent(QKeyEvent* event) override;

private:
    void initialization() { setCentralWidget(camera); }


};
#endif // DUNGEONOFDESPAIR_MAINWINDOW_H
