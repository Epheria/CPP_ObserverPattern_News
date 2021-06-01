#pragma once
#include "Macro.h"
#include "Observer.h"

using namespace std;

class Person : public Observer
{
private:
	string m_strName;
	string m_strDate;
	string m_strNews;
public:
	virtual void Update(string name);
	virtual void Update(string news, string date);
	virtual void Print();

	Person();
	~Person();
};

