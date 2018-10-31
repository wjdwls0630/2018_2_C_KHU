#include "head2.h"
using namespace std;



int main()
{
	Fraction fr1(2, 3);
	Fraction fr2(1, 2);
	
	Fraction fr3 = fr1 + fr2;
	fr3.print();
	Fraction fr4 = fr1 - fr2;
	fr4.print();
	Fraction fr5 = fr1 * fr2;
	fr5.print();
	Fraction fr6 = fr1 / fr2;
	fr6.print();
}