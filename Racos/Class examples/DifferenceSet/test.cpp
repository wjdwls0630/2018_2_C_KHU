#include <iostream>
#include "DifferenceSet.h"
using namespace std;


int main()
{
	DifferenceSet ds1;
	// (1) ������Է��� ���� ������ �� �Է�
	ds1.InputOperands();
	ds1.CalcDiffSet();
	ds1.Print();
	cout <<'\n';
	// (2) �����ڸ� ���� ������ �� �Է�
	int x[5] ={1,2,3,4,5};
	int y[3] ={1,2,7};
	DifferenceSet ds2(x, y, 5, 3);
	ds2.CalcDiffSet();
	ds2.Print();
	cout <<'\n';
	// (3) Set Operand()�� ���� ������ �� �Է�
	DifferenceSet ds3;
	ds3.SetOperands(x, y, 5, 3);
	ds3.CalcDiffSet();
	ds3.Print();


	return 0;
}
