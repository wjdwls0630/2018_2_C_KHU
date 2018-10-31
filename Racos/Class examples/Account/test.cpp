#include "Account.h"
#include <iostream>
using namespace std;

int main()
{
	Account Woori1("Hong", 3, 30000);
	
	Woori1.PrintBalance();
	
	Woori1.AddMoney(3000);
	Woori1.PrintBalance();
	Woori1.AddMoney(5000);
	Woori1.PrintBalance();

	Woori1.MinMoney(10000);
	Woori1.PrintBalance();
	

	return 0;
}