#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QFile>
#include <QDebug>
#include <QProcess>
class MainWindow;
namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT

public:
    static Map* Getinstance(QWidget *parent = nullptr);

private slots:
    void on_WeatherButton_clicked();
    void on_MusicButton_clicked();


    void on_zoom_up_clicked();

    void on_zoom_down_clicked();

private:
    explicit Map(QWidget *parent = nullptr);
    ~Map();
    Ui::Map *ui;

    MainWindow *mainWindow;
    QString time_min;
    QString time_hour;
    QString time_date;
    QString gps_data;
    QProcess *gps_process;

    //设置网络请求连接
    QNetworkAccessManager *manager;
    QNetworkRequest *request;
    QNetworkReply * reply = nullptr;

    void TopTimeUpdate(QString date,QString min,QString hour);
    void loadMap(const QString &location, int zoomLevel);
};

#endif // MAP_H
