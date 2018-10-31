#include "Beverage.h"
#include <iostream>
using namespace std;

int main()
{
	Beverage bev1("Pepsi", 600);
	Beverage bev2("Fanta", 500);

	bev1.Print();
	bev2.Print();
	
	return 0;
}