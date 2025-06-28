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
    QWidget *widget;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *MusicLeft;
    QPushButton *MusicStart;
    QPushButton *MusicRight;
    QPushButton *VolumeButton;
    QWidget *widget_3;
    QSlider *VolumeSlider;
    QLabel *label_lrc;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_current_pos;
    QSlider *MusicSlider;
    QLabel *label_total_length;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *CarButton;
    QPushButton *MapButton;
    QPushButton *WeatherButton;
    QPushButton *MusicButton;
    QPushButton *VedioButton;
    QPushButton *SetButton;
    QLabel *label_title;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_wifi;
    QLabel *label_bluetooth;
    QLabel *label_temperture;
    QLabel *label_time;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/img/black.jpg);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 60, 381, 501));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/app_back.jpg);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 430, 381, 71));
        widget_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/black.jpg);"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 10, 211, 62));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MusicLeft = new QPushButton(layoutWidget);
        MusicLeft->setObjectName("MusicLeft");
        MusicLeft->setMinimumSize(QSize(60, 60));
        MusicLeft->setMaximumSize(QSize(60, 60));
        MusicLeft->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/left_song.png);"));

        horizontalLayout->addWidget(MusicLeft);

        MusicStart = new QPushButton(layoutWidget);
        MusicStart->setObjectName("MusicStart");
        MusicStart->setMinimumSize(QSize(60, 60));
        MusicStart->setMaximumSize(QSize(60, 60));
        MusicStart->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/music_start.png);"));

        horizontalLayout->addWidget(MusicStart);

        MusicRight = new QPushButton(layoutWidget);
        MusicRight->setObjectName("MusicRight");
        MusicRight->setMinimumSize(QSize(60, 60));
        MusicRight->setMaximumSize(QSize(60, 60));
        MusicRight->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/right_song.png);"));

        horizontalLayout->addWidget(MusicRight);

        VolumeButton = new QPushButton(widget_2);
        VolumeButton->setObjectName("VolumeButton");
        VolumeButton->setGeometry(QRect(330, 10, 51, 61));
        VolumeButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/volume.png);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(20, 20, 341, 341));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/zhuanji.jpg);"));
        VolumeSlider = new QSlider(widget);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setGeometry(QRect(360, 240, 20, 160));
        VolumeSlider->setOrientation(Qt::Orientation::Vertical);
        label_lrc = new QLabel(widget);
        label_lrc->setObjectName("label_lrc");
        label_lrc->setGeometry(QRect(30, 370, 321, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_lrc->setPalette(palette);
        label_lrc->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 400, 384, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_current_pos = new QLabel(layoutWidget1);
        label_current_pos->setObjectName("label_current_pos");
        label_current_pos->setMinimumSize(QSize(35, 20));
        label_current_pos->setMaximumSize(QSize(35, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        label_current_pos->setPalette(palette1);
        QFont font;
        font.setPointSize(8);
        label_current_pos->setFont(font);
        label_current_pos->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_current_pos->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background:black;\n"
"}"));
        label_current_pos->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_current_pos);

        MusicSlider = new QSlider(layoutWidget1);
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

        label_total_length = new QLabel(layoutWidget1);
        label_total_length->setObjectName("label_total_length");
        label_total_length->setMinimumSize(QSize(35, 20));
        label_total_length->setMaximumSize(QSize(35, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_total_length->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(8);
        label_total_length->setFont(font1);
        label_total_length->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_total_length);

        layoutWidget3->raise();
        widget_3->raise();
        widget_2->raise();
        VolumeSlider->raise();
        label_lrc->raise();
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 40, 91, 512));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        CarButton = new QPushButton(layoutWidget2);
        CarButton->setObjectName("CarButton");
        CarButton->setMinimumSize(QSize(80, 80));
        CarButton->setMaximumSize(QSize(80, 80));
        CarButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/daoche.png);"));

        verticalLayout->addWidget(CarButton);

        MapButton = new QPushButton(layoutWidget2);
        MapButton->setObjectName("MapButton");
        MapButton->setMinimumSize(QSize(80, 80));
        MapButton->setMaximumSize(QSize(80, 80));
        MapButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/map1.png);"));

        verticalLayout->addWidget(MapButton);

        WeatherButton = new QPushButton(layoutWidget2);
        WeatherButton->setObjectName("WeatherButton");
        WeatherButton->setMinimumSize(QSize(80, 80));
        WeatherButton->setMaximumSize(QSize(80, 80));
        WeatherButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/weather.png);"));

        verticalLayout->addWidget(WeatherButton);

        MusicButton = new QPushButton(layoutWidget2);
        MusicButton->setObjectName("MusicButton");
        MusicButton->setMinimumSize(QSize(80, 80));
        MusicButton->setMaximumSize(QSize(80, 80));
        MusicButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/music.png);"));

        verticalLayout->addWidget(MusicButton);

        VedioButton = new QPushButton(layoutWidget2);
        VedioButton->setObjectName("VedioButton");
        VedioButton->setMinimumSize(QSize(80, 80));
        VedioButton->setMaximumSize(QSize(80, 80));
        VedioButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/video.png);"));

        verticalLayout->addWidget(VedioButton);

        SetButton = new QPushButton(layoutWidget2);
        SetButton->setObjectName("SetButton");
        SetButton->setMinimumSize(QSize(80, 80));
        SetButton->setMaximumSize(QSize(80, 80));
        SetButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/set.png);"));

        verticalLayout->addWidget(SetButton);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(200, 0, 461, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_title->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(16);
        label_title->setFont(font2);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(780, 0, 241, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_wifi = new QLabel(layoutWidget3);
        label_wifi->setObjectName("label_wifi");
        label_wifi->setMinimumSize(QSize(30, 30));
        label_wifi->setMaximumSize(QSize(30, 30));
        label_wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/WIFI.png);"));

        horizontalLayout_3->addWidget(label_wifi);

        label_bluetooth = new QLabel(layoutWidget3);
        label_bluetooth->setObjectName("label_bluetooth");
        label_bluetooth->setMinimumSize(QSize(30, 30));
        label_bluetooth->setMaximumSize(QSize(30, 30));
        label_bluetooth->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/bluetooth.png);"));

        horizontalLayout_3->addWidget(label_bluetooth);

        label_temperture = new QLabel(layoutWidget3);
        label_temperture->setObjectName("label_temperture");
        label_temperture->setMinimumSize(QSize(0, 30));
        label_temperture->setMaximumSize(QSize(16777215, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_temperture->setPalette(palette4);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Consolas")});
        font3.setPointSize(16);
        label_temperture->setFont(font3);
        label_temperture->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_temperture);

        label_time = new QLabel(layoutWidget3);
        label_time->setObjectName("label_time");
        label_time->setMinimumSize(QSize(30, 30));
        label_time->setMaximumSize(QSize(16777215, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_time->setPalette(palette5);
        label_time->setFont(font3);
        label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_time);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MusicLeft->setText(QString());
        MusicStart->setText(QString());
        MusicRight->setText(QString());
        VolumeButton->setText(QString());
        label_lrc->setText(QString());
        label_current_pos->setText(QString());
        label_total_length->setText(QString());
        CarButton->setText(QString());
        MapButton->setText(QString());
        WeatherButton->setText(QString());
        MusicButton->setText(QString());
        VedioButton->setText(QString());
        SetButton->setText(QString());
        label_title->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\273\221\346\231\272\350\203\275\350\275\246\350\275\275\347\263\273\347\273\237V1.0", nullptr));
        label_wifi->setText(QString());
        label_bluetooth->setText(QString());
        label_temperture->setText(QCoreApplication::translate("MainWindow", "26\302\260C", nullptr));
        label_time->setText(QCoreApplication::translate("MainWindow", "09:08", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
