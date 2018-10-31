#pragma once
#include "VendingMachine.h"
#include <iostream>
using namespace std;

int main()
{
	VendingMachine vm1;
	// 음료수 등록
	vm1.SetBeverage("Pepsi", 600);
	vm1.SetBeverage("Fanta", 500);
	vm1.SetBeverage("Lemonaid", 1000);
	vm1.SetBeverage("Vitamin", 500);
	// 판매액 출력
	vm1.Print();
	vm1.Sell("Vitamin", 2);
	vm1.Sell("Fanta", 3);

	vm1.Print();

	return 0;
}
