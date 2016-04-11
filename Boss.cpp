#include "Boss.h"


Boss::Boss(string ss):Subject(ss)
{
}


Boss::~Boss(void)
{
}

void Boss::Attach(Observer* ob)
{
	obVec.push_back(ob);
}

void Boss::Detach(Observer* ob)
{
	vector<Observer*>::iterator it;
	it = find(obVec.begin(),obVec.end(),ob);
	if( it != obVec.end())
	{
		it = obVec.erase(it);
	}
}

void Boss::Notify()
{
	vector<Observer*>::iterator it = obVec.begin();
	for ( ; it != obVec.end();++it)
	{
		(*it)->Update();
	}
}