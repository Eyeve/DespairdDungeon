#include "MainWindow.h"

void MainWindow::keyPressEvent(QKeyEvent* event) {
    switch(event->key()) {
        case Qt::Key_R:
            camera->updateFrame(qRgb(255, 0, 0));
            break;
        case Qt::Key_G:
            camera->updateFrame(qRgb(0, 255, 0));
            break;
        case Qt::Key_B:
            camera->updateFrame(qRgb(0, 0, 255));
            break;
    }
    QMainWindow::keyPressEvent(event);
}
