#include <iostream>
#include <cmath>

//class Fraction declaration
class Fraction {
private:
  int numerator;
  int denominator;
  static int gcd(int m, int n){
    if (n==0) {
      return m;
    } else{
      return gcd(n,m%n);
    }
    /*
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
    */
  }
  static int lcm(int m, int n){
    return (m*n)/gcd(m,n);
  }
  static int countFraction;
public:
  /*
  Fraction();
  Fraction(int numerator);
  */
  explicit Fraction(int numerator=0, int denominator=1);
  Fraction(const Fraction &fr);
  operator float() const;
  ~Fraction();
  void fixNegative();
  friend std::ostream & operator<<(std::ostream & os, const Fraction & fr);
  int getNumerator() const;
  int getDenominator() const;
  void setNumerator(const int &numerator=0);
  void setDenominator(const int &denominator=1);
  void setFraction(const int & numerator=0, const int & denominator=1);
  static int getCountFraction();
  Fraction normalize() const;
  Fraction & operator+=(const Fraction &fr);
  Fraction & operator-=(const Fraction &fr);
  Fraction & operator*=(const Fraction &fr);
  Fraction & operator/=(const Fraction &fr);
  const Fraction operator+(const Fraction &fr) const;
  const Fraction operator-(const Fraction &fr) const;
  const Fraction operator*(const Fraction &fr) const;
  const Fraction operator/(const Fraction &fr) const;
  Fraction & operator =(const Fraction &fr);
  bool operator == (const Fraction & fr) const;
  bool operator!=(const Fraction &fr) const;
  Fraction & operator++();
  const Fraction operator++(int);
};

//Initiallize Static member data;
int Fraction::countFraction=0;

//function declaration
Fraction inputFraction();


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
    std::cout << "set default denominator..." << '\n';
    denominator=1;
  }
  std::cout << "Hello Fraction"<<'\n';
  this->numerator=numerator;
  this->denominator=denominator;
  this->fixNegative();
  countFraction++;
}
Fraction::Fraction(const Fraction &fr){
  std::cout << "Hello Fraction"<<'\n';
  this->numerator=fr.numerator;
  this->denominator=fr.denominator;
  countFraction++;
}
Fraction::operator float() const{
  return (float)numerator/denominator;
}
Fraction::~Fraction(){
  std::cout << "Bye Fraction"<<'\n';
  countFraction--;
}
void Fraction::fixNegative() {
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
std::ostream & operator<<(std::ostream & os, const Fraction & fr) {
  return os<<fr.numerator<<"/"<<fr.denominator;
}
int Fraction::getNumerator() const{
  return numerator;
}
int Fraction::getDenominator() const{
  return denominator;
}
void Fraction::setNumerator(const int &numerator){
  this->numerator=numerator;
  this->fixNegative();
}
void Fraction::setDenominator(const int &denominator){
  if (denominator!=0) {
    this->denominator=denominator;
  }else{
    std::cout << "Zero dominator error" << '\n';
    std::cout << "set defatult denominator..." << '\n';
    this->denominator=1;
  }
  this->fixNegative();
}
void Fraction::setFraction(const int & numerator, const int & denominator) {
  this->numerator = numerator;
  if (denominator!=0) {
    this->denominator=denominator;
  }else{
    std::cout << "Zero dominator error" << '\n';
    std::cout << "set defatult denominator..." << '\n';
    this->denominator=1;
  }
  this->fixNegative();
}
int Fraction::getCountFraction() {
  return countFraction;
}
Fraction Fraction::normalize() const{
  int new_numerator;
  int new_denominator;
  int gcd_num=gcd(numerator,denominator);
  new_numerator=numerator/gcd_num;
  new_denominator=denominator/gcd_num;
  if (new_numerator<0) {
    if (new_denominator<0) {
      new_numerator=abs(new_numerator);
      new_denominator=abs(new_denominator);
    }
  } else{
    if (new_denominator<0) {
      new_numerator=-abs(new_numerator);
      new_denominator=abs(new_denominator);
    }
  }
  return Fraction(new_numerator,new_denominator);
  //임시 값을 반환해야한다. 객체 자체의 값이 변경되면 안되므로
}

Fraction & Fraction::operator+=(const Fraction &fr) {
  numerator=(numerator*fr.denominator)+(fr.numerator*denominator);
  denominator=denominator*fr.denominator;
  return *this;
}
Fraction & Fraction::operator-=(const Fraction &fr) {
  numerator=(numerator*fr.denominator)-(fr.numerator*denominator);
  denominator=denominator*fr.denominator;
  return *this;
}
Fraction & Fraction::operator*=(const Fraction &fr) {
  numerator=numerator*fr.numerator;
  denominator=denominator*fr.denominator;
  return *this;
}
Fraction & Fraction::operator/=(const Fraction &fr) {
  numerator=numerator*fr.denominator;
  denominator=denominator*fr.numerator;
  return *this;
}

const Fraction Fraction::operator+(const Fraction &fr) const{
  /*
  int numerator = fr1.numerator*fr2.denominator+fr1.denominator*fr2.numerator;
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
  */
  return Fraction(*this)+=fr;
}
const Fraction Fraction::operator-(const Fraction &fr) const{
  /*
  int numerator=(fr1.numerator*fr2.denominator)-(fr1.numerator*fr2.denominator);
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
  */
  return Fraction(*this)-=fr;
}
const Fraction Fraction::operator*(const Fraction &fr) const{
  /*
  int numerator = fr1.numerator*fr2.numerator;
  int denominator=fr1.denominator*fr2.denominator;
  return Fraction(numerator,denominator);
  */
  return Fraction(*this)*=fr;
}
const Fraction Fraction::operator/(const Fraction &fr) const{
  /*
  int numerator = fr1.numerator*fr2.denominator;
  int denominator=fr1.denominator*fr2.numerator;
  return Fraction(numerator,denominator);
  */
  return Fraction(*this)/=fr;
}
Fraction & Fraction::operator =(const Fraction &fr){
  this->numerator=fr.numerator;
  this->denominator=fr.denominator;
  return *this;
}
bool Fraction::operator == (const Fraction & fr) const{
  Fraction f1 = this->normalize();
  Fraction f2 = fr.normalize();
  return (f1.numerator==f2.numerator)&&(f1.denominator==f2.denominator);
}
bool Fraction::operator!=(const Fraction &fr) const{
  return !(*this==fr);
}
Fraction & Fraction::operator++(){
  this->numerator+=this->denominator;
  return *this;
}
const Fraction Fraction::operator++(int){
  const Fraction temp(*this);
  this->numerator+=this->denominator;
  return temp;
}


//function definition


Fraction inputFraction(){
  int numerator,denominator;
  std::cout << "Numerator : ";
  std::cin >> numerator;
  std::cout << "Denominator : ";
  std::cin >> denominator;
  return Fraction(numerator,denominator);
}
