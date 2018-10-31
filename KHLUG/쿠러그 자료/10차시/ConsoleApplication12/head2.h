#pragma once
#include <iostream>
using namespace std;


class Fraction
{
private:
	int nominator;
	int denominator;
public:
	Fraction(int a = 0, int b = 0);
	friend Fraction operator+(const Fraction & fr, const Fraction & fr1);
	friend Fraction operator*(const Fraction & fr, const Fraction & fr1);
	friend Fraction operator-(const Fraction & fr, const Fraction & fr1);
	friend Fraction operator/(const Fraction & fr, const Fraction & fr1);
	void print();
	int gcd(int a, int b);
};

Fraction::Fraction(int a, int b)
{
	nominator = a;
	denominator = b;
}

int Fraction::gcd(int a, int b)
{


	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void Fraction::print()
{


	int num = gcd(nominator, denominator);
	cout << nominator / num << "/" << denominator / num << endl;

}


Fraction operator+(const Fraction & fr1, const Fraction & fr2)
{
	int nom = fr1.nominator * fr2.denominator + fr2.nominator * fr1.denominator;
	int denom = fr1.denominator * fr2.denominator;

	return Fraction(nom, denom);
}

Fraction operator-(const Fraction & fr1, const Fraction & fr2)
{
	int nom = fr1.nominator * fr2.denominator - fr2.nominator * fr1.denominator;
	int denom = fr1.denominator * fr2.denominator;

	return Fraction(nom, denom);
}


Fraction operator*(const Fraction & fr1, const Fraction & fr2)
{
	int nom = fr1.nominator * fr2.nominator;
	int denom = fr1.denominator * fr2.denominator;

	return Fraction(nom, denom);
}

Fraction operator/(const Fraction & fr1, const Fraction & fr2)
{
	int nom = fr1.nominator * fr2.denominator;
	int denom = fr1.denominator * fr2.nominator;

	return Fraction(nom, denom);
}