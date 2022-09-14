#include "QtSubProcess.h"

#include <QPushButton>
#include <QLabel>
#include <QBoxLayout>

QtSubProcess::QtSubProcess(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtSubProcessClass())
{
    ui->setupUi(this);
	setWindowTitle("Sub Process");
	initUi();
}

QtSubProcess::~QtSubProcess()
{
    delete ui;
}

void QtSubProcess::initUi()
{
	QVBoxLayout *pMainLayout = new QVBoxLayout(this);
	pMainLayout->setMargin(0);
	setLayout(pMainLayout);

	QPushButton* pOpen = new QPushButton(tr("I'm a sub process"), this);
	pOpen->setFixedSize(150, 48);

	QHBoxLayout *pLayout = new QHBoxLayout(this);
	pLayout->setMargin(0);
	pLayout->addStretch();
	pLayout->addWidget(pOpen);
	pLayout->addStretch();

	pMainLayout->addStretch();
	pMainLayout->addLayout(pLayout);
	pMainLayout->addStretch();
}
