#include "map.h"
#include "ui_map.h"
#include "mainwindow.h"
#include "weather.h"
#include <QDir>
int zoom = 15;
int zoom_prev;
Map::Map(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Map)
{
    ui->setupUi(this);

    mainWindow = MainWindow::Getinstance();
    connect(mainWindow, &MainWindow::timeUpdated, this, &Map::TopTimeUpdate);

    manager= new QNetworkAccessManager(this);
    request = new QNetworkRequest();

    //创建进程获取GPS信号
    gps_process = new QProcess(this);
    gps_process->start("./gps /dev/ttymxc5");
    connect(gps_process,&QProcess::readyReadStandardOutput,[=]()
        {
        QString output = gps_process->readAllStandardOutput();
        if(output.startsWith("Lat,Lng:"))
        {
            gps_data = output.mid(8);
            loadMap(gps_data,zoom);
            ui->label_gps->setText("经纬度：" + gps_data);
        }
        else
            ui->label_gps->setText(output);
        });



}

void Map::loadMap(const QString &location, int zoomLevel)
{
    QString url = QString("http://api.map.baidu.com/staticimage?center=%1&markers=%1&width=850&height=500&zoom=%2&")
    .arg(location)
    .arg(zoomLevel);

    request->setUrl(QUrl(url));
    qDebug() << url;
    reply = manager->get(*request);
    connect(reply, &QNetworkReply::finished, [=]()
    {
        if (reply->error() == QNetworkReply::NoError)
        {
            QPixmap pixmap;
            if (pixmap.loadFromData(reply->readAll()))
            {
                QString tempFile = QDir::tempPath() + "/map_bg.png";
                pixmap.save(tempFile);
                ui->map_display->setStyleSheet(
                    QString(
                        "border-image: url(%1);"
                        "background-position: center;")
                        .arg(tempFile));

            }
        } else
        {
            qDebug() << "加载失败：" << reply->errorString();
        }
    });
}



Map::~Map()
{
    delete ui;
}

Map* Map::Getinstance(QWidget *parent)
{
    static Map *s_instance = nullptr;
    if (!s_instance)
    {
        s_instance = new Map(parent);
    }
    return s_instance;
}

void Map::TopTimeUpdate(QString date,QString min,QString hour)
{
    time_min = min;
    time_hour = hour;
    time_date = date;
    ui->top_label_time->setText(time_hour+":"+time_min);
    ui->top_label_date->setText(time_date);

}

void Map::on_WeatherButton_clicked()
{
    Weather *weather = Weather::Getinstance(this);
    qDebug() << "weather";
    this->hide();
    weather->show();
}
void Map::on_MusicButton_clicked()
{
    mainWindow = MainWindow::Getinstance();
    this->hide();
    mainWindow->show();
    emit mainWindow->timeUpdated(time_date,time_min, time_hour);
}

void Map::on_zoom_up_clicked()
{
    if(zoom<19)
        zoom++;
    loadMap(gps_data,zoom);
}


void Map::on_zoom_down_clicked()
{
    if(zoom>3)
        zoom--;
    loadMap(gps_data,zoom);
}

