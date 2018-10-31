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
	void addTo(const Fraction & fr1);
	void subtractTo(const Fraction & fr1);
	void multiplyBy(const Fraction & fr1);
	void divideBy(const Fraction & fr1);
	void print();
};

Fraction::Fraction()
{
	cout << "Fraction class!" << endl;
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

void Fraction::addTo(const Fraction & fr1)
{
	int newnum = fr1.numerator * denominator + fr1.denominator * numerator;
	int newdenom = fr1.denominator * denominator;
	
	numerator = newnum;
	denominator = newdenom;
}

void Fraction::subtractTo(const Fraction & fr1)
{
	int newnum = numerator * fr1.denominator - denominator * fr1.numerator;
	int newdenom = fr1.denominator * denominator;
	numerator = newnum;
	denominator = newdenom;
}

void Fraction::multiplyBy(const Fraction & fr1)
{
	int newnum = fr1.numerator * numerator;
	int newdenom = fr1.denominator * denominator;
	numerator = newnum;
	denominator = newdenom;
}

void Fraction::divideBy(const Fraction & fr1)
{
	int newnum = numerator * fr1.denominator;
	int newdenom = denominator * fr1.numerator;
	numerator = newnum;
	denominator = newdenom;
}