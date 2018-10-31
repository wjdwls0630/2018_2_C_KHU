#include <iostream>
#include "Zergling.h"
using namespace std;

int main()
{
	Zergling Zer1("Zer1", 100, 15, 5, 1, 1);
	Zergling Zer2("Zer2", 100, 15, 5, 1, 1);
	Zergling Zer3("Zer3", 100, 15, 5, 1, 1);

	Zer1.Move(3,3);
	Zer2.Move(3,1);
	Zer3.Move(1,3);
	cout << "------------------------------"<<endl;

	Zer1.Attack(Zer2);
	cout << "------------------------------"<<endl;
	Zer3.Patrol();
	cout << "------------------------------"<<endl;

	return 0;
}