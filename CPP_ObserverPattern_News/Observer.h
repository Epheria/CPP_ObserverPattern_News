#pragma once
#include "Macro.h"

class Observer
{
public:
	virtual void Update(string name) = 0;
	virtual void Update(string news, string date) = 0;
	virtual void Print() = 0;
	Observer();
	~Observer();
};

