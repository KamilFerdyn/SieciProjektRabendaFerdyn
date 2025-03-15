/********************************************************************************
** Form generated from reading UI file 'arxokno.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARXOKNO_H
#define UI_ARXOKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ARXokno
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditA;
    QLineEdit *lineEditB;
    QSpinBox *spinBoxK;

    void setupUi(QDialog *ARXokno)
    {
        if (ARXokno->objectName().isEmpty())
            ARXokno->setObjectName("ARXokno");
        ARXokno->resize(400, 300);
        buttonBox = new QDialogButtonBox(ARXokno);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEditA = new QLineEdit(ARXokno);
        lineEditA->setObjectName("lineEditA");
        lineEditA->setGeometry(QRect(60, 30, 113, 21));
        lineEditB = new QLineEdit(ARXokno);
        lineEditB->setObjectName("lineEditB");
        lineEditB->setGeometry(QRect(60, 80, 113, 21));
        spinBoxK = new QSpinBox(ARXokno);
        spinBoxK->setObjectName("spinBoxK");
        spinBoxK->setGeometry(QRect(70, 120, 42, 22));

        retranslateUi(ARXokno);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ARXokno, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ARXokno, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ARXokno);
    } // setupUi

    void retranslateUi(QDialog *ARXokno)
    {
        ARXokno->setWindowTitle(QCoreApplication::translate("ARXokno", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARXokno: public Ui_ARXokno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARXOKNO_H
