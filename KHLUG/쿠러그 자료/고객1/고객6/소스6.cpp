#include "head6.h"


int main()
{

	Laptop la1;
	la1.setOsName("Samsung");
	la1.setDisplayWidth(20);
	la1.setMemorySize(30);
	la1.print();
	cout << endl;

	Laptop la2("Apple", 30, 50);
	la2.print();
	cout << endl;
	return 0;
}