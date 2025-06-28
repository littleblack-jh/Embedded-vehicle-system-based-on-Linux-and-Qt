#include "weather.h"
#include "mainwindow.h"
#include "ui_weather.h"

Weather::Weather(MainWindow *mainWindow,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Weather)
{
    ui->setupUi(this);
    connect(mainWindow, &MainWindow::timeUpdated, this, &Weather::TopTimeUpdate);

}

Weather::~Weather()
{
    delete ui;
}

void Weather::TopTimeUpdate(QString min,QString hour)
{
    ui->top_label_time->setText(hour+":"+min);
}
