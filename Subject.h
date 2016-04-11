#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "Observer.h"

using namespace std;

class Observer;

class Subject
{
public:
	Subject(string ss);
	virtual ~Subject(void);
public:
	virtual void Attach(Observer* ob) = 0;
	virtual void Detach(Observer* ob) = 0;
	virtual void Notify() = 0;
public:
	string subjectState();
private:
	string action;
};

#endif
