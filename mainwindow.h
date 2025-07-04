#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QTimer>
#include <QDebug>
#include <QListWidget>
#include <QTimer>
#include <QFile>
#include <QStringList>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "weather.h"
#include "map.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static MainWindow* Getinstance();
    QJsonObject get_weather();

private slots:
    void on_VolumeButton_clicked();

    void on_MusicRight_clicked();

    void on_MusicStart_clicked();

    void on_VolumeSlider_valueChanged(int value);

    void on_MusicSlider_valueChanged(int value);

    void NetworkReplyFinied(QNetworkReply *reply);

    void on_SongBox_currentTextChanged(const QString &arg1);

    void on_MusicLeft_clicked();

    void on_WeatherButton_clicked();

    void on_MapButton_clicked();

private:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;

    /*音乐播放器相关*/
    QProcess *process;
    QTimer *timer;
    QFile *lrc_file;
    bool eventFilter(QObject *obj, QEvent *event);
    QStringList lrc_list;
    int music_count=1;

    /*主页天气相关*/
    QNetworkAccessManager *weather_manager;
    QByteArray  WeatherData; 
    QString weather_url;
    QNetworkReply *weather_reply;
    QJsonObject objRoot;

    /*顶端状态栏*/
    QNetworkAccessManager *time_manager;
    QByteArray  TimeData;
    QString time_url;
    QString time_sec;
    QString time_min;
    QString time_date;
    QString time_hour;
    QTimer *timer_top;

signals:
    void timeUpdated(QString date,QString min,QString hour);  // 时间更新信号
};
#endif // MAINWINDOW_H
