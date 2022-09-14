#pragma once

#include <QThread>

#define	ThreadFunc std::function<void()>

class QtThread  : public QThread
{
	Q_OBJECT

public:
	explicit QtThread(QObject *parent = nullptr);
	~QtThread();

	void setThreadFunc(ThreadFunc threadFunc);

protected:
	void run();

private:
	ThreadFunc	m_threadFunc;
};
