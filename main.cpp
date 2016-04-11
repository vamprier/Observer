// Observer.cpp : 定义控制台应用程序的入口点。
//

#include "Boss.h"
#include "StockObserver.h"
#include "NBAObserver.h"

int main(int argc, char* argv[])
{
	Boss* b = new Boss("胡汉三回来了");
	StockObserver* so = new StockObserver("张博",b);
	NBAObserver* no = new NBAObserver("赵书淇",b);

	b->Attach(so);
	b->Attach(no);

	b->Notify();

	cin.ignore();

	return 0;
}

