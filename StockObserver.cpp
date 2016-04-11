#include "StockObserver.h"


StockObserver::StockObserver(string n,Subject* s):Observer(n,s)
{
}


StockObserver::~StockObserver(void)
{
}

void StockObserver::Update()
{
	cout<<sub->subjectState()<<", "<<name<<" close Stock, go on work "<<endl;
}
