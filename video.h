#ifndef VIDEO_H
#define VIDEO_H

#include <QMainWindow>
class MainWindow;
namespace Ui {
class Video;
}

class Video : public QMainWindow
{
    Q_OBJECT

public:
    static Video* Getinstance(QWidget *parent = nullptr);

private slots:
    void on_MapButton_clicked();
    void on_WeatherButton_clicked();
    void on_MusicButton_clicked();

private:
    explicit Video(QWidget *parent = nullptr);
    ~Video();
    MainWindow *mainWindow;
    QString time_min;
    QString time_hour;
    QString time_date;
    QString gps_data;
    Ui::Video *ui;

    void TopTimeUpdate(QString date,QString min,QString hour);
};

#endif // VIDEO_H
