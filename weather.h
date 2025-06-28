#ifndef WEATHER_H
#define WEATHER_H

#include <QMainWindow>

class MainWindow;

namespace Ui {
class Weather;
}

class Weather : public QMainWindow
{
    Q_OBJECT

public:
    explicit Weather(MainWindow *mainWindow,QWidget *parent = nullptr);
    ~Weather();

private:
    Ui::Weather *ui;
    MainWindow *mainWindow;
    void TopTimeUpdate(QString min,QString hour);
};

#endif // WEATHER_H
