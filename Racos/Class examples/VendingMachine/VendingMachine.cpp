#pragma once
#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine()
{
	bev = new Beverage[10];
	balance = 0;
	numBeverage = 0;
}

void VendingMachine::SetBeverage(char* name, int cost)
{
	bev[numBeverage].SetName(name);
	bev[numBeverage].SetCost(cost);
	numBeverage++;
}

void VendingMachine::Sell(char *name, int num)
{
	int idx=0;
	for(int i=0; i<numBeverage; i++)
	{
		if(strcmp(bev[i].GetName(), name) == 0)
		{
			idx = i;
			break;
		}
	}
	balance += (bev[idx].GetCost())*num;
}

void VendingMachine::Print()
{
	cout << "���� �Ǹ� ����� ���� : "<<endl;
	for(int i=0; i<numBeverage; i++)
	{
		cout << "(" << i <<")"<< "�� �� :" << bev[i].GetName()<<", �� �� :" << bev[i].GetCost()<<endl;
	}
	cout << "\n----------------------------------"<<endl;
	cout << "�� �Ǹž� : " << balance <<endl;
	cout << "----------------------------------"<<endl;
}