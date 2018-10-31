#include "head1.h"
using namespace std;



int main()
{
	Fraction fr1(2, 3);
	Fraction fr2(2, 3);
	Fraction fr3(2, 3);
	Fraction fr4(2, 3);

	Fraction frR(1, 2);

	fr1 += frR;
	fr1.print();
	fr2 -= frR;
	fr2.print();
	fr3 *= frR;
	fr3.print();
	fr4 /= frR;
	fr4.print();

}