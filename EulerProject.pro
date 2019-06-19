QT -= gui

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11

QMAKE_CXXFLAGS+= -fopenmp
QMAKE_LFLAGS += -fopenmp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    mathutility.cpp \
    tasks/task1.cpp \
    tasks/itask.cpp \
    tasks/task2.cpp \
    tasks/task3.cpp \
    tasks/task4.cpp \
    tasks/task9.cpp \
    tasks/task10.cpp \
    tasks/task5.cpp \
    tasks/task6.cpp \
    tasks/task7.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    mathutility.h \
    tasks/itask.h \
    tasks/task1.h \
    tasks/task2.h \
    tasks/task3.h \
    tasks/task4.h \
    tasks/task9.h \
    tasks/task10.h \
    tasks/task5.h \
    tasks/task6.h \
    tasks/task7.h
