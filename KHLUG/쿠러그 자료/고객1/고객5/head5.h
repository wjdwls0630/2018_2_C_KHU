#pragma once
#include <iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int num, int denom);
	int normalize(int num, int denom);
	friend Fraction addTo(const Fraction & fr1, const Fraction & fr2);
	friend Fraction subtractTo(const Fraction & fr1, const Fraction & fr2);
	friend Fraction multiplyBy(const Fraction & fr1, const Fraction & fr2);
	friend Fraction divideBy(const Fraction & fr1, const Fraction & fr2);
	void print();
};

Fraction::Fraction()
{
	cout << "Fraction class!!" << endl;
}

Fraction::Fraction(int num, int denom)
{
	if (denom == 0)
	{
		cout << "there is an error in denom" << endl;
		exit(100);
	}

	numerator = num;
	denominator = denom;
}

int Fraction::normalize(int num, int denom)
{
	if (denom == 0)
		return num;
	return normalize(denom, num % denom);
}


void Fraction::print()
{
	int divide = normalize(abs(numerator), abs(denominator));

	numerator /= divide;
	denominator /= divide;


	if (numerator * denominator >= 0)
		cout << abs(numerator) << " / " << abs(denominator) << endl;
	else
		cout << " - " << abs(numerator) << " / " << abs(denominator) << endl;

}

Fraction addTo(const Fraction & fr1, const Fraction & fr2)
{
	int newnum = fr1.numerator * fr2.denominator + fr1.denominator * fr2.numerator;
	int newdenom = fr1.denominator * fr2.denominator;

	return Fraction(newnum, newdenom);

}

Fraction subtractTo(const Fraction & fr1, const Fraction & fr2)
{
	int newnum = fr1.numerator * fr2.denominator - fr1.denominator * fr2.numerator;
	int newdenom = fr1.denominator * fr2.denominator;
	return Fraction(newnum, newdenom);
}

Fraction multiplyBy(const Fraction & fr1, const Fraction & fr2)
{
	int newnum = fr1.numerator * fr2.numerator;
	int newdenom = fr1.denominator * fr2.denominator;
	return Fraction(newnum, newdenom);
}

Fraction divideBy(const Fraction & fr1, const Fraction & fr2)
{
	int newnum = fr1.numerator * fr2.denominator;
	int newdenom = fr1.denominator * fr2.numerator;
	return Fraction(newnum, newdenom);
}