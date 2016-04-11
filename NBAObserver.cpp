#include "NBAObserver.h"


NBAObserver::NBAObserver(string n,Subject* s):Observer(n,s)
{
}


NBAObserver::~NBAObserver(void)
{
}

void NBAObserver::Update()
{
	cout<<sub->subjectState()<<", "<<name<<" close NBA, go on work "<<endl;
}
