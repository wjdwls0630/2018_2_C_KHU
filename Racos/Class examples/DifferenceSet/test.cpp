#include <iostream>
#include "DifferenceSet.h"
using namespace std;


int main()
{
	DifferenceSet ds1;
	// (1) 사용자입력을 통해 집합의 값 입력
	ds1.InputOperands();
	ds1.CalcDiffSet();
	ds1.Print();
	cout <<'\n';
	// (2) 생성자를 통해 집합의 값 입력
	int x[5] ={1,2,3,4,5};
	int y[3] ={1,2,7};
	DifferenceSet ds2(x, y, 5, 3);
	ds2.CalcDiffSet();
	ds2.Print();
	cout <<'\n';
	// (3) Set Operand()를 통한 집합의 값 입력
	DifferenceSet ds3;
	ds3.SetOperands(x, y, 5, 3);
	ds3.CalcDiffSet();
	ds3.Print();


	return 0;
}
