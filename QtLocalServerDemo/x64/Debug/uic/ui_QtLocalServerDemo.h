/********************************************************************************
** Form generated from reading UI file 'QtLocalServerDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOCALSERVERDEMO_H
#define UI_QTLOCALSERVERDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtLocalServerDemoClass
{
public:

    void setupUi(QWidget *QtLocalServerDemoClass)
    {
        if (QtLocalServerDemoClass->objectName().isEmpty())
            QtLocalServerDemoClass->setObjectName(QString::fromUtf8("QtLocalServerDemoClass"));
        QtLocalServerDemoClass->resize(600, 400);

        retranslateUi(QtLocalServerDemoClass);

        QMetaObject::connectSlotsByName(QtLocalServerDemoClass);
    } // setupUi

    void retranslateUi(QWidget *QtLocalServerDemoClass)
    {
        QtLocalServerDemoClass->setWindowTitle(QCoreApplication::translate("QtLocalServerDemoClass", "QtLocalServerDemo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLocalServerDemoClass: public Ui_QtLocalServerDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOCALSERVERDEMO_H
