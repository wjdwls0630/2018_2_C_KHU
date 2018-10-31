
#pragma once
#include "Beverage.h"

class VendingMachine
{
	int numBeverage;
	Beverage *bev;
	int balance;
public:
	VendingMachine();
	VendingMachine(int _num);
	void SetBeverage(char* name, int cost);
	void Sell(char *name, int num);
	void Print();
};