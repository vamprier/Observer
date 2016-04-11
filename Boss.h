#ifndef BOSS_H
#define BOSS_H

#include "subject.h"

class Boss : public Subject
{
public:
	Boss(string ss);
	~Boss(void);
public:
	virtual void Attach(Observer* ob);
	virtual void Detach(Observer* ob);
	virtual void Notify();
private:
	vector<Observer*> obVec;
};

#endif