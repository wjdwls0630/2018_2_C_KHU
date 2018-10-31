#include <iostream>
using namespace std;

int gcd(int p, int q) {
	if (q == 0) return p;
	return gcd(q, p % q);
}

class Fraction {
private:
	int numerator;
	int denominator;

public:
	void store(int, int);
	void print();

	void normalize();

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

void Fraction::normalize() {
	int g = gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;
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
	Fraction fr;
	fr.store(6, 8);

	cout << "원본: ";
	fr.print();
	cout << endl;

	fr.normalize();

	cout << "기약분수: ";
	fr.print();
	cout << endl;

	return 0;
}