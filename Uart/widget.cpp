#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setMaximumSize(739,499);
    setMinimumSize(739,499);
    mSerialPort.setReadBufferSize(1024);
    labelPal.setColor(QPalette::WindowText, Qt::red);
    ui->infoLab->setPalette(labelPal);
    ui->infoLab->setAlignment(Qt::AlignRight);
    ui->timerPeriodEdit->setText("1000");
     loadSerialPort();
     initParityCmb();
     initBaudRateCmb();
     initDataBitsCmb();
     initStopBitsCmb();
     ui->sendBtn->setEnabled(false);
     ui->openPortBtn->setEnabled(true);
     ui->closePortBtn->setEnabled(false);
     timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[&](){
        autoSend();
    });
    QObject::connect(&mSerialPort,&QSerialPort::readyRead,this,[&](){
        QTimer t;
        QEventLoop loop;
        t.start(500);
        connect(&t,&QTimer::timeout,&loop,&QEventLoop::quit);
        loop.exec();
        t.stop();
       QByteArray bytedata = mSerialPort.readAll();
        if(ui->hexDisplayChx->isChecked()){
            QByteArray hexData = bytedata.toHex(' ').trimmed().toUpper();
            recvData = QString(hexData);
        }
        else
             recvData = QString(bytedata);

         recvData = " -> "+ recvData;
        showRecvData();
    });
}




Widget::~Widget()
{
    delete ui;
}

void Widget::loadSerialPort(){
    QStringList comname;
    comname.clear();
    ui->portsCmb->clear();
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        comname.append(info.portName());
    }
    ui->portsCmb->addItems(comname);


}

void Widget::initBaudRateCmb(){
    ui->baudRateCmb->addItem("115200");
    ui->baudRateCmb->addItem("1200");
    ui->baudRateCmb->addItem("2400");
    ui->baudRateCmb->addItem("4800");
    ui->baudRateCmb->addItem("9600");
    ui->baudRateCmb->addItem("19200");
    ui->baudRateCmb->addItem("38400");
    ui->baudRateCmb->addItem("57600");

}

void Widget::initStopBitsCmb(){
    ui->stopBitsCmb->addItem("1");
    ui->stopBitsCmb->addItem("2");
}

void Widget::initDataBitsCmb(){
    ui->dataBitsCmb->addItem("8");
    ui->dataBitsCmb->addItem("5");
    ui->dataBitsCmb->addItem("6");
    ui->dataBitsCmb->addItem("7");


}

void Widget::initParityCmb(){
    ui->parityCmb->addItem("None");
    ui->parityCmb->addItem("Odd");
    ui->parityCmb->addItem("Even");

}


void Widget::on_portsCmb_currentIndexChanged(const QString &arg1)       // 串口名
{
    on_closePortBtn_clicked();
    mSerialPort.setPortName(arg1);
}

void Widget::on_baudRateCmb_currentIndexChanged(const QString &arg1)    // 波特率
{
    on_closePortBtn_clicked();
    if (arg1 == "9600")
    mSerialPort.setBaudRate(QSerialPort::Baud9600);
    if (arg1 == "115200")
    mSerialPort.setBaudRate(QSerialPort::Baud115200);
    if (arg1 == "2400")
    mSerialPort.setBaudRate(QSerialPort::Baud2400);
    if (arg1 == "4800")
    mSerialPort.setBaudRate(QSerialPort::Baud4800);
    if (arg1 == "19200")
    mSerialPort.setBaudRate(QSerialPort::Baud19200);
    if (arg1 == "38400")
    mSerialPort.setBaudRate(QSerialPort::Baud38400);
    if (arg1 == "57600")
    mSerialPort.setBaudRate(QSerialPort::Baud57600);
}

void Widget::on_stopBitsCmb_currentIndexChanged(const QString &arg1)        // 停止位
{
    on_closePortBtn_clicked();
    if(arg1=="1")
        mSerialPort.setStopBits(QSerialPort::OneStop);
    if(arg1=="2")
        mSerialPort.setStopBits(QSerialPort::TwoStop);
}

void Widget::on_dataBitsCmb_currentIndexChanged(const QString &arg1)    // 数据位
{
    on_closePortBtn_clicked();
    if(arg1=="5")
    mSerialPort.setDataBits(QSerialPort::Data5);
    if(arg1=="6")
    mSerialPort.setDataBits(QSerialPort::Data6);
    if(arg1=="7")
    mSerialPort.setDataBits(QSerialPort::Data7);
    if(arg1=="8")
    mSerialPort.setDataBits(QSerialPort::Data8);
}

void Widget::on_parityCmb_currentIndexChanged(const QString &arg1)  // 校验位
{
    on_closePortBtn_clicked();
    if(arg1=="None")
        mSerialPort.setParity(QSerialPort::NoParity);
    if(arg1=="Odd")
        mSerialPort.setParity(QSerialPort::OddParity);
    if(arg1=="Even")
        mSerialPort.setParity(QSerialPort::EvenParity);
}

void Widget::on_openPortBtn_clicked()
{
    if(mSerialPort.open(QSerialPort::ReadWrite)){
        ui->sendBtn->setEnabled(true);
        ui->openPortBtn->setEnabled(false);
        ui->closePortBtn->setEnabled(true);
        ui->infoLab->setText("串口打开成功!");
    }else{
        ui->infoLab->setText("串口打开失败!");
    }



}

void Widget::on_sendBtn_clicked()
{
    timer->stop();
    sourceData = ui->plainTextEdit_2->toPlainText();

    QByteArray byteData = sourceData.toLatin1();
    char *dat = byteData.data();
    if(!ui->timerSendChx->isChecked()){
        if(!ui->sendHexChx->isChecked()){
            mSerialPort.write(dat);
            showMessage(" <- "+sourceData);
        }else{
            mSerialPort.write(byteData.toHex(' ').toUpper());
            showMessage(" <- "+QString(byteData.toHex(' ').trimmed().toUpper()));
        }

    }
    else{
        timer->start(ui->timerPeriodEdit->text().toInt());
    }

}

void Widget::on_sendclearBtn_clicked()
{
    timer->stop();
    ui->plainTextEdit_2->clear();
}

void Widget::autoSend(){
    QByteArray data = sourceData.toLatin1();
    if(ui->sendHexChx->isChecked()){
        mSerialPort.write(data.toHex(' ').toUpper());
        showMessage(" <- "+QString(data.toHex(' ').trimmed().toUpper()));
    }else{
        mSerialPort.write(data);
        showMessage(" <- "+sourceData);
    }
}

void Widget::showMessage(QString msg){
    QDateTime currentTime = QDateTime::currentDateTime();
    QString formattedTime = currentTime.toString("HH:mm:ss");
    ui->recvEdit->appendPlainText(formattedTime+msg);
}

void Widget::showRecvData(){
    QDateTime currentTime = QDateTime::currentDateTime();
    QString formattedTime = currentTime.toString("HH:mm:ss");
    ui->recvEdit->appendPlainText(formattedTime+recvData);
}


void Widget::on_sendStopbtn_clicked()
{
    timer->stop();
}

void Widget::on_clearRecvBtn_clicked()
{
    ui->recvEdit->clear();


}

void Widget::on_freshBtn_clicked()
{

    loadSerialPort();
}


void Widget::on_closePortBtn_clicked()
{
    mSerialPort.close();
    ui->closePortBtn->setEnabled(false);
    ui->openPortBtn->setEnabled(true);
    ui->sendBtn->setEnabled(false);
    ui->infoLab->setText("串口已关闭!");

}
