/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *chartWidget;
    QWidget *widgetPID;
    QWidget *chartWidgetError;
    QWidget *widgetWartoscSterowania;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxSignal;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonUnit;
    QLabel *labelValue;
    QDoubleSpinBox *doubleSpinBoxValue;
    QRadioButton *radioButtonRect;
    QLabel *labelTime;
    QDoubleSpinBox *doubleSpinBoxTime;
    QRadioButton *radioButtonSinus;
    QLabel *labelAmplitude;
    QDoubleSpinBox *doubleSpinBoxSinusAmp;
    QGroupBox *groupBoxARX;
    QGridLayout *gridLayout_2;
    QLabel *labelA;
    QLineEdit *lineEditA;
    QLabel *labelB;
    QLineEdit *lineEditB;
    QLabel *labelK;
    QSpinBox *spinBoxK;
    QGroupBox *groupBoxPID;
    QGridLayout *gridLayout_3;
    QLabel *labelI;
    QDoubleSpinBox *doubleSpinBoxP;
    QLabel *labelD;
    QLabel *labelP;
    QDoubleSpinBox *doubleSpinBoxI;
    QDoubleSpinBox *doubleSpinBoxD;
    QGridLayout *gridLayout_4;
    QLabel *labelInterval;
    QSpinBox *spinBoxInterval;
    QLabel *labelNoise;
    QDoubleSpinBox *doubleSpinBoxNoise;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonARX;
    QPushButton *pushButtonSave;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1065, 800);
        MainWindow->setMinimumSize(QSize(1065, 800));
        MainWindow->setMaximumSize(QSize(1065, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        chartWidget = new QWidget(centralwidget);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setGeometry(QRect(20, 10, 691, 461));
        chartWidget->setAutoFillBackground(false);
        chartWidget->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
""));
        widgetPID = new QWidget(centralwidget);
        widgetPID->setObjectName("widgetPID");
        widgetPID->setGeometry(QRect(380, 480, 321, 261));
        widgetPID->setAutoFillBackground(false);
        widgetPID->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
""));
        chartWidgetError = new QWidget(centralwidget);
        chartWidgetError->setObjectName("chartWidgetError");
        chartWidgetError->setGeometry(QRect(20, 480, 341, 261));
        chartWidgetError->setAutoFillBackground(false);
        chartWidgetError->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
""));
        widgetWartoscSterowania = new QWidget(centralwidget);
        widgetWartoscSterowania->setObjectName("widgetWartoscSterowania");
        widgetWartoscSterowania->setGeometry(QRect(720, 480, 321, 261));
        widgetWartoscSterowania->setAutoFillBackground(false);
        widgetWartoscSterowania->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
"\n"
""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(720, 20, 331, 452));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBoxSignal = new QGroupBox(layoutWidget);
        groupBoxSignal->setObjectName("groupBoxSignal");
        gridLayout = new QGridLayout(groupBoxSignal);
        gridLayout->setObjectName("gridLayout");
        radioButtonUnit = new QRadioButton(groupBoxSignal);
        radioButtonUnit->setObjectName("radioButtonUnit");
        radioButtonUnit->setChecked(true);

        gridLayout->addWidget(radioButtonUnit, 0, 0, 1, 1);

        labelValue = new QLabel(groupBoxSignal);
        labelValue->setObjectName("labelValue");

        gridLayout->addWidget(labelValue, 0, 1, 1, 1);

        doubleSpinBoxValue = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxValue->setObjectName("doubleSpinBoxValue");
        doubleSpinBoxValue->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBoxValue, 0, 2, 1, 1);

        radioButtonRect = new QRadioButton(groupBoxSignal);
        radioButtonRect->setObjectName("radioButtonRect");

        gridLayout->addWidget(radioButtonRect, 1, 0, 1, 1);

        labelTime = new QLabel(groupBoxSignal);
        labelTime->setObjectName("labelTime");

        gridLayout->addWidget(labelTime, 1, 1, 1, 1);

        doubleSpinBoxTime = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxTime->setObjectName("doubleSpinBoxTime");
        doubleSpinBoxTime->setMinimum(0.250000000000000);
        doubleSpinBoxTime->setMaximum(99000.000000000000000);
        doubleSpinBoxTime->setSingleStep(0.100000000000000);
        doubleSpinBoxTime->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBoxTime, 1, 2, 1, 1);

        radioButtonSinus = new QRadioButton(groupBoxSignal);
        radioButtonSinus->setObjectName("radioButtonSinus");

        gridLayout->addWidget(radioButtonSinus, 2, 0, 1, 1);

        labelAmplitude = new QLabel(groupBoxSignal);
        labelAmplitude->setObjectName("labelAmplitude");

        gridLayout->addWidget(labelAmplitude, 2, 1, 1, 1);

        doubleSpinBoxSinusAmp = new QDoubleSpinBox(groupBoxSignal);
        doubleSpinBoxSinusAmp->setObjectName("doubleSpinBoxSinusAmp");
        doubleSpinBoxSinusAmp->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBoxSinusAmp, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBoxSignal);

        groupBoxARX = new QGroupBox(layoutWidget);
        groupBoxARX->setObjectName("groupBoxARX");
        gridLayout_2 = new QGridLayout(groupBoxARX);
        gridLayout_2->setObjectName("gridLayout_2");
        labelA = new QLabel(groupBoxARX);
        labelA->setObjectName("labelA");

        gridLayout_2->addWidget(labelA, 0, 0, 1, 1);

        lineEditA = new QLineEdit(groupBoxARX);
        lineEditA->setObjectName("lineEditA");
        lineEditA->setEnabled(false);

        gridLayout_2->addWidget(lineEditA, 0, 1, 1, 1);

        labelB = new QLabel(groupBoxARX);
        labelB->setObjectName("labelB");

        gridLayout_2->addWidget(labelB, 0, 2, 1, 1);

        lineEditB = new QLineEdit(groupBoxARX);
        lineEditB->setObjectName("lineEditB");
        lineEditB->setEnabled(false);

        gridLayout_2->addWidget(lineEditB, 0, 3, 1, 1);

        labelK = new QLabel(groupBoxARX);
        labelK->setObjectName("labelK");

        gridLayout_2->addWidget(labelK, 1, 0, 1, 2);

        spinBoxK = new QSpinBox(groupBoxARX);
        spinBoxK->setObjectName("spinBoxK");
        spinBoxK->setEnabled(false);
        spinBoxK->setMinimum(1);

        gridLayout_2->addWidget(spinBoxK, 1, 2, 1, 2);


        verticalLayout->addWidget(groupBoxARX);

        groupBoxPID = new QGroupBox(layoutWidget);
        groupBoxPID->setObjectName("groupBoxPID");
        gridLayout_3 = new QGridLayout(groupBoxPID);
        gridLayout_3->setObjectName("gridLayout_3");
        labelI = new QLabel(groupBoxPID);
        labelI->setObjectName("labelI");

        gridLayout_3->addWidget(labelI, 0, 2, 1, 1);

        doubleSpinBoxP = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxP->setObjectName("doubleSpinBoxP");
        doubleSpinBoxP->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(doubleSpinBoxP, 0, 1, 1, 1);

        labelD = new QLabel(groupBoxPID);
        labelD->setObjectName("labelD");

        gridLayout_3->addWidget(labelD, 0, 4, 1, 1);

        labelP = new QLabel(groupBoxPID);
        labelP->setObjectName("labelP");

        gridLayout_3->addWidget(labelP, 0, 0, 1, 1);

        doubleSpinBoxI = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxI->setObjectName("doubleSpinBoxI");
        doubleSpinBoxI->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(doubleSpinBoxI, 0, 3, 1, 1);

        doubleSpinBoxD = new QDoubleSpinBox(groupBoxPID);
        doubleSpinBoxD->setObjectName("doubleSpinBoxD");
        doubleSpinBoxD->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(doubleSpinBoxD, 0, 5, 1, 1);


        verticalLayout->addWidget(groupBoxPID);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        labelInterval = new QLabel(layoutWidget);
        labelInterval->setObjectName("labelInterval");

        gridLayout_4->addWidget(labelInterval, 0, 0, 1, 1);

        spinBoxInterval = new QSpinBox(layoutWidget);
        spinBoxInterval->setObjectName("spinBoxInterval");
        spinBoxInterval->setMinimum(100);
        spinBoxInterval->setMaximum(2000);

        gridLayout_4->addWidget(spinBoxInterval, 0, 1, 1, 1);

        labelNoise = new QLabel(layoutWidget);
        labelNoise->setObjectName("labelNoise");

        gridLayout_4->addWidget(labelNoise, 0, 2, 1, 1);

        doubleSpinBoxNoise = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxNoise->setObjectName("doubleSpinBoxNoise");
        doubleSpinBoxNoise->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(doubleSpinBoxNoise, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        pushButtonStart = new QPushButton(layoutWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        gridLayout_5->addWidget(pushButtonStart, 0, 0, 1, 1);

        pushButtonStop = new QPushButton(layoutWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        gridLayout_5->addWidget(pushButtonStop, 0, 1, 1, 1);

        pushButtonReset = new QPushButton(layoutWidget);
        pushButtonReset->setObjectName("pushButtonReset");

        gridLayout_5->addWidget(pushButtonReset, 1, 1, 1, 1);

        pushButtonLoad = new QPushButton(layoutWidget);
        pushButtonLoad->setObjectName("pushButtonLoad");

        gridLayout_5->addWidget(pushButtonLoad, 2, 1, 1, 1);

        pushButtonARX = new QPushButton(layoutWidget);
        pushButtonARX->setObjectName("pushButtonARX");

        gridLayout_5->addWidget(pushButtonARX, 1, 0, 1, 1);

        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName("pushButtonSave");

        gridLayout_5->addWidget(pushButtonSave, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1065, 37));
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
        groupBoxSignal->setTitle(QCoreApplication::translate("MainWindow", "Sygna\305\202 wej\305\233ciowy", nullptr));
        radioButtonUnit->setText(QCoreApplication::translate("MainWindow", "jednostkowy", nullptr));
        labelValue->setText(QCoreApplication::translate("MainWindow", "warto\305\233\304\207:", nullptr));
        radioButtonRect->setText(QCoreApplication::translate("MainWindow", "prostok\304\205tny", nullptr));
        labelTime->setText(QCoreApplication::translate("MainWindow", "czas /okres [s]:", nullptr));
        radioButtonSinus->setText(QCoreApplication::translate("MainWindow", "sinusoidalny", nullptr));
        labelAmplitude->setText(QCoreApplication::translate("MainWindow", "amplituda:", nullptr));
        groupBoxARX->setTitle(QCoreApplication::translate("MainWindow", "Model ARX", nullptr));
        labelA->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        lineEditA->setText(QString());
        labelB->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        lineEditB->setText(QString());
        labelK->setText(QCoreApplication::translate("MainWindow", "op\303\263\305\272nienie:", nullptr));
        groupBoxPID->setTitle(QCoreApplication::translate("MainWindow", "Regulator PID", nullptr));
        labelI->setText(QCoreApplication::translate("MainWindow", "I:", nullptr));
        labelD->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        labelP->setText(QCoreApplication::translate("MainWindow", "P:", nullptr));
        labelInterval->setText(QCoreApplication::translate("MainWindow", "interwa\305\202 [ms]:", nullptr));
        labelNoise->setText(QCoreApplication::translate("MainWindow", "szum:", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButtonLoad->setText(QCoreApplication::translate("MainWindow", "Odczytaj z pliku", nullptr));
        pushButtonARX->setText(QCoreApplication::translate("MainWindow", "ARX ustawienia", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "Zapisz do pliku", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
