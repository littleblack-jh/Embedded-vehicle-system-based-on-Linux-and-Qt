#ifndef WEATHER_H
#define WEATHER_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "ui_weather.h"
class MainWindow;

namespace Ui {
class Weather;
}

class Weather : public QMainWindow
{
    Q_OBJECT

public:
    /*单例模式，获取单例*/
    static Weather* Getinstance(QWidget *parent = nullptr);

private slots:
    void on_MusicButton_clicked();

    void on_MapButton_clicked();

private:
    Ui::Weather *ui;
    explicit Weather(QWidget *parent = nullptr);
    ~Weather();

    MainWindow *mainWindow;
    QJsonObject objRoot;
    QJsonArray WeatherDataArray;
    QString time_date;
    QString time_min;
    QString time_hour;

    void TopTimeUpdate(QString date,QString min,QString hour);
    void WeatherIconFresh(char num,QLabel* label);
    void WeathertxtFresh(QString weather,QLabel* label);
    void WeatherHourTemperFresh(char num,QLabel* label);
};

#endif // WEATHER_H
