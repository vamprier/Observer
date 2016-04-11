#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>
#include "Subject.h"

using namespace std;

class Subject;

class Observer
{
public:
	Observer(string n,Subject* s);
	virtual ~Observer(void);
public:
	virtual void Update() = 0;
protected:
	string name;
	Subject* sub;
};

#endif