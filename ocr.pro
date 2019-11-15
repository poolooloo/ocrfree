#-------------------------------------------------
#
# Project created by QtCreator 2019-11-05T17:10:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ocr
TEMPLATE = app
CONFIG += c++11
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += ./aip-cpp-sdk-0.7.10

LIBS +=  -L/usr/local/lib /usr/local/lib/libjsoncpp.a
LIBS += -lcurl -lcrypto

SOURCES += \
        main.cpp \
        ocrmainwindow.cpp

HEADERS += \
        ocrmainwindow.h \
    aip-cpp-sdk-0.7.10/base/base.h \
    aip-cpp-sdk-0.7.10/base/base64.h \
    aip-cpp-sdk-0.7.10/base/http.h \
    aip-cpp-sdk-0.7.10/base/utils.h \
    aip-cpp-sdk-0.7.10/body_analysis.h \
    aip-cpp-sdk-0.7.10/content_censor.h \
    aip-cpp-sdk-0.7.10/easydl.h \
    aip-cpp-sdk-0.7.10/face.h \
    aip-cpp-sdk-0.7.10/image_classify.h \
    aip-cpp-sdk-0.7.10/image_search.h \
    aip-cpp-sdk-0.7.10/kg.h \
    aip-cpp-sdk-0.7.10/nlp.h \
    aip-cpp-sdk-0.7.10/ocr.h \
    aip-cpp-sdk-0.7.10/speech.h

FORMS += \
        ocrmainwindow.ui

DISTFILES += \
    aip-cpp-sdk-0.7.10/README.md