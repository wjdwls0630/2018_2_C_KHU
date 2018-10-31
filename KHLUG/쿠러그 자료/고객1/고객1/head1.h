#pragma once
#include <iostream>
using namespace std;


class Fraction {
private :
	int numerator;
	int denominator;
public :
	int getNumerator();
	int getDenominator();

	void setNumerator(int);
	void setDenominator(int);
};


int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::setNumerator(int num)
{
	numerator = num;
}

void Fraction::setDenominator(int denom)
{
	denominator = denom;
}