/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *chartWidget;
    QGroupBox *groupBoxARX;
    QLineEdit *lineEditA;
    QLabel *labelA;
    QLabel *labelB;
    QLineEdit *lineEditB;
    QLabel *labelK;
    QSpinBox *spinBoxK;
    QGroupBox *groupBoxPID;
    QDoubleSpinBox *doubleSpinBoxP;
    QDoubleSpinBox *doubleSpinBoxI;
    QDoubleSpinBox *doubleSpinBoxD;
    QLabel *labelP;
    QLabel *labelI;
    QLabel *labelD;
    QDoubleSpinBox *doubleSpinBoxD_2;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonReset;
    QLabel *labelInterval;
    QSpinBox *spinBoxInterval;
    QGroupBox *groupBoxSignal;
    QRadioButton *radioButtonUnit;
    QRadioButton *radioButtonRect;
    QRadioButton *radioButtonSinus;
    QDoubleSpinBox *doubleSpinBoxValue;
    QDoubleSpinBox *doubleSpinBoxTime;
    QDoubleSpinBox *doubleSpinBoxSinusAmp;
    QLabel *labelValue;
    QLabel *labelTime;
    QLabel *labelAmplitude;
    QLabel *labelNoise;
    QDoubleSpinBox *doubleSpinBoxNoise;
    QWidget *widgetPID;
    QWidget *chartWidgetError;
    QWidget *widgetWartoscSterowania;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonLoad;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1016, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        chartWidget = new QWidget(centralwidget);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setGeometry(QRect(20, 10, 341, 261));
        chartWidget->setAutoFillBackground(true);
        groupBoxARX = new QGroupBox(centralwidget);
        groupBoxARX->setObjectName("groupBoxARX");
        groupBoxARX->setGeometry(QRect(720, 190, 281, 101));
        lineEditA = new QLineEdit(groupBoxARX);
        lineEditA->setObjectName("lineEditA");
        lineEditA->setGeometry(QRect(30, 50, 61, 22));
        labelA = new QLabel(groupBoxARX);
        labelA->setObjectName("labelA");
        labelA->setGeometry(QRect(10, 50, 16, 16));
        labelB = new QLabel(groupBoxARX);
        labelB->setObjectName("labelB");
        labelB->setGeometry(QRect(100, 50, 16, 16));
        lineEditB = new QLineEdit(groupBoxARX);
        lineEditB->setObjectName("lineEditB");
        lineEditB->setGeometry(QRect(120, 50, 61, 22));
        labelK = new QLabel(groupBoxARX);
        labelK->setObjectName("labelK");
        labelK->setGeometry(QRect(190, 50, 16, 16));
        spinBoxK = new QSpinBox(groupBoxARX);
        spinBoxK->setObjectName("spinBoxK");
        spinBoxK->setGeometry(QRect(210, 50, 61, 22));
        groupBoxPID = new QGroupBox(centralwidget);
        groupBoxPID->setObjectName("groupBoxPID");
        groupBoxPID->setGeometry(QRect(720, 320, 281, 91));
        doubleSpinBoxP = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxP->setObjectName("doubleSpinBoxP");
        doubleSpinBoxP->setGeometry(QRect(30, 40, 61, 22));
        doubleSpinBoxP->setSingleStep(0.100000000000000);
        doubleSpinBoxI = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxI->setObjectName("doubleSpinBoxI");
        doubleSpinBoxI->setGeometry(QRect(120, 40, 61, 22));
        doubleSpinBoxI->setSingleStep(0.100000000000000);
        doubleSpinBoxD = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxD->setObjectName("doubleSpinBoxD");
        doubleSpinBoxD->setGeometry(QRect(210, 40, 61, 22));
        doubleSpinBoxD->setSingleStep(0.100000000000000);
        labelP = new QLabel(groupBoxPID);
        labelP->setObjectName("labelP");
        labelP->setGeometry(QRect(10, 40, 16, 16));
        labelI = new QLabel(groupBoxPID);
        labelI->setObjectName("labelI");
        labelI->setGeometry(QRect(100, 40, 16, 16));
        labelD = new QLabel(groupBoxPID);
        labelD->setObjectName("labelD");
        labelD->setGeometry(QRect(190, 40, 16, 16));
        doubleSpinBoxD_2 = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxD_2->setObjectName("doubleSpinBoxD_2");
        doubleSpinBoxD_2->setGeometry(QRect(320, 90, 62, 22));
        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(720, 470, 41, 21));
        pushButtonStop = new QPushButton(centralwidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setGeometry(QRect(840, 470, 41, 21));
        pushButtonReset = new QPushButton(centralwidget);
        pushButtonReset->setObjectName("pushButtonReset");
        pushButtonReset->setGeometry(QRect(960, 470, 41, 21));
        labelInterval = new QLabel(centralwidget);
        labelInterval->setObjectName("labelInterval");
        labelInterval->setGeometry(QRect(720, 430, 71, 16));
        spinBoxInterval = new QSpinBox(centralwidget);
        spinBoxInterval->setObjectName("spinBoxInterval");
        spinBoxInterval->setGeometry(QRect(800, 430, 51, 20));
        spinBoxInterval->setMinimum(200);
        spinBoxInterval->setMaximum(2000);
        groupBoxSignal = new QGroupBox(centralwidget);
        groupBoxSignal->setObjectName("groupBoxSignal");
        groupBoxSignal->setGeometry(QRect(720, 20, 281, 141));
        radioButtonUnit = new QRadioButton(groupBoxSignal);
        radioButtonUnit->setObjectName("radioButtonUnit");
        radioButtonUnit->setGeometry(QRect(10, 30, 89, 20));
        radioButtonUnit->setChecked(true);
        radioButtonRect = new QRadioButton(groupBoxSignal);
        radioButtonRect->setObjectName("radioButtonRect");
        radioButtonRect->setGeometry(QRect(10, 70, 91, 20));
        radioButtonSinus = new QRadioButton(groupBoxSignal);
        radioButtonSinus->setObjectName("radioButtonSinus");
        radioButtonSinus->setGeometry(QRect(10, 110, 89, 20));
        doubleSpinBoxValue = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxValue->setObjectName("doubleSpinBoxValue");
        doubleSpinBoxValue->setGeometry(QRect(210, 30, 61, 22));
        doubleSpinBoxValue->setSingleStep(0.100000000000000);
        doubleSpinBoxTime = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxTime->setObjectName("doubleSpinBoxTime");
        doubleSpinBoxTime->setGeometry(QRect(210, 70, 61, 22));
        doubleSpinBoxTime->setMinimum(0.250000000000000);
        doubleSpinBoxTime->setMaximum(99000.000000000000000);
        doubleSpinBoxTime->setSingleStep(0.100000000000000);
        doubleSpinBoxTime->setValue(10.000000000000000);
        doubleSpinBoxSinusAmp = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxSinusAmp->setObjectName("doubleSpinBoxSinusAmp");
        doubleSpinBoxSinusAmp->setGeometry(QRect(210, 110, 61, 22));
        doubleSpinBoxSinusAmp->setSingleStep(0.100000000000000);
        labelValue = new QLabel(groupBoxSignal);
        labelValue->setObjectName("labelValue");
        labelValue->setGeometry(QRect(110, 30, 51, 20));
        labelTime = new QLabel(groupBoxSignal);
        labelTime->setObjectName("labelTime");
        labelTime->setGeometry(QRect(110, 70, 91, 20));
        labelAmplitude = new QLabel(groupBoxSignal);
        labelAmplitude->setObjectName("labelAmplitude");
        labelAmplitude->setGeometry(QRect(110, 110, 61, 20));
        labelNoise = new QLabel(centralwidget);
        labelNoise->setObjectName("labelNoise");
        labelNoise->setGeometry(QRect(890, 430, 41, 20));
        doubleSpinBoxNoise = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxNoise->setObjectName("doubleSpinBoxNoise");
        doubleSpinBoxNoise->setGeometry(QRect(940, 430, 61, 20));
        doubleSpinBoxNoise->setSingleStep(0.010000000000000);
        widgetPID = new QWidget(centralwidget);
        widgetPID->setObjectName("widgetPID");
        widgetPID->setGeometry(QRect(390, 10, 321, 261));
        widgetPID->setAutoFillBackground(true);
        chartWidgetError = new QWidget(centralwidget);
        chartWidgetError->setObjectName("chartWidgetError");
        chartWidgetError->setGeometry(QRect(20, 280, 341, 261));
        chartWidgetError->setAutoFillBackground(true);
        widgetWartoscSterowania = new QWidget(centralwidget);
        widgetWartoscSterowania->setObjectName("widgetWartoscSterowania");
        widgetWartoscSterowania->setGeometry(QRect(390, 280, 321, 261));
        widgetWartoscSterowania->setAutoFillBackground(true);
        pushButtonSave = new QPushButton(centralwidget);
        pushButtonSave->setObjectName("pushButtonSave");
        pushButtonSave->setGeometry(QRect(730, 510, 75, 24));
        pushButtonLoad = new QPushButton(centralwidget);
        pushButtonLoad->setObjectName("pushButtonLoad");
        pushButtonLoad->setGeometry(QRect(840, 510, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1016, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxARX->setTitle(QCoreApplication::translate("MainWindow", "Model ARX", nullptr));
        lineEditA->setText(QString());
        labelA->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        labelB->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        lineEditB->setText(QString());
        labelK->setText(QCoreApplication::translate("MainWindow", "k:", nullptr));
        groupBoxPID->setTitle(QCoreApplication::translate("MainWindow", "Regulator PID", nullptr));
        labelP->setText(QCoreApplication::translate("MainWindow", "P:", nullptr));
        labelI->setText(QCoreApplication::translate("MainWindow", "I:", nullptr));
        labelD->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        labelInterval->setText(QCoreApplication::translate("MainWindow", "interval [ms]:", nullptr));
        groupBoxSignal->setTitle(QCoreApplication::translate("MainWindow", "Sygna\305\202 wej\305\233ciowy", nullptr));
        radioButtonUnit->setText(QCoreApplication::translate("MainWindow", "jednostkowy", nullptr));
        radioButtonRect->setText(QCoreApplication::translate("MainWindow", "prostok\304\205tny", nullptr));
        radioButtonSinus->setText(QCoreApplication::translate("MainWindow", "sinusoidalny", nullptr));
        labelValue->setText(QCoreApplication::translate("MainWindow", "warto\305\233\304\207:", nullptr));
        labelTime->setText(QCoreApplication::translate("MainWindow", "czas /okres [s]:", nullptr));
        labelAmplitude->setText(QCoreApplication::translate("MainWindow", "amplituda:", nullptr));
        labelNoise->setText(QCoreApplication::translate("MainWindow", "szum:", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "Save conf", nullptr));
        pushButtonLoad->setText(QCoreApplication::translate("MainWindow", "Load conf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
