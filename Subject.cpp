#include "Subject.h"


Subject::Subject(string ss):action(ss)
{
}


Subject::~Subject(void)
{
}

string Subject::subjectState()
{
	return action;
}