#include "Beverage.h"
#include <iostream>
using namespace std;

Beverage::Beverage()
{
	name = new char[100];
	memset(name, 0, 100);
}

Beverage::Beverage(char* _na, int _co)
{
	name = new char[strlen(_na)+1];
	strcpy(name, _na);
	cost = _co;
}
void Beverage::SetName(char* _na)
{
	strcpy(name, _na);
}
void Beverage::SetCost(int _co)
{
	cost = _co;
}
char* Beverage::GetName()
{
	return name;
}
int Beverage::GetCost()
{
	return cost;
}

void Beverage::Print()
{
	cout << "음료수 이름 : "<< name <<endl;
	cout << "음료수 가격 : "<< cost <<endl;
}

Beverage::~Beverage()
{
	delete [] name;
}