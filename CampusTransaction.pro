#-------------------------------------------------
#
# Project created by QtCreator 2019-05-08T16:52:38
#
#-------------------------------------------------

QT       += core gui
android{
QT       += androidextras
}
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CampusTransaction
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        goodsdisplay.cpp \
        goodsinfomation.cpp \
        main.cpp \
        login.cpp \
        personalinfo.cpp \
        register.cpp \
        releasegoods.cpp \
        transaction.cpp

HEADERS += \
        goodsdisplay.h \
        goodsinfomation.h \
        login.h \
        personalinfo.h \
        register.h \
        releasegoods.h \
        sqlite.h \
        statement.h \
        transaction.h

FORMS += \
        goodsdisplay.ui \
        goodsinfomation.ui \
        login.ui \
        personalinfo.ui \
        register.ui \
        releasegoods.ui \
        transaction.ui

CONFIG += mobility
MOBILITY = 


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

android{
    sqlite.files += android/CampusTransaction.db
    sqlite.path = /assets/CampusTransaction
    INSTALLS += sqlite
}

DISTFILES += \
    android/AndroidManifest.xml \
    android/CampusTransaction.db \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml \
    android/src/xw/QtAndroid/CampusTransaction/CampusTransaction.java

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}
