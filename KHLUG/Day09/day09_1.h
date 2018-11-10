#include <iostream>

//class Fraction declaration
class Fraction {
private:
  int numerator;
  int denominator;

public:
  Fraction(int numerator, int denominator);
  void store(int numerator, int denominator);
  void print();
  int getNumerator();
  int getDenominator();
  void setNumerator(int numer);
  void setDenominator(int denom);
  void addTo(const Fraction &fr);
  void normalize();
};

//function declaration
int gcd(int a, int b);

//Fraction Member function definition

Fraction::Fraction(int numerator=0, int denominator=1){
  std::cout << "Hello Fraction"<<'\n';
  this->numerator=numerator;
  this->denominator=denominator;

}
void Fraction::store(int numerator, int denominator) {
  this->numerator=numerator;
  this->denominator=denominator;
}

void Fraction::print() {
  std::cout << numerator <<"/"<<denominator;
}
int Fraction::getNumerator() {
  return numerator;
}
int Fraction::getDenominator() {
  return denominator;
}
void Fraction::setNumerator(int numer) {
  numerator=numer;
}
void Fraction::setDenominator(int denom) {
  denominator=denom;
}
void Fraction::addTo(const Fraction &fr) {
  numerator=(numerator*fr.denominator)+(fr.numerator*denominator);
  denominator=denominator*fr.denominator;
}
void Fraction::normalize() {
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
}

//function definition
int gcd(int a, int b) {
  while (1) {
    if (a>b) {
      if (a%b==0) {
        return b;
      } else {
        a=a%b;
      }
    } else{
      if (b%a==0) {
        return a;
      } else {
        b=b%a;
      }
    }
  }
}
