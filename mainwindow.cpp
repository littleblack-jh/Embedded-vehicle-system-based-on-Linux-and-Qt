#include "mainwindow.h"
#include "weather.h"
#include "ui_mainwindow.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

bool music_playing_flag = 0;
bool music_start_once = 1;

QString music_total_length; //music总时长
QString music_current_pos; //music当前进度

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //ui初始化
    ui->setupUi(this);
    qDebug("111");
    ui->MusicSlider->setRange(0,100);
    ui->MusicSlider->setValue(0);
    ui->VolumeSlider->setRange(0,100);
    ui->VolumeSlider->setValue(20);
    ui->VolumeSlider->hide();

    //连接时间及天气相关api，请求天气数据与时间数据
    time_manager = new QNetworkAccessManager(this);
    weather_manager = new QNetworkAccessManager(this);
    connect(time_manager,&QNetworkAccessManager::finished,this,&MainWindow::NetworkReplyFinied);
    connect(weather_manager,&QNetworkAccessManager::finished,this,&MainWindow::NetworkReplyFinied);
    time_url = "http://101.35.2.25/api/time/getapi.php?id=10005315&key=ae919380185402a068438af899ebf350&type=2";
    weather_url = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=56886465&appsecret=a4c7hIKT";

    time_manager->get(QNetworkRequest(QUrl(time_url)));  // 发起 GET 请求
    weather_manager->get(QNetworkRequest(QUrl(weather_url)));



    this->installEventFilter(this);  // 在窗口类中启用事件过滤
    process = new QProcess(this);

    //当mplayer对应进程有新的输入时触发槽函数
    connect(process,&QProcess::readyRead,[=](){
        QString msg = QString(process->readAll());
        QString tmp = msg;

        //读取乐曲总时长并更新总时长标签和时长滑块区间
        if(tmp.indexOf("ANS_LENGTH=") != -1)
        {
            qDebug() << "contains-----" <<tmp;
            int start = tmp.indexOf(QString("ANS_LENGTH="));

            QString len  = tmp.mid(start+11, 100);
            len.chop(4);
            qDebug() << "right-----" <<  start <<":"<<tmp;
            music_total_length = len;

            QString minute = QString("%1").arg(music_total_length.toInt() / 60, 2, 10, QChar('0'));
            QString second = QString("%1").arg(music_total_length.toInt() % 60, 2, 10, QChar('0'));

            ui->label_total_length->setText(QString("%1:%2").arg(minute).arg(second));
            ui->MusicSlider->setRange(0,music_total_length.toInt());
        }

        //读取当前乐曲进度
        else if(msg.indexOf("ANS_TIME_POSITION=") != -1)
        {
            qDebug() << "------contains-----" <<msg;
            int start = msg.indexOf(QString("ANS_TIME_POSITION="));
            QString pos  = msg.mid(start+18, 100);
            pos.chop(3);
            music_current_pos= pos;
            qDebug() << "pos-----" <<":"<<pos;

            QString minute = QString("%1").arg(music_current_pos.toInt() / 60, 2, 10, QChar('0'));
            QString second = QString("%1").arg(music_current_pos.toInt() % 60, 2, 10, QChar('0'));

            //读取当前歌词
            for(int i=0; i < lrc_list.size(); i++)
            {
                QString tmp =  lrc_list.at(i);
                if(tmp.contains(QString("[%1:%2").arg(minute).arg(second)))
                {
                    ui->label_lrc->setText(tmp.mid(10,100));
                }
            }
            ui->label_current_pos->setText(QString("%1:%2").arg(minute).arg(second));
            ui->MusicSlider->setValue(music_current_pos.toInt());
        }

        //歌曲到最后
        if(music_current_pos == QString("%1").arg(music_total_length.toInt()-2))
        {
            on_MusicRight_clicked();//next song
        }
    });
    //定时每秒读取一次状态
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,[=](){
    process->write("get_time_pos\n");
    });

    timer_top = new QTimer(this);
    connect(timer_top,&QTimer::timeout,[=](){
        time_sec = QString::number(time_sec.toInt() + 1);
        if(time_sec.toInt()>=60)
        {
            time_sec = "00";
            time_min = QString::number(time_min.toInt() + 1);
            if(time_min.toInt()>=60)
            {
                time_min = "00";
                time_hour = QString::number(time_hour.toInt() + 1);
            }
            if(time_hour.toInt()>=24)
            {
                time_hour = "00";
            }
            QString formattedMin = time_min.rightJustified(2, '0');
            QString formattedHour = time_hour.rightJustified(2, '0');

            ui->top_label_time->setText(formattedHour + ":" + formattedMin);
            emit timeUpdated(formattedMin, formattedHour);
        }
    });



}

//点击其他地方隐藏音量条
bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (event->type() == QEvent::MouseButtonPress) {
        // 使用 dynamic_cast 替代 static_cast（更安全）
        QMouseEvent *mouseEvent = dynamic_cast<QMouseEvent*>(event);
        if (mouseEvent && !ui->VolumeSlider->geometry().contains(mouseEvent->pos())) {
            ui->VolumeSlider->hide();
        }
    }
    return QWidget::eventFilter(obj, event);
}
MainWindow::~MainWindow()
{
    delete ui;
}

//音量控制按键
void MainWindow::on_VolumeButton_clicked()
{
    ui->VolumeSlider->setVisible(!ui->VolumeSlider->isVisible());
}
//下一首按键
void MainWindow::on_MusicRight_clicked()
{
    ui->SongBox->setCurrentIndex(ui->SongBox->currentIndex() + 1);
    if(ui->SongBox->currentIndex() == -1)
        ui->SongBox->setCurrentIndex(0);
    if(music_start_once == 0)
    {
        process->write("quit\n");
        timer->stop();
        ui->MusicStart->setStyleSheet("border-image: url(:./images/img/music_start.png);");
        music_playing_flag=0;
        music_start_once = 1;
    }

}
//上一首按键
void MainWindow::on_MusicLeft_clicked()
{
    ui->SongBox->setCurrentIndex(ui->SongBox->currentIndex() - 1);
    if(ui->SongBox->currentIndex() == -1)
        ui->SongBox->setCurrentIndex(1);
    if(music_start_once == 0)
    {
        process->write("quit\n");
        timer->stop();
        ui->MusicStart->setStyleSheet("border-image: url(:./images/img/music_start.png);");
        music_playing_flag=0;
        music_start_once = 1;
    }
}
//播放、暂停按键
void MainWindow::on_MusicStart_clicked()
{
    if(music_start_once)
    {
        music_start_once = 0;
        //打开歌词文件

        lrc_file = new QFile(ui->SongBox->currentText()+ ".lrc");
        if(lrc_file->open(QIODevice::ReadWrite))
        {
            qDebug() << "lrc file open success";
            lrc_list = QString(lrc_file->readAll()).split("\r\n");
        }
        else
        {
            qDebug() << "lrc file open error";
        }
        qDebug("process start");
        process->start(QString("mplayer -quiet -slave ./%1.mp3").arg(ui->SongBox->currentText()));
        process->write(QString("volume %1 1\n").arg(ui->VolumeSlider->value()).toStdString().c_str());

        music_playing_flag = 1;

        ui->MusicStart->setStyleSheet("border-image: url(:./images/img/pause.png);");
        process->write(QString("volume %1 1\n").arg(ui->VolumeSlider->value()).toStdString().c_str());


        //获取总时长
        process->write("get_time_length\n");
        timer->start(1000); //ms

        return;
    }
    if(music_playing_flag)
    {
        process->write("pause\n");
        timer->stop();
        ui->MusicStart->setStyleSheet("border-image: url(:./images/img/music_start.png);");
        music_playing_flag=0;
    }
    else
    {
        process->write("pause\n");
        timer->start();
        ui->MusicStart->setStyleSheet("border-image: url(:./images/img/pause.png);");
        music_playing_flag=1;

    }
}
//音量改变槽函数
void MainWindow::on_VolumeSlider_valueChanged(int value)
{
    if(music_playing_flag)
    {

        process->write(QString("volume %1 1\n").arg(value).toStdString().c_str());

    }
}
//音乐进度拉动槽函数
void MainWindow::on_MusicSlider_valueChanged(int value)
{
    if(music_playing_flag)
    {
        int pos = value;
        process->write(QString("seek %1\n").arg((pos - music_current_pos.toInt())).toStdString().c_str());
        qDebug() << QString("seek %1\n").arg((pos - music_current_pos.toInt())).toStdString().c_str();
    }

}
//天气及时间的JSON数据处理
void MainWindow::NetworkReplyFinied(QNetworkReply *reply)
{
    if (reply->request().url() == QUrl(time_url))
    {
        qDebug()<<"time start";
        TimeData =  reply->readAll();
        int start = TimeData.indexOf("msg");
        QString data  = TimeData.mid(start+6, 10);
        time_hour = TimeData.mid(start+17, 2);
        time_min = TimeData.mid(start+20, 2);
        time_sec = TimeData.mid(start+23, 2);


        ui->top_label_date->setText(data);
        ui->top_label_time->setText(time_hour+":"+time_min);
        timer_top->start(1000);
    }
    else if (reply->request().url() == QUrl(weather_url))
    {
        qDebug()<<"weather start";
        WeatherData =  reply->readAll();
        QJsonDocument jsonobj = QJsonDocument::fromJson(WeatherData);
        if(jsonobj.isNull() && !jsonobj.isObject())
        {
            qDebug() << "errer:";
            return;
        }
        QJsonObject objRoot = jsonobj.object();
        ui->label_city->setText(objRoot["city"].toString());
        QJsonArray WeatherDataArray = objRoot["data"].toArray();
        QString weather = WeatherDataArray[0].toObject()["wea"].toString();
        ui->label_weathertxt->setText(weather);
        if(weather == "晴")
        ui->label_weathericon->setPixmap(QPixmap(":/images/img/qing.png"));
        else if(weather == "阴")
            ui->label_weathericon->setPixmap(QPixmap(":/images/img/yin.png"));
        else if(weather == "多云")
            ui->label_weathericon->setPixmap(QPixmap(":/images/img/duoyun.png"));
        else if(weather == "小雨")
            ui->label_weathericon->setPixmap(QPixmap(":/images/img/xiaoyu.png"));
        else if(weather == "中雨")
            ui->label_weathericon->setPixmap(QPixmap(":/images/img/zhonyu.png"));
        else if(weather == "大雨")
            ui->label_weathericon->setPixmap(QPixmap(":/images/img/dayu.png"));

        QString tempStr = WeatherDataArray[0].toObject()["tem"].toString();
        QString tempWithoutDecimal = tempStr.split(".")[0]+"°";  // 按 "." 分割，取第一部分
        ui->label_temperture->setText(tempWithoutDecimal);



    }

}

//乐曲选择下拉框槽函数
void MainWindow::on_SongBox_currentTextChanged(const QString &arg1)
{
    ui->label_title_song->setText(arg1);
    if(music_playing_flag == 1)
    {
    process->write("quit\n");
    timer->stop();
    ui->MusicStart->setStyleSheet("border-image: url(:./images/img/music_start.png);");
    music_playing_flag=0;
    music_start_once = 1;
    }
}





void MainWindow::on_WeatherButton_clicked()
{
    weather = new Weather(this,this);
    qDebug() << "map";
    this->hide();
    weather->show();
    QString formattedMin = time_min.rightJustified(2, '0');
    QString formattedHour = time_hour.rightJustified(2, '0');
    emit timeUpdated(formattedMin, formattedHour);
}

