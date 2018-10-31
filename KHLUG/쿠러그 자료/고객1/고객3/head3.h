#pragma once
#include <iostream>
using namespace std;


class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction(int num, int denom);
	int normalize(int num, int denom);
	void print();
};

Fraction::Fraction(int num, int denom)
{
	if (denom == 0)
	{
		cerr << "there is an error in denom" << endl;
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