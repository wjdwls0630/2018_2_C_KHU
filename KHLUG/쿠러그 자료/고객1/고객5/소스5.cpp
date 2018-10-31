#include "head5.h"


int main()
{
	cout << "friend함수 사용하기 " << endl;
	Fraction fr1(10, 20);
	Fraction fr2(30, 50);
	Fraction fr3 = addTo(fr1, fr2);
	fr3.print();

	Fraction fr4 = subtractTo(fr1, fr2);
	fr4.print();

	Fraction fr5 = multiplyBy(fr1, fr2);
	fr5.print();

	Fraction fr6 = divideBy(fr1, fr2);
	fr6.print();
	return 0;


}