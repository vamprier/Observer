#ifndef NBAOB_H
#define NBAOB_H

#endif

#include "observer.h"

class NBAObserver : public Observer
{
public:
	NBAObserver(string n,Subject* s);
	~NBAObserver(void);
public:
	virtual void Update();
};

