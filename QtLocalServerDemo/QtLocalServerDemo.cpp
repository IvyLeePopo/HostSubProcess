#include "QtLocalServerDemo.h"

#include <QPushButton>
#include <QLabel>
#include <QBoxLayout>
#include <QProcess>
#include <QDir>

#include "QtThread.h"

QtLocalServerDemo::QtLocalServerDemo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtLocalServerDemoClass())
{
    ui->setupUi(this);
	setWindowTitle("Host Process");
	initUi();
}

QtLocalServerDemo::~QtLocalServerDemo()
{
    delete ui;
}

void QtLocalServerDemo::slotOpenSubProcess()
{

	auto jointPath = [this](const QString &dirPath, const QString &fileName)
	{
		QDir path(dirPath);
		QString filePath = path.absoluteFilePath(fileName);
		return filePath;
	};

	/// 拉起子进程
	QtThread *thread = new QtThread();
	thread->setThreadFunc([=] {
		QString cmd = "openSubProcess";
		QString renderExePath = jointPath(QCoreApplication::applicationDirPath(), "QtSubProcess.exe");

		QProcess process;
		if (!process.startDetached(renderExePath, QStringList(cmd)))
		{
			/// error
		}
	});

	thread->start();
}

void QtLocalServerDemo::initUi()
{
	QVBoxLayout *pMainLayout = new QVBoxLayout(this);
	pMainLayout->setMargin(0);
	setLayout(pMainLayout);

	QPushButton* pOpen = new QPushButton(tr("Open sub process"), this);
	pOpen->setFixedSize(150, 48);
	connect(pOpen, &QPushButton::clicked, this, &QtLocalServerDemo::slotOpenSubProcess);

	QHBoxLayout *pLayout = new QHBoxLayout(this);
	pLayout->setMargin(0);
	pLayout->addStretch();
	pLayout->addWidget(pOpen);
	pLayout->addStretch();

	pMainLayout->addStretch();
	pMainLayout->addLayout(pLayout);
	pMainLayout->addStretch();
}
