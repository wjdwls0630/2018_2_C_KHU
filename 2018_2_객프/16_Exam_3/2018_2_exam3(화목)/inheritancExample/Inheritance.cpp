#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <vector>
#include "inheritance.h"
using namespace std; 

int main() {
	fDerived fDrive(999.99);
	iDerived iDrive(1111);
	sDerived sDrive("string test");
	fDrive.DisplayKey();
	iDrive.DisplayKey();
	sDrive.DisplayKey();

	cout << "\n\n\n �ٸ� Ÿ���� �ڷḦ �����ϴ� ���� test\n";
	Application mVal;
	mVal.AddItem();
	mVal.AddItem();
	mVal.AddItem();
	mVal.DisplayAll();

	system("pause");
}
