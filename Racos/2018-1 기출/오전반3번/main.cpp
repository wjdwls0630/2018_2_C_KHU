#include "PureBase.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissor.h"
int PureBase::objcount = 0;
void initialize_die()
{
	srand((unsigned int)time(NULL));
}
int roll()
{
	return rand() % 3;
}
int main()
{
	PureBase* pObject;
	initialize_die();
	int choice;
	while (true)
	{
		choice = roll();
		switch (choice)
		{
		case 0:
			pObject = new Scissor();
			pObject->shoot();
			break;
		case 1:
			pObject = new Rock();
			pObject->shoot();
			break;
		default:
			pObject = new Paper();
			pObject->shoot();
			break;
		}
		if (pObject->getObjectCount() == 10)
			return 0;
		else
			delete pObject;
	}
	return 0;
}