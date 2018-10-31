#include <iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;

public:
	// Getter
	int getNumerator();
	int getDenominator();

	// Setter
	void setNumerator(int);
	void setDenominator(int);
};

int Fraction::getNumerator() {
	return numerator;
}

int Fraction::getDenominator() {
	return denominator;
}

void Fraction::setNumerator(int numer) {
	numerator = numer;
}

void Fraction::setDenominator(int denom) {
	denominator = denom;
}


int main() {
	Fraction fr;
	fr.setNumerator(4);
	fr.setDenominator(5);
	
	cout << fr.getNumerator() << "/" << fr.getDenominator() << endl;

	return 0;
}