/********************************************************************************
** Form generated from reading UI file 'QtSubProcess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSUBPROCESS_H
#define UI_QTSUBPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSubProcessClass
{
public:

    void setupUi(QWidget *QtSubProcessClass)
    {
        if (QtSubProcessClass->objectName().isEmpty())
            QtSubProcessClass->setObjectName(QString::fromUtf8("QtSubProcessClass"));
        QtSubProcessClass->resize(600, 400);

        retranslateUi(QtSubProcessClass);

        QMetaObject::connectSlotsByName(QtSubProcessClass);
    } // setupUi

    void retranslateUi(QWidget *QtSubProcessClass)
    {
        QtSubProcessClass->setWindowTitle(QCoreApplication::translate("QtSubProcessClass", "QtSubProcess", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtSubProcessClass: public Ui_QtSubProcessClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSUBPROCESS_H
