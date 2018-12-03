#include <iostream>
class Complex {
private:
  double Re;
  double Im;
public:
  Complex (double r=0, double i=0);
  friend std::ostream & operator<<(std::ostream & os, const Complex & a);
  const Complex operator+(const Complex &a) const;
  const Complex operator+(const double &a) const;
  Complex & operator =(const Complex &a);
};
Complex::Complex (double r, double i):Re(r),Im(i){}
std::ostream & operator<<(std::ostream & os, const Complex & a){
  return os<<a.Re<<"+"<<a.Im<<"i"<<'\n';
}
const Complex Complex::operator+(const Complex &a) const{
  return Complex(this->Re+a.Re,this->Im+a.Im);
}
const Complex Complex::operator+(const double &a) const{
  return Complex(this->Re+a,this->Im);
}
Complex & Complex::operator =(const Complex &a){
  this->Re=a.Re;
  this->Im=a.Im;
  return *this;
}
int main() {
  double r, i;
  std::cin >> r>>i;
  Complex a= Complex(r,i);
  std::cin >> r>>i;
  Complex *b=new Complex(r,i);
  Complex c=a+*b+0.5;
  std::cout << c << '\n';
  delete b;

  return 0;
}
