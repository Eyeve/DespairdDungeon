#ifndef DUNGEONOFDESPAIR_CAMERA_H
#define DUNGEONOFDESPAIR_CAMERA_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


class Camera: public QGraphicsView {

    Q_OBJECT

    QGraphicsPixmapItem* pixmapItem;
    constexpr static int weight = 21;
    constexpr static int height = 15;

public:
    Camera(QWidget* parent = nullptr): QGraphicsView(parent), pixmapItem(new QGraphicsPixmapItem()) {
        scale(30, 30);

        QGraphicsScene* scene = new QGraphicsScene(this);
        QImage startFrame(weight, height, QImage::Format_RGB32);
        startFrame.fill(Qt::white);
        pixmapItem->setPixmap(QPixmap::fromImage(std::move(startFrame)));
        scene->addItem(pixmapItem);
        setScene(scene);
    }

    void updateFrame(QRgb color) {
        QImage frame(weight, height, QImage::Format_RGB32);
        for (int x = 0; x < weight; ++x) {
            for (int y = 0; y < height; ++y) {
                frame.setPixel(x, y, color);
            }
        }
        frame.setPixel(weight / 2, height / 2, qRgb(0, 0, 0));
        pixmapItem->setPixmap(QPixmap::fromImage(std::move(frame)));
    }
};


#endif //DUNGEONOFDESPAIR_CAMERA_H
