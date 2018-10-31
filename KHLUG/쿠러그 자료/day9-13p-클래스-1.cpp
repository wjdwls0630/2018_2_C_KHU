#include <iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;

public:
	void store(int, int);
	void print();

	// Getter
	int getNumerator();
	int getDenominator();

	// Setter
	void setNumerator(int);
	void setDenominator(int);
};

void Fraction::store(int numer, int denom) {
	numerator = numer;
	denominator = denom;
	return;
}

void Fraction::print() {
	cout << numerator << "/" << denominator;
	return;
}

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
	int n, d;
	cout << "분자: ";
	cin >> n;
	cout << "분모: ";
	cin >> d;

	Fraction fr;
	fr.store(n, d);
	fr.print();

	cout << endl;

	/*
	fr.setNumerator(n);
	fr.setDenominator(d);
	
	cout << fr.getNumerator() << "/" << fr.getDenominator() << endl;
	*/

	return 0;
}