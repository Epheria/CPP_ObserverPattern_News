#include "News.h"

News* News::m_hThis = NULL;

News::News()
{
}

void News::NotifyObserver()
{
	for (auto iter = ObserverList.begin(); iter != ObserverList.end(); iter++)
	{
		(*iter)->Update(m_strNews, m_strDate);
	}
}
void News::AddObserver(Observer* input)
{
	ObserverList.push_back(input);
}

void News::ShowObserverInfo()
{
	for (auto iter = ObserverList.begin(); iter != ObserverList.end(); iter++)
	{
		(*iter)->Print();
	}
}

void News::SetInfo(string news, string date)
{
	m_strDate = date;
	m_strNews = news;
}

string News::currentDateTime()
{
	time_t now = time(0);
	struct tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

	return buf;
}

News::~News()
{
	for(auto iter = ObserverList.begin(); iter != ObserverList.end(); iter++)
		delete (*iter);
}