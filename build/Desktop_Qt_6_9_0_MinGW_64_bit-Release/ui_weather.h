/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QWidget *centralwidget;
    QWidget *WidgetWeather;
    QLabel *label_weathernow;
    QLabel *label_temperedge_4;
    QWidget *widget_Dayin;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_PMtype;
    QLabel *label_PMvalue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_humidity;
    QLabel *label_humidityvalue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_airquaity;
    QLabel *label_airquaityvalue;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_windtype;
    QLabel *label_windlevel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3date;
    QLabel *label_date;
    QLabel *label_day;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_city;
    QLabel *label_city;
    QLabel *label_temperture;
    QLabel *label_temperedge;
    QLabel *label_weatherstatus;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8clock;
    QLabel *label_8clock;
    QLabel *label_8weather;
    QLabel *label_8temp;
    QVBoxLayout *verticalLayout_10clock;
    QLabel *label_10clock;
    QLabel *label_10weather;
    QLabel *label_10temp;
    QVBoxLayout *verticalLayout_12clock;
    QLabel *label_12clock;
    QLabel *label_12weather;
    QLabel *label_12temp;
    QVBoxLayout *verticalLayout_14clock;
    QLabel *label_14clock;
    QLabel *label_14weather;
    QLabel *label_14temp;
    QVBoxLayout *verticalLayout_16clock;
    QLabel *label_16clock;
    QLabel *label_16weather;
    QLabel *label_16temp;
    QVBoxLayout *verticalLayout_18clock;
    QLabel *label_18clock;
    QLabel *label_18weather;
    QLabel *label_18temp;
    QLabel *label_title;
    QWidget *layoutWidget_8;
    QHBoxLayout *TopLayout;
    QLabel *top_label_wifi;
    QLabel *top_label_bluetooth;
    QLabel *top_label_time;
    QLabel *top_label_date;
    QWidget *layoutWidget_2;
    QVBoxLayout *MenuLayout;
    QPushButton *CarButton;
    QPushButton *MapButton;
    QPushButton *MusicButton;
    QPushButton *WeatherButton;
    QPushButton *SetButton;
    QPushButton *MusicStart_2;

    void setupUi(QMainWindow *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName("Weather");
        Weather->resize(1024, 600);
        Weather->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/black.jpg);"));
        centralwidget = new QWidget(Weather);
        centralwidget->setObjectName("centralwidget");
        WidgetWeather = new QWidget(centralwidget);
        WidgetWeather->setObjectName("WidgetWeather");
        WidgetWeather->setGeometry(QRect(340, 40, 381, 511));
        WidgetWeather->setAutoFillBackground(false);
        WidgetWeather->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/gray.jpg);\n"
"border-radius:15px;\n"
""));
        label_weathernow = new QLabel(WidgetWeather);
        label_weathernow->setObjectName("label_weathernow");
        label_weathernow->setGeometry(QRect(300, 0, 80, 80));
        label_weathernow->setAutoFillBackground(false);
        label_weathernow->setStyleSheet(QString::fromUtf8(""));
        label_weathernow->setPixmap(QPixmap(QString::fromUtf8(":/images/img/sun.png")));
        label_weathernow->setScaledContents(true);
        label_temperedge_4 = new QLabel(WidgetWeather);
        label_temperedge_4->setObjectName("label_temperedge_4");
        label_temperedge_4->setGeometry(QRect(220, 110, 16, 20));
        label_temperedge_4->setMinimumSize(QSize(10, 20));
        label_temperedge_4->setMaximumSize(QSize(30, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_temperedge_4->setFont(font);
        label_temperedge_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget_Dayin = new QWidget(WidgetWeather);
        widget_Dayin->setObjectName("widget_Dayin");
        widget_Dayin->setGeometry(QRect(10, 230, 371, 121));
        widget_Dayin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 179, 116);\n"
"border-radius: 10px;"));
        gridLayout = new QGridLayout(widget_Dayin);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_8 = new QLabel(widget_Dayin);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(40, 40));
        label_8->setMaximumSize(QSize(40, 40));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/img/PM25.png")));
        label_8->setScaledContents(true);

        horizontalLayout_4->addWidget(label_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_PMtype = new QLabel(widget_Dayin);
        label_PMtype->setObjectName("label_PMtype");
        label_PMtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_PMtype);

        label_PMvalue = new QLabel(widget_Dayin);
        label_PMvalue->setObjectName("label_PMvalue");
        label_PMvalue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_PMvalue);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_10 = new QLabel(widget_Dayin);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(40, 40));
        label_10->setMaximumSize(QSize(40, 40));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/img/tempature.png")));
        label_10->setScaledContents(true);

        horizontalLayout_5->addWidget(label_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_humidity = new QLabel(widget_Dayin);
        label_humidity->setObjectName("label_humidity");
        label_humidity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_humidity);

        label_humidityvalue = new QLabel(widget_Dayin);
        label_humidityvalue->setObjectName("label_humidityvalue");
        label_humidityvalue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_humidityvalue);


        horizontalLayout_5->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_12 = new QLabel(widget_Dayin);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(40, 40));
        label_12->setMaximumSize(QSize(40, 40));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/img/airQuity.png")));
        label_12->setScaledContents(true);

        horizontalLayout_6->addWidget(label_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_airquaity = new QLabel(widget_Dayin);
        label_airquaity->setObjectName("label_airquaity");
        label_airquaity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_airquaity);

        label_airquaityvalue = new QLabel(widget_Dayin);
        label_airquaityvalue->setObjectName("label_airquaityvalue");
        label_airquaityvalue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_airquaityvalue);


        horizontalLayout_6->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_2 = new QLabel(widget_Dayin);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/img/eastWind.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_windtype = new QLabel(widget_Dayin);
        label_windtype->setObjectName("label_windtype");
        label_windtype->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_windtype);

        label_windlevel = new QLabel(widget_Dayin);
        label_windlevel->setObjectName("label_windlevel");
        label_windlevel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_windlevel);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        layoutWidget = new QWidget(WidgetWeather);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 20, 96, 48));
        verticalLayout_3date = new QVBoxLayout(layoutWidget);
        verticalLayout_3date->setObjectName("verticalLayout_3date");
        verticalLayout_3date->setContentsMargins(0, 0, 0, 0);
        label_date = new QLabel(layoutWidget);
        label_date->setObjectName("label_date");
        label_date->setMinimumSize(QSize(80, 20));
        label_date->setMaximumSize(QSize(200, 20));
        label_date->setFont(font);
        label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3date->addWidget(label_date);

        label_day = new QLabel(layoutWidget);
        label_day->setObjectName("label_day");
        label_day->setMinimumSize(QSize(80, 20));
        label_day->setMaximumSize(QSize(200, 20));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_day->setFont(font1);
        label_day->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3date->addWidget(label_day);

        layoutWidget1 = new QWidget(WidgetWeather);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(150, 70, 82, 151));
        verticalLayout_city = new QVBoxLayout(layoutWidget1);
        verticalLayout_city->setObjectName("verticalLayout_city");
        verticalLayout_city->setContentsMargins(0, 0, 0, 0);
        label_city = new QLabel(layoutWidget1);
        label_city->setObjectName("label_city");
        label_city->setMinimumSize(QSize(80, 30));
        label_city->setMaximumSize(QSize(80, 30));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_city->setFont(font2);
        label_city->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_city->addWidget(label_city);

        label_temperture = new QLabel(layoutWidget1);
        label_temperture->setObjectName("label_temperture");
        label_temperture->setMinimumSize(QSize(0, 40));
        label_temperture->setMaximumSize(QSize(16777215, 40));
        QFont font3;
        font3.setPointSize(36);
        font3.setBold(true);
        label_temperture->setFont(font3);
        label_temperture->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_city->addWidget(label_temperture);

        label_temperedge = new QLabel(layoutWidget1);
        label_temperedge->setObjectName("label_temperedge");
        label_temperedge->setMinimumSize(QSize(80, 20));
        label_temperedge->setMaximumSize(QSize(60, 20));
        label_temperedge->setFont(font);
        label_temperedge->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_city->addWidget(label_temperedge);

        label_weatherstatus = new QLabel(layoutWidget1);
        label_weatherstatus->setObjectName("label_weatherstatus");
        label_weatherstatus->setMinimumSize(QSize(0, 30));
        label_weatherstatus->setMaximumSize(QSize(16777215, 30));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        label_weatherstatus->setFont(font4);
        label_weatherstatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_city->addWidget(label_weatherstatus);

        layoutWidget2 = new QWidget(WidgetWeather);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 390, 344, 86));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8clock = new QVBoxLayout();
        verticalLayout_8clock->setObjectName("verticalLayout_8clock");
        verticalLayout_8clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_8clock = new QLabel(layoutWidget2);
        label_8clock->setObjectName("label_8clock");
        label_8clock->setMinimumSize(QSize(50, 20));
        label_8clock->setMaximumSize(QSize(50, 20));
        label_8clock->setFont(font);
        label_8clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8clock->addWidget(label_8clock);

        label_8weather = new QLabel(layoutWidget2);
        label_8weather->setObjectName("label_8weather");
        label_8weather->setMinimumSize(QSize(30, 30));
        label_8weather->setMaximumSize(QSize(30, 30));
        label_8weather->setAutoFillBackground(false);
        label_8weather->setStyleSheet(QString::fromUtf8(""));
        label_8weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/qing.png")));
        label_8weather->setScaledContents(true);
        label_8weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8clock->addWidget(label_8weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_8temp = new QLabel(layoutWidget2);
        label_8temp->setObjectName("label_8temp");
        label_8temp->setMinimumSize(QSize(50, 20));
        label_8temp->setMaximumSize(QSize(50, 20));
        label_8temp->setFont(font1);
        label_8temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8clock->addWidget(label_8temp);

        verticalLayout_8clock->setStretch(0, 1);
        verticalLayout_8clock->setStretch(1, 1);
        verticalLayout_8clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_8clock);

        verticalLayout_10clock = new QVBoxLayout();
        verticalLayout_10clock->setObjectName("verticalLayout_10clock");
        verticalLayout_10clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_10clock = new QLabel(layoutWidget2);
        label_10clock->setObjectName("label_10clock");
        label_10clock->setMinimumSize(QSize(50, 20));
        label_10clock->setMaximumSize(QSize(50, 20));
        label_10clock->setFont(font);
        label_10clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10clock->addWidget(label_10clock);

        label_10weather = new QLabel(layoutWidget2);
        label_10weather->setObjectName("label_10weather");
        label_10weather->setMinimumSize(QSize(30, 30));
        label_10weather->setMaximumSize(QSize(30, 30));
        label_10weather->setAutoFillBackground(false);
        label_10weather->setStyleSheet(QString::fromUtf8(""));
        label_10weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/qing.png")));
        label_10weather->setScaledContents(true);
        label_10weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10clock->addWidget(label_10weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_10temp = new QLabel(layoutWidget2);
        label_10temp->setObjectName("label_10temp");
        label_10temp->setMinimumSize(QSize(50, 20));
        label_10temp->setMaximumSize(QSize(50, 20));
        label_10temp->setFont(font1);
        label_10temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10clock->addWidget(label_10temp);

        verticalLayout_10clock->setStretch(0, 1);
        verticalLayout_10clock->setStretch(1, 1);
        verticalLayout_10clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_10clock);

        verticalLayout_12clock = new QVBoxLayout();
        verticalLayout_12clock->setObjectName("verticalLayout_12clock");
        verticalLayout_12clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_12clock = new QLabel(layoutWidget2);
        label_12clock->setObjectName("label_12clock");
        label_12clock->setMinimumSize(QSize(50, 20));
        label_12clock->setMaximumSize(QSize(50, 20));
        label_12clock->setFont(font);
        label_12clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12clock->addWidget(label_12clock);

        label_12weather = new QLabel(layoutWidget2);
        label_12weather->setObjectName("label_12weather");
        label_12weather->setMinimumSize(QSize(30, 30));
        label_12weather->setMaximumSize(QSize(30, 30));
        label_12weather->setAutoFillBackground(false);
        label_12weather->setStyleSheet(QString::fromUtf8(""));
        label_12weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/qing.png")));
        label_12weather->setScaledContents(true);
        label_12weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12clock->addWidget(label_12weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_12temp = new QLabel(layoutWidget2);
        label_12temp->setObjectName("label_12temp");
        label_12temp->setMinimumSize(QSize(50, 20));
        label_12temp->setMaximumSize(QSize(50, 20));
        label_12temp->setFont(font1);
        label_12temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12clock->addWidget(label_12temp);

        verticalLayout_12clock->setStretch(0, 1);
        verticalLayout_12clock->setStretch(1, 1);
        verticalLayout_12clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_12clock);

        verticalLayout_14clock = new QVBoxLayout();
        verticalLayout_14clock->setObjectName("verticalLayout_14clock");
        verticalLayout_14clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_14clock = new QLabel(layoutWidget2);
        label_14clock->setObjectName("label_14clock");
        label_14clock->setMinimumSize(QSize(50, 20));
        label_14clock->setMaximumSize(QSize(50, 20));
        label_14clock->setFont(font);
        label_14clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14clock->addWidget(label_14clock);

        label_14weather = new QLabel(layoutWidget2);
        label_14weather->setObjectName("label_14weather");
        label_14weather->setMinimumSize(QSize(30, 30));
        label_14weather->setMaximumSize(QSize(30, 30));
        label_14weather->setAutoFillBackground(false);
        label_14weather->setStyleSheet(QString::fromUtf8(""));
        label_14weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/qing.png")));
        label_14weather->setScaledContents(true);
        label_14weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14clock->addWidget(label_14weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_14temp = new QLabel(layoutWidget2);
        label_14temp->setObjectName("label_14temp");
        label_14temp->setMinimumSize(QSize(50, 20));
        label_14temp->setMaximumSize(QSize(50, 20));
        label_14temp->setFont(font1);
        label_14temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14clock->addWidget(label_14temp);

        verticalLayout_14clock->setStretch(0, 1);
        verticalLayout_14clock->setStretch(1, 1);
        verticalLayout_14clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_14clock);

        verticalLayout_16clock = new QVBoxLayout();
        verticalLayout_16clock->setObjectName("verticalLayout_16clock");
        verticalLayout_16clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_16clock = new QLabel(layoutWidget2);
        label_16clock->setObjectName("label_16clock");
        label_16clock->setMinimumSize(QSize(50, 20));
        label_16clock->setMaximumSize(QSize(50, 20));
        label_16clock->setFont(font);
        label_16clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16clock->addWidget(label_16clock);

        label_16weather = new QLabel(layoutWidget2);
        label_16weather->setObjectName("label_16weather");
        label_16weather->setMinimumSize(QSize(30, 30));
        label_16weather->setMaximumSize(QSize(30, 30));
        label_16weather->setAutoFillBackground(false);
        label_16weather->setStyleSheet(QString::fromUtf8(""));
        label_16weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/qing.png")));
        label_16weather->setScaledContents(true);
        label_16weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16clock->addWidget(label_16weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_16temp = new QLabel(layoutWidget2);
        label_16temp->setObjectName("label_16temp");
        label_16temp->setMinimumSize(QSize(50, 20));
        label_16temp->setMaximumSize(QSize(50, 20));
        label_16temp->setFont(font1);
        label_16temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16clock->addWidget(label_16temp);

        verticalLayout_16clock->setStretch(0, 1);
        verticalLayout_16clock->setStretch(1, 1);
        verticalLayout_16clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_16clock);

        verticalLayout_18clock = new QVBoxLayout();
        verticalLayout_18clock->setObjectName("verticalLayout_18clock");
        verticalLayout_18clock->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        label_18clock = new QLabel(layoutWidget2);
        label_18clock->setObjectName("label_18clock");
        label_18clock->setMinimumSize(QSize(50, 20));
        label_18clock->setMaximumSize(QSize(50, 20));
        label_18clock->setFont(font);
        label_18clock->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18clock->addWidget(label_18clock);

        label_18weather = new QLabel(layoutWidget2);
        label_18weather->setObjectName("label_18weather");
        label_18weather->setMinimumSize(QSize(30, 30));
        label_18weather->setMaximumSize(QSize(30, 30));
        label_18weather->setAutoFillBackground(false);
        label_18weather->setStyleSheet(QString::fromUtf8(""));
        label_18weather->setPixmap(QPixmap(QString::fromUtf8(":/images/img/sunset.png")));
        label_18weather->setScaledContents(true);
        label_18weather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18clock->addWidget(label_18weather, 0, Qt::AlignmentFlag::AlignHCenter);

        label_18temp = new QLabel(layoutWidget2);
        label_18temp->setObjectName("label_18temp");
        label_18temp->setMinimumSize(QSize(50, 20));
        label_18temp->setMaximumSize(QSize(50, 20));
        label_18temp->setFont(font1);
        label_18temp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18clock->addWidget(label_18temp);

        verticalLayout_18clock->setStretch(0, 1);
        verticalLayout_18clock->setStretch(1, 1);
        verticalLayout_18clock->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout_18clock);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(200, 0, 461, 30));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_title->setPalette(palette);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(16);
        label_title->setFont(font5);
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
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        top_label_time->setPalette(palette1);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Consolas")});
        font6.setPointSize(16);
        top_label_time->setFont(font6);
        top_label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        TopLayout->addWidget(top_label_time);

        top_label_date = new QLabel(centralwidget);
        top_label_date->setObjectName("top_label_date");
        top_label_date->setGeometry(QRect(10, 0, 131, 30));
        top_label_date->setMinimumSize(QSize(30, 30));
        top_label_date->setMaximumSize(QSize(16777215, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        top_label_date->setPalette(palette2);
        top_label_date->setFont(font6);
        top_label_date->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 60, 91, 451));
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

        SetButton = new QPushButton(layoutWidget_2);
        SetButton->setObjectName("SetButton");
        SetButton->setMinimumSize(QSize(80, 80));
        SetButton->setMaximumSize(QSize(80, 80));
        SetButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/set.png);"));

        MenuLayout->addWidget(SetButton);

        MusicStart_2 = new QPushButton(centralwidget);
        MusicStart_2->setObjectName("MusicStart_2");
        MusicStart_2->setGeometry(QRect(0, 360, 30, 30));
        MusicStart_2->setMinimumSize(QSize(30, 30));
        MusicStart_2->setMaximumSize(QSize(30, 30));
        MusicStart_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/img/triangle.png);"));
        Weather->setCentralWidget(centralwidget);

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QMainWindow *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "MainWindow", nullptr));
        label_weathernow->setText(QString());
        label_temperedge_4->setText(QCoreApplication::translate("Weather", "\302\260C", nullptr));
        label_8->setText(QString());
        label_PMtype->setText(QCoreApplication::translate("Weather", "PM2.5", nullptr));
        label_PMvalue->setText(QCoreApplication::translate("Weather", "24", nullptr));
        label_10->setText(QString());
        label_humidity->setText(QCoreApplication::translate("Weather", "\346\271\277\345\272\246", nullptr));
        label_humidityvalue->setText(QCoreApplication::translate("Weather", "36\302\260C", nullptr));
        label_12->setText(QString());
        label_airquaity->setText(QCoreApplication::translate("Weather", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_airquaityvalue->setText(QCoreApplication::translate("Weather", "\344\274\230", nullptr));
        label_2->setText(QString());
        label_windtype->setText(QCoreApplication::translate("Weather", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_windlevel->setText(QCoreApplication::translate("Weather", "2\347\272\247", nullptr));
        label_date->setText(QCoreApplication::translate("Weather", "2025-06-07", nullptr));
        label_day->setText(QCoreApplication::translate("Weather", "\346\230\237\346\234\237\345\205\255", nullptr));
        label_city->setText(QCoreApplication::translate("Weather", "\351\235\222\345\262\233", nullptr));
        label_temperture->setText(QCoreApplication::translate("Weather", "26", nullptr));
        label_temperedge->setText(QCoreApplication::translate("Weather", "29\302\260/21\302\260", nullptr));
        label_weatherstatus->setText(QCoreApplication::translate("Weather", "\345\244\232\344\272\221", nullptr));
        label_8clock->setText(QCoreApplication::translate("Weather", "8:00", nullptr));
        label_8weather->setText(QString());
        label_8temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_10clock->setText(QCoreApplication::translate("Weather", "10:00", nullptr));
        label_10weather->setText(QString());
        label_10temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_12clock->setText(QCoreApplication::translate("Weather", "12:00", nullptr));
        label_12weather->setText(QString());
        label_12temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_14clock->setText(QCoreApplication::translate("Weather", "14:00", nullptr));
        label_14weather->setText(QString());
        label_14temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_16clock->setText(QCoreApplication::translate("Weather", "16:00", nullptr));
        label_16weather->setText(QString());
        label_16temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_18clock->setText(QCoreApplication::translate("Weather", "18:00", nullptr));
        label_18weather->setText(QString());
        label_18temp->setText(QCoreApplication::translate("Weather", "24\302\260C", nullptr));
        label_title->setText(QCoreApplication::translate("Weather", "\345\260\217\351\273\221\346\231\272\350\203\275\350\275\246\350\275\275\347\263\273\347\273\237V1.0", nullptr));
        top_label_wifi->setText(QString());
        top_label_bluetooth->setText(QString());
        top_label_time->setText(QCoreApplication::translate("Weather", "09:08", nullptr));
        top_label_date->setText(QCoreApplication::translate("Weather", "2024.05.10", nullptr));
        CarButton->setText(QString());
        MapButton->setText(QString());
        MusicButton->setText(QString());
        WeatherButton->setText(QString());
        SetButton->setText(QString());
        MusicStart_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
