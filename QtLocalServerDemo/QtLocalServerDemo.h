#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtLocalServerDemo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtLocalServerDemoClass; };
QT_END_NAMESPACE

class QtLocalServerDemo : public QWidget
{
    Q_OBJECT

public:
    QtLocalServerDemo(QWidget *parent = nullptr);
    ~QtLocalServerDemo();

protected slots:
	void slotOpenSubProcess();

private:
	void initUi();

private:
    Ui::QtLocalServerDemoClass *ui;
};
