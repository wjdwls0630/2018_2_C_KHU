#pragma once
#include <iostream>
using namespace std;



class Fraction
{
private :
	int nominator;
	int denominator;
public :
	Fraction(int a, int b);
	void operator+=(const Fraction & fr);
	void operator*=(const Fraction & fr);
	void operator-=(const Fraction & fr);
	void operator/=(const Fraction & fr);
	void print();
	int gcd(int a, int b);
};

Fraction::Fraction(int a, int b)
{
	nominator = a;
	denominator = b;
}

void Fraction::operator+=(const Fraction & fr)
{

	
	int nom = nominator * fr.denominator + fr.nominator * denominator;
	int denom = denominator * fr.denominator;

	nominator = nom;
	denominator = denom;

}

void Fraction::operator*=(const Fraction & fr)
{
	int nom = nominator * fr.nominator;
	int denom = denominator * fr.denominator;

	nominator = nom;
	denominator = denom;
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

void Fraction::operator-=(const Fraction & fr)
{
	int nom = nominator * fr.denominator - fr.nominator * denominator;
	int denom = denominator * fr.denominator;

	nominator = nom;
	denominator = denom;
}

void Fraction::operator/=(const Fraction & fr)
{
	int nom = nominator * fr.denominator;
	int denom = denominator * fr.nominator;

	nominator = nom;
	denominator = denom;
}