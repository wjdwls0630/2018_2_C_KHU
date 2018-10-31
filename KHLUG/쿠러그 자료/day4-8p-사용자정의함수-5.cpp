#include <iostream>
using namespace std;

double CelToFah(double cel);
double FahToCel(double fah);

int main() {
	double input;

	cout << "¼·¾¾ ¿Âµµ ÀÔ·Â: ";
	cin >> input;
	cout << "È­¾¾ ¿Âµµ º¯È¯: " << CelToFah(input) << "'F" << endl << endl;

	cout << "È­¾¾ ¿Âµµ ÀÔ·Â: ";
	cin >> input;
	cout << "¼·¾¾ ¿Âµµ º¯È¯: " << FahToCel(input) << "'C" << endl << endl;


	return 0;
}

double CelToFah(double cel) {
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}