#include <iostream>
using namespace std;

void divide(int divnd, int divsr, int &quot, int &rem);

int main() {
	int num1;
	int num2;

	cout << "피제수: ";
	cin >> num1;
	cout << "제수  : ";
	cin >> num2;

	int q;
	int r;

	divide(num1, num2, q, r);

	cout << "몫    : " << q << endl;
	cout << "나머지: " << r << endl;

	return 0;
}

void divide(int divnd, int divsr, int &quot, int &rem) {
	quot = divnd / divsr;
	rem = divnd % divsr;
	return;
}