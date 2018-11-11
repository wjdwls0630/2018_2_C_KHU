#include <iostream>
#include <cmath>

//class Fraction declaration
class Fraction {
private:
  int numerator;
  int denominator;

public:
  /*
  Fraction();
  Fraction(int numerator);
  */
  Fraction(int numerator=0, int denominator=1);
  Fraction(const Fraction &fr);
  ~Fraction();
  void store(int numerator, int denominator);
  void print();
  int getNumerator();
  int getDenominator();
  void setNumerator(int numer);
  void setDenominator(int denom);
  void addTo(const Fraction &fr);
  void subtractTo(const Fraction &fr);
  void multiplyBy(const Fraction &fr);
  void divideBy(const Fraction &fr);
  void normalize();
  friend Fraction add(const Fraction &fr1, const Fraction &fr2);
  friend Fraction subtract(const Fraction &fr1, const Fraction &fr2);
  friend Fraction multiply(const Fraction &fr1, const Fraction &fr2);
  friend Fraction divide(const Fraction &fr1, const Fraction &fr2);
};

//function declaration
int gcd(int a, int b);
Fraction inputFraction();
Fraction add(const Fraction &fr1, const Fraction &fr2);

//Fraction Member function definition
/*
Fraction::Fraction(){
  std::cout << "Hello Fraction"<<'\n';
  this->numerator=0;
  this->denominator=1;
}
Fraction::Fraction(int numerator){
  std::cout << "Hello Fraction"<<'\n';
  this->numerator=numerator;
  this->denominator=1;
}*/
Fraction::Fraction(int numerator, int denominator){

  if (denominator==0) {
    std::cerr << "Zero Denominator error" << '\n';
    exit(100);
  }
  std::cout << "Hello Fraction"<<'\n';

  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }

  this->numerator=numerator;
  this->denominator=denominator;

}
Fraction::Fraction(const Fraction &fr){
  this->numerator=fr.numerator;
  this->denominator=fr.denominator;
}
Fraction::~Fraction(){
  std::cout << "Bye Fraction"<<'\n';
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
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }
}
void Fraction::subtractTo(const Fraction &fr) {
  numerator=(numerator*fr.denominator)-(fr.numerator*denominator);
  denominator=denominator*fr.denominator;
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }
}
void Fraction::multiplyBy(const Fraction &fr) {
  numerator=numerator*fr.numerator;
  denominator=denominator*fr.denominator;
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }
}
void Fraction::divideBy(const Fraction &fr) {
  numerator=numerator*fr.denominator;
  denominator=denominator*fr.numerator;
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }
}
void Fraction::normalize() {
  int gcd_num=gcd(numerator,denominator);
  numerator/=gcd_num;
  denominator/=gcd_num;
  if (numerator<0) {
    if (denominator<0) {
      numerator=abs(numerator);
      denominator=abs(denominator);
    }
  } else{
    if (denominator<0) {
      numerator=-abs(numerator);
      denominator=abs(denominator);
    }
  }
}

//function definition
int gcd(int a, int b) {
  a=abs(a);
  b=abs(b);
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

Fraction inputFraction(){
  int numerator,denominator;
  std::cout << "Numerator : ";
  std::cin >> numerator;
  std::cout << "Denominator : ";
  std::cin >> denominator;
  return Fraction(numerator,denominator);
}
Fraction add(const Fraction &fr1, const Fraction &fr2){
  int numerator = fr1.numerator*fr2.denominator+fr1.denominator*fr2.numerator;
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
}
Fraction subtract(const Fraction &fr1, const Fraction &fr2){
  int numerator=(fr1.numerator*fr2.denominator)-(fr1.numerator*fr2.denominator);
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
}
Fraction multiply(const Fraction &fr1, const Fraction &fr2){
  int numerator = fr1.numerator*fr2.numerator;
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
}
Fraction divide(const Fraction &fr1, const Fraction &fr2){
  int numerator = fr1.numerator*fr2.denominator;
  int denominator=fr1.denominator*fr2.numerator;
  return Fraction(numerator,denominator);
}
