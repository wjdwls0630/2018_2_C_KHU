#pragma once
#include <iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;
public:
	int getNumerator();
	int getDenominator();

	void setNumerator(int);
	void setDenominator(int);
	int normalize(int num, int denum);
};


int Fraction::getNumerator()
{
	return numerator / normalize(abs(numerator), abs(denominator));
}

int Fraction::getDenominator()
{
	return denominator / normalize(abs(numerator), abs(denominator));
}

void Fraction::setNumerator(int num)
{
	numerator = num;
}

void Fraction::setDenominator(int denom)
{
	denominator = denom;
}

int Fraction::normalize(int num, int denom)
{
	if (denom == 0)
		return num;
	return normalize(denom, num % denom);
}