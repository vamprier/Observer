#ifndef STOCKOB_H
#define STOCKOB_H


#include "observer.h"

class StockObserver : public Observer
{
public:
	StockObserver(string n,Subject* s);
	~StockObserver(void);
public:
	virtual void Update();
};

#endif