#include <iostream>
using namespace std;

double CelToFah(double cel);
double FahToCel(double fah);

int main() {
	double input;

	cout << "���� �µ� �Է�: ";
	cin >> input;
	cout << "ȭ�� �µ� ��ȯ: " << CelToFah(input) << "'F" << endl << endl;

	cout << "ȭ�� �µ� �Է�: ";
	cin >> input;
	cout << "���� �µ� ��ȯ: " << FahToCel(input) << "'C" << endl << endl;


	return 0;
}

double CelToFah(double cel) {
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}