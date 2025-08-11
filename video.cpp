#include "video.h"
#include "ui_video.h"
#include "mainwindow.h"

Video::Video(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Video)
{
    ui->setupUi(this);

    mainWindow = MainWindow::Getinstance();
    connect(mainWindow, &MainWindow::timeUpdated, this, &Video::TopTimeUpdate);
}

Video::~Video()
{
    delete ui;
}

Video* Video::Getinstance(QWidget *parent)
{
    static Video *s_instance = nullptr;
    if (!s_instance)
    {
        s_instance = new Video(parent);
    }
    return s_instance;
}
void Video::TopTimeUpdate(QString date,QString min,QString hour)
{
    time_min = min;
    time_hour = hour;
    time_date = date;
    ui->top_label_time->setText(time_hour+":"+time_min);
    ui->top_label_date->setText(time_date);

}

void Video::on_MapButton_clicked()
{
    Map *map = Map::Getinstance(this);
    qDebug() << "weather";
    this->hide();
    map->show();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}
void Video::on_WeatherButton_clicked()
{
    Weather *weather = Weather::Getinstance(this);
    qDebug() << "weather";
    this->hide();
    weather->show();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}
void Video::on_MusicButton_clicked()
{
    mainWindow = MainWindow::Getinstance();
    this->hide();
    mainWindow->show();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}
