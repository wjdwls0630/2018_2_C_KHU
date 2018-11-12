#include <iostream>
#include <cstdlib>

class Rational {
private:
  int numerator;
  int denominator;
  static int gcd(int m, int n){
    if (n==0) {
      return m;
    } else{
      return gcd(n,m%n);
    }
  }
  static int lcm(int m, int n){
    return (m*n)/gcd(m,n);
  }


public:
  Rational (const int & n=0, const int & d=1);
  void set_fraction(const int & n, const int & d);
  void fix_negative();
  int get_numerator() const;
  int get_denominator() const;
  Rational normalize() const;
  const Rational operator+(const Rational &fr) const;
  const Rational operator*(const Rational &fr) const;
  Rational & operator=(const Rational &fr);
  bool operator==(const Rational &fr) const;
  bool operator!=(const Rational &fr) const;
  friend std::ostream & operator<<(std::ostream &os, const Rational & fr);
};


Rational::Rational (const int & n, const int & d): numerator(n),denominator(d){
  if (d==0) {
    std::cout << "Zero dominator error" << '\n';
    std::cout << "set default denominator..." << '\n';
    denominator=1;
  }
  this->fix_negative();
}

void Rational::set_fraction(const int & n, const int & d) {
  numerator = n;
  if (d!=0) {
    denominator=d;
  }else{
    std::cout << "Zero dominator error" << '\n';
    std::cout << "set defatult denominator..." << '\n';
    denominator=1;
  }
  this->fix_negative();
}
void Rational::fix_negative() {
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

int Rational::get_numerator() const{
  return numerator;
}
int Rational::get_denominator() const{
  return denominator;
}
Rational Rational::normalize() const{
  int gcd_num=gcd(numerator,denominator);
  return Rational(numerator/gcd_num,denominator/gcd_num);
}
//임시 값을 반환해야한다. 객체 자체의 값이 변경되면 안되므로


const Rational Rational::operator+(const Rational &fr) const{
  Rational result;
  result.numerator=(numerator*fr.denominator)+(fr.numerator*denominator);
  result.denominator=denominator*fr.denominator;
  return result.normalize();
}
const Rational Rational::operator*(const Rational &fr) const{
  Rational result;
  result.numerator=numerator*fr.numerator;
  result.denominator=denominator*fr.denominator;
  return result.normalize();
}
Rational & Rational::operator=(const Rational &fr){
  this->numerator=fr.numerator;
  this->denominator=fr.denominator;
  return *this;
}
bool Rational::operator==(const Rational &fr) const{
  Rational f1 = this->normalize();
  Rational f2 = fr.normalize();
  return (f1.numerator==f2.numerator)&&(f1.denominator==f2.denominator);
}
bool Rational::operator!=(const Rational &fr) const{
  return !(*this==fr);
}
std::ostream & operator<<(std::ostream &os, const Rational & fr){
  return os<<fr.get_numerator()<<"/"<<fr.get_denominator();
}

int main() {
  Rational f1(-1,-2),f2(2,-3);
  std::cout << f1+f2 << '\n';
  std::cout << f1*f2 << '\n';
  std::cout << f1 << '\n';
  std::cout << f2 << '\n';
  if (f1==f2) {
    std::cout << "true" << '\n';
  } else{
    std::cout << "false" << '\n';
  }


  return 0;
}
