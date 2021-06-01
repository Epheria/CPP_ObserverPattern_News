#include "Person.h"

Person::Person()
{
}

void Person::Update(string name)
{
	m_strName = name;
}

void Person::Update(string news, string date)
{
	m_strDate = date;
	m_strNews = news;
}

void Person::Print()
{
	cout << m_strDate << endl;
	cout << m_strNews << endl;
	cout << endl << "\t" << m_strName << "  °í°´´Ô." << endl << endl;
}

Person::~Person()
{
}