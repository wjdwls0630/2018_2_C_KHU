#include <iostream>
#include <cstdlib>

class SimpleRational {
private:
  int numerator;
  int denominator;

public:
  SimpleRational (const int & n, const int & d){
    if (d==0) {
      std::cout << "Zero dominator error" << '\n';
      exit(1);
    }
    numerator=n;
    denominator=d;
  }
  SimpleRational(){
    numerator=0;
    denominator=1;
  }
  void set_numerator(const int & n) {
    numerator = n;
  }
  void set_denominator(const int & d) {
    if (d!=0) {
      denominator=d;
    }else{
      std::cout << "Zero dominator error" << '\n';
      exit(1);
    }
  }
  int get_numerator() {
    return numerator;
  }
  int get_denominator() {
    return denominator;
  }
};


SimpleRational multiply(SimpleRational &f1,SimpleRational &f2) {
  SimpleRational result(f1.get_numerator()*f2.get_numerator(),f1.get_denominator()*f2.get_denominator());
  return result;
}
void print_fraction(SimpleRational &f) {
  std::cout << f.get_numerator() <<"/"<<f.get_denominator();
}

int main() {
  SimpleRational fract(1, 2);
  std::cout << "The fraction is " ;
  print_fraction(fract);
  std::cout  << '\n';
  fract.set_numerator(19);
  fract.set_denominator(4);
  std::cout << "The fraction now is " ;
  print_fraction(fract);
  std::cout  << '\n';


  SimpleRational fract1(1,2), fract2(2,3);
  SimpleRational prod=multiply(fract1, fract2);
  std::cout << "The product of " ;
  print_fraction(fract1);
  std::cout << " and ";
  print_fraction(fract2);
  std::cout << " is " ;
  print_fraction(prod);


  return 0;
}
