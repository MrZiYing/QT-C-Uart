/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *recvEdit;
    QWidget *widget_2;
    QPlainTextEdit *plainTextEdit_2;
    QLineEdit *fileNameEdit;
    QLabel *infoLab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *sendBtn;
    QPushButton *sendStopbtn;
    QPushButton *openFileBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *sendNewLineChx;
    QCheckBox *timerSendChx;
    QLabel *label_7;
    QLineEdit *timerPeriodEdit;
    QLabel *label_8;
    QPushButton *sendFileBtn;
    QPushButton *sendclearBtn;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *baudRateCmb;
    QComboBox *stopBitsCmb;
    QComboBox *dataBitsCmb;
    QComboBox *parityCmb;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *openPortBtn;
    QPushButton *clearRecvBtn;
    QComboBox *portsCmb;
    QPushButton *closePortBtn;
    QPushButton *freshBtn;
    QCheckBox *hexDisplayChx;
    QCheckBox *sendHexChx;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(739, 499);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dog.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        recvEdit = new QPlainTextEdit(Widget);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(13, 10, 501, 321));
        recvEdit->setReadOnly(true);
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(13, 340, 711, 166));
        plainTextEdit_2 = new QPlainTextEdit(widget_2);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 0, 501, 96));
        fileNameEdit = new QLineEdit(widget_2);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));
        fileNameEdit->setGeometry(QRect(300, 100, 201, 21));
        infoLab = new QLabel(widget_2);
        infoLab->setObjectName(QString::fromUtf8("infoLab"));
        infoLab->setGeometry(QRect(280, 130, 431, 21));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 30, 94, 98));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        verticalLayout->addWidget(sendBtn);

        sendStopbtn = new QPushButton(layoutWidget);
        sendStopbtn->setObjectName(QString::fromUtf8("sendStopbtn"));

        verticalLayout->addWidget(sendStopbtn);

        openFileBtn = new QPushButton(layoutWidget);
        openFileBtn->setObjectName(QString::fromUtf8("openFileBtn"));

        verticalLayout->addWidget(openFileBtn);

        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 100, 294, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sendNewLineChx = new QCheckBox(layoutWidget1);
        sendNewLineChx->setObjectName(QString::fromUtf8("sendNewLineChx"));

        horizontalLayout->addWidget(sendNewLineChx);

        timerSendChx = new QCheckBox(layoutWidget1);
        timerSendChx->setObjectName(QString::fromUtf8("timerSendChx"));

        horizontalLayout->addWidget(timerSendChx);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        timerPeriodEdit = new QLineEdit(layoutWidget1);
        timerPeriodEdit->setObjectName(QString::fromUtf8("timerPeriodEdit"));
        timerPeriodEdit->setEnabled(true);
        timerPeriodEdit->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(timerPeriodEdit);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        sendFileBtn = new QPushButton(widget_2);
        sendFileBtn->setObjectName(QString::fromUtf8("sendFileBtn"));
        sendFileBtn->setGeometry(QRect(610, 100, 92, 28));
        sendclearBtn = new QPushButton(widget_2);
        sendclearBtn->setObjectName(QString::fromUtf8("sendclearBtn"));
        sendclearBtn->setGeometry(QRect(610, 30, 92, 28));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(540, 20, 181, 261));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 14, 60, 16));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 45, 16));
        baudRateCmb = new QComboBox(widget);
        baudRateCmb->setObjectName(QString::fromUtf8("baudRateCmb"));
        baudRateCmb->setGeometry(QRect(80, 40, 91, 21));
        stopBitsCmb = new QComboBox(widget);
        stopBitsCmb->setObjectName(QString::fromUtf8("stopBitsCmb"));
        stopBitsCmb->setGeometry(QRect(80, 70, 91, 21));
        dataBitsCmb = new QComboBox(widget);
        dataBitsCmb->setObjectName(QString::fromUtf8("dataBitsCmb"));
        dataBitsCmb->setGeometry(QRect(80, 100, 91, 21));
        parityCmb = new QComboBox(widget);
        parityCmb->setObjectName(QString::fromUtf8("parityCmb"));
        parityCmb->setGeometry(QRect(80, 130, 91, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 45, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 45, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 45, 16));
        openPortBtn = new QPushButton(widget);
        openPortBtn->setObjectName(QString::fromUtf8("openPortBtn"));
        openPortBtn->setGeometry(QRect(0, 190, 81, 28));
        clearRecvBtn = new QPushButton(widget);
        clearRecvBtn->setObjectName(QString::fromUtf8("clearRecvBtn"));
        clearRecvBtn->setGeometry(QRect(90, 220, 81, 28));
        portsCmb = new QComboBox(widget);
        portsCmb->setObjectName(QString::fromUtf8("portsCmb"));
        portsCmb->setGeometry(QRect(80, 10, 91, 21));
        closePortBtn = new QPushButton(widget);
        closePortBtn->setObjectName(QString::fromUtf8("closePortBtn"));
        closePortBtn->setGeometry(QRect(90, 190, 81, 28));
        freshBtn = new QPushButton(widget);
        freshBtn->setObjectName(QString::fromUtf8("freshBtn"));
        freshBtn->setGeometry(QRect(0, 220, 81, 28));
        hexDisplayChx = new QCheckBox(Widget);
        hexDisplayChx->setObjectName(QString::fromUtf8("hexDisplayChx"));
        hexDisplayChx->setGeometry(QRect(530, 290, 100, 19));
        sendHexChx = new QCheckBox(Widget);
        sendHexChx->setObjectName(QString::fromUtf8("sendHexChx"));
        sendHexChx->setGeometry(QRect(530, 320, 111, 19));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        infoLab->setText(QString());
        sendBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        sendStopbtn->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\345\217\221\351\200\201", nullptr));
        openFileBtn->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        sendNewLineChx->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        timerSendChx->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\221\250\346\234\237:", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "ms", nullptr));
        sendFileBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        sendclearBtn->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        openPortBtn->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        clearRecvBtn->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        closePortBtn->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        freshBtn->setText(QCoreApplication::translate("Widget", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        hexDisplayChx->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\346\216\245\346\224\266", nullptr));
        sendHexChx->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
