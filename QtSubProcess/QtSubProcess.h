#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtSubProcess.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtSubProcessClass; };
QT_END_NAMESPACE

class QtSubProcess : public QWidget
{
    Q_OBJECT

public:
    QtSubProcess(QWidget *parent = nullptr);
    ~QtSubProcess();

private:
	void initUi();
private:
    Ui::QtSubProcessClass *ui;
};
