#include "QtThread.h"

QtThread::QtThread(QObject *parent)
	: QThread(parent)
	, m_threadFunc(nullptr)
{}

QtThread::~QtThread()
{}

void QtThread::setThreadFunc(ThreadFunc threadFunc)
{
	m_threadFunc = threadFunc;
}

void QtThread::run()
{
	/* ... here is the expensive or blocking operation ... */
	if (m_threadFunc)
	{
		m_threadFunc();
	}
}
