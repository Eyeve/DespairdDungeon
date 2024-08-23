#ifndef DUNGEONOFDESPAIR_TESTS_H
#define DUNGEONOFDESPAIR_TESTS_H

#include <QApplication>
#include "MainWindow.h"


namespace DoDtests {
    int testUI(int argc, char *argv[]) {
        QApplication app(argc, argv);
        MainWindow window;
        window.show();
        return app.exec();
    }
}


#endif //DUNGEONOFDESPAIR_TESTS_H
