#include "head1.h"


int main()
{
	int a, b;
	cout << "�� ���� �Է� : ";
	cin >> a >> b;

	Fraction fr1;
	fr1.setNumerator(a);
	fr1.setDenominator(b);

	cout << fr1.getNumerator() << " / " << fr1.getDenominator() << endl;
	return 0;
}