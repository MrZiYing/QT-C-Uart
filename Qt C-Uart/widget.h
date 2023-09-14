#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDateTime>
#include <QPalette>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void initBaudRateCmb();

    void initStopBitsCmb();

    void initDataBitsCmb();

    void initParityCmb();

    void autoSend();

    void showMessage(QString msg);

    void showRecvData();

    QByteArray  strToHex(QString str);

private slots:

    void loadSerialPort();

    void on_portsCmb_currentIndexChanged(const QString &arg1);

    void on_baudRateCmb_currentIndexChanged(const QString &arg1);

    void on_stopBitsCmb_currentIndexChanged(const QString &arg1);

    void on_dataBitsCmb_currentIndexChanged(const QString &arg1);

    void on_parityCmb_currentIndexChanged(const QString &arg1);

    void on_openPortBtn_clicked();

    void on_sendBtn_clicked();

    void on_sendclearBtn_clicked();



    void on_sendStopbtn_clicked();

    void on_clearRecvBtn_clicked();


    void on_freshBtn_clicked();



    void on_closePortBtn_clicked();

private:
    Ui::Widget *ui;
    QSerialPort mSerialPort;
    QTimer *timer;
    QString sourceData;
    QPalette labelPal;
    QString recvData;

};
#endif // WIDGET_H
