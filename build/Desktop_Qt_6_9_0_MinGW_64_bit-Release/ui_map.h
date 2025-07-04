/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *MenuLayout;
    QPushButton *CarButton;
    QPushButton *MapButton;
    QPushButton *MusicButton;
    QPushButton *WeatherButton;
    QPushButton *SetButton;
    QLabel *top_label_date;
    QLabel *label_title;
    QWidget *layoutWidget_2;
    QHBoxLayout *TopLayout;
    QLabel *top_label_wifi;
    QLabel *top_label_bluetooth;
    QLabel *top_label_time;
    QPushButton *zoom_up;
    QPushButton *zoom_down;
    QPushButton *MusicStart_2;
    QWidget *map_display;
    QLabel *label_gps;

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName("Map");
        Map->resize(1024, 600);
        Map->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/black.jpg);"));
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 70, 91, 451));
        MenuLayout = new QVBoxLayout(layoutWidget);
        MenuLayout->setObjectName("MenuLayout");
        MenuLayout->setContentsMargins(0, 0, 0, 0);
        CarButton = new QPushButton(layoutWidget);
        CarButton->setObjectName("CarButton");
        CarButton->setMinimumSize(QSize(80, 80));
        CarButton->setMaximumSize(QSize(80, 80));
        CarButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/daoche.png);"));

        MenuLayout->addWidget(CarButton);

        MapButton = new QPushButton(layoutWidget);
        MapButton->setObjectName("MapButton");
        MapButton->setMinimumSize(QSize(80, 80));
        MapButton->setMaximumSize(QSize(80, 80));
        MapButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/map1.png);"));

        MenuLayout->addWidget(MapButton);

        MusicButton = new QPushButton(layoutWidget);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setMinimumSize(QSize(80, 80));
        MusicButton->setMaximumSize(QSize(80, 80));
        MusicButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/home.png);"));

        MenuLayout->addWidget(MusicButton);

        WeatherButton = new QPushButton(layoutWidget);
        WeatherButton->setObjectName("WeatherButton");
        WeatherButton->setMinimumSize(QSize(80, 80));
        WeatherButton->setMaximumSize(QSize(80, 80));
        WeatherButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/weather.png);"));

        MenuLayout->addWidget(WeatherButton);

        SetButton = new QPushButton(layoutWidget);
        SetButton->setObjectName("SetButton");
        SetButton->setMinimumSize(QSize(80, 80));
        SetButton->setMaximumSize(QSize(80, 80));
        SetButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/set.png);"));

        MenuLayout->addWidget(SetButton);

        top_label_date = new QLabel(centralwidget);
        top_label_date->setObjectName("top_label_date");
        top_label_date->setGeometry(QRect(0, 0, 131, 30));
        top_label_date->setMinimumSize(QSize(30, 30));
        top_label_date->setMaximumSize(QSize(16777215, 30));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        top_label_date->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(16);
        top_label_date->setFont(font);
        top_label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(290, 0, 461, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_title->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        label_title->setFont(font1);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(780, 0, 241, 32));
        TopLayout = new QHBoxLayout(layoutWidget_2);
        TopLayout->setObjectName("TopLayout");
        TopLayout->setContentsMargins(0, 0, 0, 0);
        top_label_wifi = new QLabel(layoutWidget_2);
        top_label_wifi->setObjectName("top_label_wifi");
        top_label_wifi->setMinimumSize(QSize(30, 30));
        top_label_wifi->setMaximumSize(QSize(30, 30));
        top_label_wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/WIFI.png);"));

        TopLayout->addWidget(top_label_wifi);

        top_label_bluetooth = new QLabel(layoutWidget_2);
        top_label_bluetooth->setObjectName("top_label_bluetooth");
        top_label_bluetooth->setMinimumSize(QSize(30, 30));
        top_label_bluetooth->setMaximumSize(QSize(30, 30));
        top_label_bluetooth->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/bluetooth.png);"));

        TopLayout->addWidget(top_label_bluetooth);

        top_label_time = new QLabel(layoutWidget_2);
        top_label_time->setObjectName("top_label_time");
        top_label_time->setMinimumSize(QSize(30, 30));
        top_label_time->setMaximumSize(QSize(16777215, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        top_label_time->setPalette(palette2);
        top_label_time->setFont(font);
        top_label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        TopLayout->addWidget(top_label_time);

        zoom_up = new QPushButton(centralwidget);
        zoom_up->setObjectName("zoom_up");
        zoom_up->setGeometry(QRect(880, 540, 50, 50));
        zoom_up->setMinimumSize(QSize(50, 50));
        zoom_up->setMaximumSize(QSize(50, 50));
        zoom_up->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/zoom_up.png);"));
        zoom_down = new QPushButton(centralwidget);
        zoom_down->setObjectName("zoom_down");
        zoom_down->setGeometry(QRect(950, 540, 50, 50));
        zoom_down->setMinimumSize(QSize(50, 50));
        zoom_down->setMaximumSize(QSize(50, 50));
        zoom_down->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/zoom_down.png);"));
        MusicStart_2 = new QPushButton(centralwidget);
        MusicStart_2->setObjectName("MusicStart_2");
        MusicStart_2->setGeometry(QRect(0, 190, 30, 30));
        MusicStart_2->setMinimumSize(QSize(30, 30));
        MusicStart_2->setMaximumSize(QSize(30, 30));
        MusicStart_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/triangle.png);"));
        map_display = new QWidget(centralwidget);
        map_display->setObjectName("map_display");
        map_display->setGeometry(QRect(150, 40, 850, 500));
        map_display->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/map_default.png);"));
        label_gps = new QLabel(centralwidget);
        label_gps->setObjectName("label_gps");
        label_gps->setGeometry(QRect(160, 550, 701, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_gps->setPalette(palette3);
        label_gps->setFont(font1);
        label_gps->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Map->setCentralWidget(centralwidget);
        map_display->raise();
        layoutWidget->raise();
        top_label_date->raise();
        label_title->raise();
        layoutWidget_2->raise();
        zoom_up->raise();
        zoom_down->raise();
        MusicStart_2->raise();
        label_gps->raise();

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QCoreApplication::translate("Map", "MainWindow", nullptr));
        CarButton->setText(QString());
        MapButton->setText(QString());
        MusicButton->setText(QString());
        WeatherButton->setText(QString());
        SetButton->setText(QString());
        top_label_date->setText(QCoreApplication::translate("Map", "2024.05.10", nullptr));
        label_title->setText(QCoreApplication::translate("Map", "\345\260\217\351\273\221\346\231\272\350\203\275\350\275\246\350\275\275\347\263\273\347\273\237V1.0", nullptr));
        top_label_wifi->setText(QString());
        top_label_bluetooth->setText(QString());
        top_label_time->setText(QCoreApplication::translate("Map", "09:08", nullptr));
        zoom_up->setText(QString());
        zoom_down->setText(QString());
        MusicStart_2->setText(QString());
        label_gps->setText(QCoreApplication::translate("Map", "GPS\345\210\235\345\247\213\345\214\226\344\270\255\357\274\214\350\257\267\347\250\215\345\220\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
