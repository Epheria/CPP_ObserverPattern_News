#pragma once
#include "Macro.h"
#include "Subject.h"
#include "Observer.h"


class News : public Subject
{
private:
	string m_strDate;
	string m_strNews;
	vector<Observer*> ObserverList;
	static News* m_hThis;
public:
	void SetInfo(string news, string date);
	string currentDateTime();
	void NotifyObserver();
	void AddObserver(Observer* input);
	void ShowObserverInfo();
	static News* GetInstance()
	{
		if (m_hThis == NULL)
			m_hThis = new News;
		return m_hThis;
	}
	static void InitObject()
	{
		delete m_hThis;
		m_hThis = NULL;
	}
	News();
	~News();
};

