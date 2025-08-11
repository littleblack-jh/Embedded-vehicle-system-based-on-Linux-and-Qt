/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Video
{
public:
    QWidget *centralwidget;
    QLabel *top_label_date;
    QLabel *label_title;
    QWidget *layoutWidget_8;
    QHBoxLayout *TopLayout;
    QLabel *top_label_wifi;
    QLabel *top_label_bluetooth;
    QLabel *top_label_time;
    QWidget *layoutWidget_2;
    QVBoxLayout *MenuLayout;
    QPushButton *CarButton;
    QPushButton *MapButton;
    QPushButton *MusicButton;
    QPushButton *WeatherButton;
    QPushButton *VideoButton;
    QPushButton *MusicStart_2;

    void setupUi(QMainWindow *Video)
    {
        if (Video->objectName().isEmpty())
            Video->setObjectName("Video");
        Video->resize(1024, 600);
        Video->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/black.jpg);"));
        centralwidget = new QWidget(Video);
        centralwidget->setObjectName("centralwidget");
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
        label_title->setGeometry(QRect(240, 0, 461, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_title->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(16);
        label_title->setFont(font1);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(780, 0, 241, 32));
        TopLayout = new QHBoxLayout(layoutWidget_8);
        TopLayout->setObjectName("TopLayout");
        TopLayout->setContentsMargins(0, 0, 0, 0);
        top_label_wifi = new QLabel(layoutWidget_8);
        top_label_wifi->setObjectName("top_label_wifi");
        top_label_wifi->setMinimumSize(QSize(30, 30));
        top_label_wifi->setMaximumSize(QSize(30, 30));
        top_label_wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/WIFI.png);"));

        TopLayout->addWidget(top_label_wifi);

        top_label_bluetooth = new QLabel(layoutWidget_8);
        top_label_bluetooth->setObjectName("top_label_bluetooth");
        top_label_bluetooth->setMinimumSize(QSize(30, 30));
        top_label_bluetooth->setMaximumSize(QSize(30, 30));
        top_label_bluetooth->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/bluetooth.png);"));

        TopLayout->addWidget(top_label_bluetooth);

        top_label_time = new QLabel(layoutWidget_8);
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

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 60, 91, 451));
        MenuLayout = new QVBoxLayout(layoutWidget_2);
        MenuLayout->setObjectName("MenuLayout");
        MenuLayout->setContentsMargins(0, 0, 0, 0);
        CarButton = new QPushButton(layoutWidget_2);
        CarButton->setObjectName("CarButton");
        CarButton->setMinimumSize(QSize(80, 80));
        CarButton->setMaximumSize(QSize(80, 80));
        CarButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/daoche.png);"));

        MenuLayout->addWidget(CarButton);

        MapButton = new QPushButton(layoutWidget_2);
        MapButton->setObjectName("MapButton");
        MapButton->setMinimumSize(QSize(80, 80));
        MapButton->setMaximumSize(QSize(80, 80));
        MapButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/map1.png);"));

        MenuLayout->addWidget(MapButton);

        MusicButton = new QPushButton(layoutWidget_2);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setMinimumSize(QSize(80, 80));
        MusicButton->setMaximumSize(QSize(80, 80));
        MusicButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/home.png);"));

        MenuLayout->addWidget(MusicButton);

        WeatherButton = new QPushButton(layoutWidget_2);
        WeatherButton->setObjectName("WeatherButton");
        WeatherButton->setMinimumSize(QSize(80, 80));
        WeatherButton->setMaximumSize(QSize(80, 80));
        WeatherButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/weather.png);"));

        MenuLayout->addWidget(WeatherButton);

        VideoButton = new QPushButton(layoutWidget_2);
        VideoButton->setObjectName("VideoButton");
        VideoButton->setMinimumSize(QSize(80, 80));
        VideoButton->setMaximumSize(QSize(80, 80));
        VideoButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/video.png);"));

        MenuLayout->addWidget(VideoButton);

        MusicStart_2 = new QPushButton(centralwidget);
        MusicStart_2->setObjectName("MusicStart_2");
        MusicStart_2->setGeometry(QRect(0, 450, 30, 30));
        MusicStart_2->setMinimumSize(QSize(30, 30));
        MusicStart_2->setMaximumSize(QSize(30, 30));
        MusicStart_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/triangle.png);"));
        Video->setCentralWidget(centralwidget);

        retranslateUi(Video);

        QMetaObject::connectSlotsByName(Video);
    } // setupUi

    void retranslateUi(QMainWindow *Video)
    {
        Video->setWindowTitle(QCoreApplication::translate("Video", "MainWindow", nullptr));
        top_label_date->setText(QCoreApplication::translate("Video", "2024.05.10", nullptr));
        label_title->setText(QCoreApplication::translate("Video", "\345\260\217\351\273\221\346\231\272\350\203\275\350\275\246\350\275\275\347\263\273\347\273\237V1.0", nullptr));
        top_label_wifi->setText(QString());
        top_label_bluetooth->setText(QString());
        top_label_time->setText(QCoreApplication::translate("Video", "09:08", nullptr));
        CarButton->setText(QString());
        MapButton->setText(QString());
        MusicButton->setText(QString());
        WeatherButton->setText(QString());
        VideoButton->setText(QString());
        MusicStart_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Video: public Ui_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
