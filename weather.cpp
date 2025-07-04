#include "weather.h"
#include "mainwindow.h"
#include "ui_weather.h"
#include "map.h"
Weather::Weather(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Weather)
{
    ui->setupUi(this);
    mainWindow = MainWindow::Getinstance();
    connect(mainWindow, &MainWindow::timeUpdated, this, &Weather::TopTimeUpdate);
    objRoot = mainWindow->get_weather();
    ui->label_city->setText(objRoot["city"].toString());
    QString date = objRoot["update_time"].toString().split(" ")[0];
    ui->label_date->setText(date);

    WeatherDataArray = objRoot["data"].toArray();
    QString tem = WeatherDataArray[0].toObject()["wea"].toString();
    ui->label_weatherstatus->setText(tem);
    if(tem == "晴")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/qing.png"));
    else if(tem == "阴")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/yin.png"));
    else if(tem == "多云")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/duoyun.png"));
    else if(tem == "小雨")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/xiaoyu.png"));
    else if(tem == "中雨")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/zhonyu.png"));
    else if(tem == "大雨")
        ui->label_weathernow->setPixmap(QPixmap(":/images/img/dayu.png"));


    WeatherIconFresh(0,ui->label_8weather);
    WeatherIconFresh(2,ui->label_10weather);
    WeatherIconFresh(4,ui->label_12weather);
    WeatherIconFresh(6,ui->label_14weather);
    WeatherIconFresh(8,ui->label_16weather);
    WeatherIconFresh(10,ui->label_18weather);

    WeatherHourTemperFresh(0,ui->label_8temp);
    WeatherHourTemperFresh(2,ui->label_10temp);
    WeatherHourTemperFresh(4,ui->label_12temp);
    WeatherHourTemperFresh(6,ui->label_14temp);
    WeatherHourTemperFresh(8,ui->label_16temp);
    WeatherHourTemperFresh(10,ui->label_18temp);

    WeathertxtFresh("wea",ui->label_weatherstatus);
    WeathertxtFresh("week",ui->label_day);
    WeathertxtFresh("win_speed",ui->label_windlevel);
    WeathertxtFresh("humidity",ui->label_humidityvalue);
    WeathertxtFresh("air_level",ui->label_airquaityvalue);
    WeathertxtFresh("air",ui->label_PMvalue);
    QString win = WeatherDataArray[0].toObject()["win"].toArray()[0].toString();
    ui->label_windtype->setText(win);



    // 按 "." 分割，取第一部分
    QString tempWithoutDecimal = WeatherDataArray[0].toObject()["tem"].toString().split(".")[0]+"°";
    ui->label_temperture->setText(tempWithoutDecimal);
    QString tempMaxWithoutDecimal = WeatherDataArray[0].toObject()["tem1"].toString().split(".")[0]+"°";
    QString tempMinWithoutDecimal = WeatherDataArray[0].toObject()["tem2"].toString().split(".")[0]+"°";
    ui->label_temperedge->setText(tempMaxWithoutDecimal+"/"+tempMinWithoutDecimal);


}

Weather::~Weather()
{
    delete ui;
}

void Weather::TopTimeUpdate(QString date,QString min,QString hour)
{
    time_min = min;
    time_hour = hour;
    time_date = date;
    ui->top_label_time->setText(time_hour+":"+time_min);
    ui->top_label_date->setText(time_date);

}

void Weather::WeatherIconFresh(char num,QLabel* label)
{
    QString weather = WeatherDataArray[0].toObject()["hours"].toArray()[num].toObject()["wea"].toString();
    if(weather == "晴")
        label->setPixmap(QPixmap(":/images/img/qing.png"));
    else if(weather == "阴")
        label->setPixmap(QPixmap(":/images/img/yin.png"));
    else if(weather == "多云")
        label->setPixmap(QPixmap(":/images/img/duoyun.png"));
    else if(weather == "小雨")
        label->setPixmap(QPixmap(":/images/img/xiaoyu.png"));
    else if(weather == "中雨")
        label->setPixmap(QPixmap(":/images/img/zhonyu.png"));
    else if(weather == "大雨")
        label->setPixmap(QPixmap(":/images/img/dayu.png"));
}

Weather* Weather::Getinstance(QWidget *parent)
{
    static Weather *s_instance = nullptr;
    if (!s_instance)
    {
        s_instance = new Weather(parent);
    }
    return s_instance;
}

void Weather::WeathertxtFresh(QString txt,QLabel* label)
{
    QString tem;
    tem = WeatherDataArray[0].toObject()[txt].toString();
    label->setText(tem);
}
void Weather::WeatherHourTemperFresh(char num,QLabel* label)
{
    QString tem;
    tem = WeatherDataArray[0].toObject()["hours"].toArray()[num].toObject()["tem"].toString();
    label->setText(tem+"°");
}
void Weather::on_MusicButton_clicked()
{
    mainWindow = MainWindow::Getinstance();
    this->hide();
    mainWindow->show();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}


void Weather::on_MapButton_clicked()
{
    Map *map = Map::Getinstance(this);
    qDebug() << "weather";
    this->hide();
    map->show();
    mainWindow = MainWindow::Getinstance();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}

