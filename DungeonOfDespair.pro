QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    Source/Engine/Engine.cpp \
    Source/Creature/Creature.cpp \
    Source/Controller/Player.cpp \
    Source/EventHandler/EventHandler.cpp \
    Source/Map/Map.cpp \
    Source/Tileset/Tile.cpp \
    Source/Engine/DungeonOfDespair.cpp \
    Source/Generator/MapGenerator/TestRoomGenerator.cpp \
    Source/Map/Chunk.cpp \
    Source/Generator/CreatureGenerator/CreatureGenerator.cpp \
    Source/Utils/ChunkCords.cpp \
    Source/Utils/Cords.cpp \
    Source/UI/MainWindow.cpp

HEADERS += \
    Source/Entity/Entity.h \
    Source/Engine/Engine.h \
    Source/Utils/Utils.h \
    Source/Creature/Creature.h \
    Source/Controller/Controller.h \
    Source/Controller/Player.h \
    Source/Controller/ControllerEvent.h \
    Source/Utils/Direction.h \
    Source/Session/Session.h \
    Source/Session/SessionEvent.h \
    Source/EventHandler/EventHandler.h \
    Source/Utils/Cords.h \
    Source/Map/Map.h \
    Source/Tileset/Tile.h \
    Source/Generator/Generator.h \
    Source/Engine/DungeonOfDespair.h \
    Source/Generator/MapGenerator/MapGenerator.h \
    Source/Generator/MapGenerator/TestRoomGenerator.h \
    Source/Tileset/TileSet.h \
    Source/Config/Config.h \
    Source/Map/Chunk.h \
    Source/Generator/CreatureGenerator/CreatureGenerator.h \
    Source/Entity/Creature/Creature.h \
    Source/Collider/Collider.h \
    Source/Texture/Texture.h \
    Source/Entity/ColliderEntity.h \
    Source/Utils/ChunkCords.h \
    Source/UI/MainWindow.h

INCLUDEPATH += \
    Source \
    Source/Entity \
    Source/Entity/Creature \
    Source/Engine \
    Source/Config \
    Source/Utils \
    Source/Controller \
    Source/Generator \
    Source/Generator/MapGenerator \
    Source/Generator/CreatureGenerator \
    Source/Map \
    Source/EventHandler \
    Source/Session \
    Source/Tileset \
    Source/Collider \
    Source/Texture \
    Source/UI

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
