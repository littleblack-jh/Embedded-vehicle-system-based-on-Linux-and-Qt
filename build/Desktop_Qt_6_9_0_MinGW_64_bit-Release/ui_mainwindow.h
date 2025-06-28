/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *MusicWidget;
    QWidget *widget_3;
    QSlider *VolumeSlider;
    QLabel *label_lrc;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_current_pos;
    QSlider *MusicSlider;
    QLabel *label_total_length;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *MusicLeft;
    QPushButton *MusicStart;
    QPushButton *MusicRight;
    QPushButton *VolumeButton;
    QLabel *label_title_song;
    QComboBox *SongBox;
    QWidget *layoutWidget2;
    QVBoxLayout *MenuLayout;
    QPushButton *CarButton;
    QPushButton *MapButton;
    QPushButton *MusicButton;
    QPushButton *WeatherButton;
    QPushButton *SetButton;
    QLabel *label_title;
    QWidget *layoutWidget3;
    QHBoxLayout *TopLayout;
    QLabel *top_label_wifi;
    QLabel *top_label_bluetooth;
    QLabel *top_label_time;
    QWidget *WeatherWidget;
    QLabel *label_weathericon;
    QLabel *label_temperture;
    QLabel *label_weathertxt;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_AirQuality;
    QLabel *label_UVIndex;
    QLabel *label_4;
    QLabel *label_city;
    QWidget *CarStatusWidget;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_total_length_3;
    QLabel *top_label_date;
    QPushButton *MusicStart_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/img/black.jpg);"));
        MusicWidget = new QWidget(centralwidget);
        MusicWidget->setObjectName("MusicWidget");
        MusicWidget->setGeometry(QRect(170, 50, 411, 501));
        MusicWidget->setAutoFillBackground(false);
        MusicWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/gray.jpg);\n"
"border-radius:15px;\n"
""));
        widget_3 = new QWidget(MusicWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(40, 30, 321, 331));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/zhuanji.jpg);"));
        VolumeSlider = new QSlider(MusicWidget);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setGeometry(QRect(380, 240, 20, 160));
        VolumeSlider->setOrientation(Qt::Orientation::Vertical);
        label_lrc = new QLabel(MusicWidget);
        label_lrc->setObjectName("label_lrc");
        label_lrc->setGeometry(QRect(30, 370, 321, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_lrc->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(false);
        label_lrc->setFont(font);
        label_lrc->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
""));
        label_lrc->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(MusicWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 400, 411, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_current_pos = new QLabel(layoutWidget);
        label_current_pos->setObjectName("label_current_pos");
        label_current_pos->setMinimumSize(QSize(35, 20));
        label_current_pos->setMaximumSize(QSize(35, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        label_current_pos->setPalette(palette1);
        QFont font1;
        font1.setPointSize(9);
        label_current_pos->setFont(font1);
        label_current_pos->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_current_pos->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background:black;\n"
"}"));
        label_current_pos->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_current_pos);

        MusicSlider = new QSlider(layoutWidget);
        MusicSlider->setObjectName("MusicSlider");
        MusicSlider->setMinimumSize(QSize(300, 0));
        MusicSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"  border: 0px solid #bbb;\n"
"}\n"
" \n"
"QSlider::sub-page:horizontal {\n"
"  background: rgb(255,255,0);\n"
"  border-radius: 0px;\n"
"  margin-top: 8px;\n"
"  margin-bottom: 9px;\n"
"}\n"
" \n"
"QSlider::add-page:horizontal {\n"
"  background: rgb(0,0,0);\n"
"  border: 0px solid #777; \n"
"  border-radius: 2px; \n"
"  margin-top: 8px; \n"
"  margin-bottom: 9px; \n"
"}\n"
" \n"
"QSlider::handle:horizontal { \n"
"  background: rgb(255,255,255); \n"
"  border: 1px solid rgba(102,102,102,102); \n"
"  width: 8px; \n"
"  height: 8px; \n"
"  border-radius: 5px; \n"
"  margin-top: 2px; \n"
"  margin-bottom: 2px; \n"
"}\n"
" \n"
"QSlider::handle:horizontal:hover { \n"
"  background: rgb(255,255,0); \n"
"  border: 1px solid rgba(102,102,102,102); \n"
"  border-radius: 5px; \n"
"}\n"
" \n"
"QSlider::sub-page:horizontal:disabled { \n"
"  background: #bbb; \n"
"  border-color: #999; \n"
"}\n"
" \n"
"QSlider::add-page:horizontal:disabled { \n"
"  background: #eee; \n"
"  border-color: #99"
                        "9; \n"
"}\n"
" \n"
"QSlider::handle:horizontal:disabled { \n"
"  background: #eee; \n"
"  border: 1px solid #aaa; \n"
"  border-radius: 4px; \n"
"}"));
        MusicSlider->setOrientation(Qt::Orientation::Horizontal);
        MusicSlider->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_2->addWidget(MusicSlider);

        label_total_length = new QLabel(layoutWidget);
        label_total_length->setObjectName("label_total_length");
        label_total_length->setMinimumSize(QSize(35, 20));
        label_total_length->setMaximumSize(QSize(35, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_total_length->setPalette(palette2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(9);
        label_total_length->setFont(font2);
        label_total_length->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_total_length);

        widget_2 = new QWidget(MusicWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 430, 411, 71));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/black.jpg);\n"
"border-radius:0px;"));
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(90, 10, 211, 62));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MusicLeft = new QPushButton(layoutWidget1);
        MusicLeft->setObjectName("MusicLeft");
        MusicLeft->setMinimumSize(QSize(60, 60));
        MusicLeft->setMaximumSize(QSize(60, 60));
        MusicLeft->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/left_song.png);"));

        horizontalLayout->addWidget(MusicLeft);

        MusicStart = new QPushButton(layoutWidget1);
        MusicStart->setObjectName("MusicStart");
        MusicStart->setMinimumSize(QSize(60, 60));
        MusicStart->setMaximumSize(QSize(60, 60));
        MusicStart->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/music_start.png);"));

        horizontalLayout->addWidget(MusicStart);

        MusicRight = new QPushButton(layoutWidget1);
        MusicRight->setObjectName("MusicRight");
        MusicRight->setMinimumSize(QSize(60, 60));
        MusicRight->setMaximumSize(QSize(60, 60));
        MusicRight->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/right_song.png);"));

        horizontalLayout->addWidget(MusicRight);

        VolumeButton = new QPushButton(widget_2);
        VolumeButton->setObjectName("VolumeButton");
        VolumeButton->setGeometry(QRect(350, 10, 61, 61));
        VolumeButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/volume.png);"));
        label_title_song = new QLabel(MusicWidget);
        label_title_song->setObjectName("label_title_song");
        label_title_song->setGeometry(QRect(130, 0, 161, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_title_song->setPalette(palette3);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(14);
        font3.setBold(true);
        label_title_song->setFont(font3);
        label_title_song->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SongBox = new QComboBox(MusicWidget);
        SongBox->addItem(QString());
        SongBox->addItem(QString());
        SongBox->setObjectName("SongBox");
        SongBox->setGeometry(QRect(20, 0, 111, 21));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        SongBox->setFont(font4);
        SongBox->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        SongBox->setEditable(true);
        layoutWidget3->raise();
        widget_3->raise();
        VolumeSlider->raise();
        label_lrc->raise();
        widget_2->raise();
        label_title_song->raise();
        SongBox->raise();
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 60, 91, 451));
        MenuLayout = new QVBoxLayout(layoutWidget2);
        MenuLayout->setObjectName("MenuLayout");
        MenuLayout->setContentsMargins(0, 0, 0, 0);
        CarButton = new QPushButton(layoutWidget2);
        CarButton->setObjectName("CarButton");
        CarButton->setMinimumSize(QSize(80, 80));
        CarButton->setMaximumSize(QSize(80, 80));
        CarButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/daoche.png);"));

        MenuLayout->addWidget(CarButton);

        MapButton = new QPushButton(layoutWidget2);
        MapButton->setObjectName("MapButton");
        MapButton->setMinimumSize(QSize(80, 80));
        MapButton->setMaximumSize(QSize(80, 80));
        MapButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/map1.png);"));

        MenuLayout->addWidget(MapButton);

        MusicButton = new QPushButton(layoutWidget2);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setMinimumSize(QSize(80, 80));
        MusicButton->setMaximumSize(QSize(80, 80));
        MusicButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/home.png);"));

        MenuLayout->addWidget(MusicButton);

        WeatherButton = new QPushButton(layoutWidget2);
        WeatherButton->setObjectName("WeatherButton");
        WeatherButton->setMinimumSize(QSize(80, 80));
        WeatherButton->setMaximumSize(QSize(80, 80));
        WeatherButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/weather.png);"));

        MenuLayout->addWidget(WeatherButton);

        SetButton = new QPushButton(layoutWidget2);
        SetButton->setObjectName("SetButton");
        SetButton->setMinimumSize(QSize(80, 80));
        SetButton->setMaximumSize(QSize(80, 80));
        SetButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/set.png);"));

        MenuLayout->addWidget(SetButton);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(200, 0, 461, 30));
        QPalette palette4;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        label_title->setPalette(palette4);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(16);
        label_title->setFont(font5);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(780, 0, 241, 32));
        TopLayout = new QHBoxLayout(layoutWidget3);
        TopLayout->setObjectName("TopLayout");
        TopLayout->setContentsMargins(0, 0, 0, 0);
        top_label_wifi = new QLabel(layoutWidget3);
        top_label_wifi->setObjectName("top_label_wifi");
        top_label_wifi->setMinimumSize(QSize(30, 30));
        top_label_wifi->setMaximumSize(QSize(30, 30));
        top_label_wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/WIFI.png);"));

        TopLayout->addWidget(top_label_wifi);

        top_label_bluetooth = new QLabel(layoutWidget3);
        top_label_bluetooth->setObjectName("top_label_bluetooth");
        top_label_bluetooth->setMinimumSize(QSize(30, 30));
        top_label_bluetooth->setMaximumSize(QSize(30, 30));
        top_label_bluetooth->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/bluetooth.png);"));

        TopLayout->addWidget(top_label_bluetooth);

        top_label_time = new QLabel(layoutWidget3);
        top_label_time->setObjectName("top_label_time");
        top_label_time->setMinimumSize(QSize(30, 30));
        top_label_time->setMaximumSize(QSize(16777215, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        top_label_time->setPalette(palette5);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Consolas")});
        font6.setPointSize(16);
        top_label_time->setFont(font6);
        top_label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        TopLayout->addWidget(top_label_time);

        WeatherWidget = new QWidget(centralwidget);
        WeatherWidget->setObjectName("WeatherWidget");
        WeatherWidget->setGeometry(QRect(610, 60, 381, 171));
        WeatherWidget->setAutoFillBackground(false);
        WeatherWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/gray.jpg);\n"
"border-radius:15px;\n"
""));
        label_weathericon = new QLabel(WeatherWidget);
        label_weathericon->setObjectName("label_weathericon");
        label_weathericon->setGeometry(QRect(300, 0, 80, 80));
        label_weathericon->setAutoFillBackground(false);
        label_weathericon->setStyleSheet(QString::fromUtf8(""));
        label_weathericon->setPixmap(QPixmap(QString::fromUtf8(":/images/img/yin.png")));
        label_weathericon->setScaledContents(true);
        label_temperture = new QLabel(WeatherWidget);
        label_temperture->setObjectName("label_temperture");
        label_temperture->setGeometry(QRect(30, 0, 81, 71));
        QFont font7;
        font7.setPointSize(36);
        font7.setBold(true);
        label_temperture->setFont(font7);
        label_weathertxt = new QLabel(WeatherWidget);
        label_weathertxt->setObjectName("label_weathertxt");
        label_weathertxt->setGeometry(QRect(110, 30, 81, 31));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(true);
        label_weathertxt->setFont(font8);
        label_6 = new QLabel(WeatherWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 90, 20, 20));
        label_6->setMinimumSize(QSize(20, 20));
        label_6->setMaximumSize(QSize(20, 20));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/img/leaf.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(WeatherWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 120, 20, 20));
        label_7->setMinimumSize(QSize(20, 20));
        label_7->setMaximumSize(QSize(20, 20));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/img/sun_small.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(WeatherWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 120, 101, 20));
        label_8->setMinimumSize(QSize(101, 20));
        label_8->setMaximumSize(QSize(101, 20));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font9.setPointSize(12);
        font9.setBold(true);
        label_8->setFont(font9);
        label_AirQuality = new QLabel(WeatherWidget);
        label_AirQuality->setObjectName("label_AirQuality");
        label_AirQuality->setGeometry(QRect(260, 90, 60, 20));
        label_AirQuality->setMinimumSize(QSize(60, 20));
        label_AirQuality->setMaximumSize(QSize(60, 20));
        QFont font10;
        font10.setPointSize(12);
        font10.setBold(true);
        label_AirQuality->setFont(font10);
        label_UVIndex = new QLabel(WeatherWidget);
        label_UVIndex->setObjectName("label_UVIndex");
        label_UVIndex->setGeometry(QRect(260, 120, 60, 20));
        label_UVIndex->setMinimumSize(QSize(60, 20));
        label_UVIndex->setMaximumSize(QSize(60, 20));
        label_UVIndex->setFont(font10);
        label_4 = new QLabel(WeatherWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 90, 101, 20));
        label_4->setMinimumSize(QSize(101, 20));
        label_4->setMaximumSize(QSize(101, 20));
        label_4->setFont(font9);
        label_city = new QLabel(WeatherWidget);
        label_city->setObjectName("label_city");
        label_city->setGeometry(QRect(200, 30, 60, 20));
        label_city->setMinimumSize(QSize(60, 20));
        label_city->setMaximumSize(QSize(60, 20));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        label_city->setFont(font11);
        CarStatusWidget = new QWidget(centralwidget);
        CarStatusWidget->setObjectName("CarStatusWidget");
        CarStatusWidget->setGeometry(QRect(610, 250, 381, 291));
        CarStatusWidget->setAutoFillBackground(false);
        CarStatusWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/gray.jpg);\n"
"border-radius:15px;\n"
""));
        label_10 = new QLabel(CarStatusWidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(240, 130, 141, 141));
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/img/car_logo.png")));
        label_10->setScaledContents(true);
        label_13 = new QLabel(CarStatusWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 30, 211, 71));
        label_13->setFont(font7);
        label_14 = new QLabel(CarStatusWidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 100, 130, 20));
        label_14->setMinimumSize(QSize(130, 20));
        label_14->setMaximumSize(QSize(130, 20));
        label_14->setFont(font10);
        layoutWidget4 = new QWidget(CarStatusWidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 230, 98, 42));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(40, 40));
        label_12->setMaximumSize(QSize(40, 40));
        label_12->setAutoFillBackground(false);
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/img/battery.png")));
        label_12->setScaledContents(true);

        horizontalLayout_6->addWidget(label_12);

        label_total_length_3 = new QLabel(layoutWidget4);
        label_total_length_3->setObjectName("label_total_length_3");
        label_total_length_3->setMinimumSize(QSize(50, 40));
        label_total_length_3->setMaximumSize(QSize(50, 40));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_total_length_3->setPalette(palette6);
        label_total_length_3->setFont(font4);
        label_total_length_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(label_total_length_3);

        top_label_date = new QLabel(centralwidget);
        top_label_date->setObjectName("top_label_date");
        top_label_date->setGeometry(QRect(10, 0, 131, 30));
        top_label_date->setMinimumSize(QSize(30, 30));
        top_label_date->setMaximumSize(QSize(16777215, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        top_label_date->setPalette(palette7);
        top_label_date->setFont(font6);
        top_label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MusicStart_2 = new QPushButton(centralwidget);
        MusicStart_2->setObjectName("MusicStart_2");
        MusicStart_2->setGeometry(QRect(0, 270, 30, 30));
        MusicStart_2->setMinimumSize(QSize(30, 30));
        MusicStart_2->setMaximumSize(QSize(30, 30));
        MusicStart_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/triangle.png);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_lrc->setText(QString());
        label_current_pos->setText(QString());
        label_total_length->setText(QString());
        MusicLeft->setText(QString());
        MusicStart->setText(QString());
        MusicRight->setText(QString());
        VolumeButton->setText(QString());
        label_title_song->setText(QCoreApplication::translate("MainWindow", "\345\244\234\346\233\262-\345\221\250\346\235\260\344\274\246", nullptr));
        SongBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\244\234\346\233\262-\345\221\250\346\235\260\344\274\246", nullptr));
        SongBox->setItemText(1, QCoreApplication::translate("MainWindow", "\350\277\233\351\230\266-\346\236\227\344\277\212\346\235\260", nullptr));

        CarButton->setText(QString());
        MapButton->setText(QString());
        MusicButton->setText(QString());
        WeatherButton->setText(QString());
        SetButton->setText(QString());
        label_title->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\273\221\346\231\272\350\203\275\350\275\246\350\275\275\347\263\273\347\273\237V1.0", nullptr));
        top_label_wifi->setText(QString());
        top_label_bluetooth->setText(QString());
        top_label_time->setText(QCoreApplication::translate("MainWindow", "09:08", nullptr));
        label_weathericon->setText(QString());
        label_temperture->setText(QCoreApplication::translate("MainWindow", "26\302\260", nullptr));
        label_weathertxt->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\264\253\345\244\226\347\272\277\346\214\207\346\225\260", nullptr));
        label_AirQuality->setText(QCoreApplication::translate("MainWindow", "Good", nullptr));
        label_UVIndex->setText(QCoreApplication::translate("MainWindow", "Low", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "\351\235\222\345\262\233", nullptr));
        label_10->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "BLK SS1", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "17.2kw/100km", nullptr));
        label_12->setText(QString());
        label_total_length_3->setText(QCoreApplication::translate("MainWindow", "324km", nullptr));
        top_label_date->setText(QCoreApplication::translate("MainWindow", "2024.05.10", nullptr));
        MusicStart_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
