#include <iostream>
using namespace std;

void divide(int divnd, int divsr, int &quot, int &rem);

int main() {
	int num1;
	int num2;

	cout << "������: ";
	cin >> num1;
	cout << "����  : ";
	cin >> num2;

	int q;
	int r;

	divide(num1, num2, q, r);

	cout << "��    : " << q << endl;
	cout << "������: " << r << endl;

	return 0;
}

void divide(int divnd, int divsr, int &quot, int &rem) {
	quot = divnd / divsr;
	rem = divnd % divsr;
	return;
}