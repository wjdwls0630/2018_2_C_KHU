#include "head4.h"


int main()
{
	Fraction fr1(10, 20);
	Fraction fr2(30, -50);
	fr1.addTo(fr2);
	fr1.print();

	Fraction fr3(10, 20);
	fr3.subtractTo(fr2);
	fr3.print();

	Fraction fr4(10, 20);
	fr4.multiplyBy(fr2);
	fr4.print();

	Fraction fr5(10, 20);
	fr5.divideBy(fr2);
	fr5.print();
	return 0;
}