#include <iostream>
using namespace std;
#include "Account.h"

Account::Account()
{
}

Account::Account(char* _name, int _id, int _bal)
{
	name = new char[strlen(_name)+1];
	strcpy(name, _name);
	
	id = _id;
	balance = _bal;
}

Account::Account(const Account& acc)
{
	name = new char[strlen(acc.name)+1];
	strcpy(name, acc.name);
	id = acc.id;
	balance = acc.balance;

}

void Account::AddMoney(int n)
{
	balance += n;
}

void Account::MinMoney(int n)
{
	balance -= n;
}
void Account::PrintBalance()
{
	cout <<"°í°´´ÔÀÇ ÇöÀç ÀÜ¾×Àº "<<balance
		 <<"¿ø ÀÔ´Ï´Ù."<<endl;
}

Account::~Account()
{
	delete [] name;
}