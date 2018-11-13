#include <iostream>
#include "day10_1.h"

const int size=3;

int main() {
  Fraction fr1(6,8);
  std::cout << "Fraction fr1 = 6/8" << '\n';
  std::cout << fr1++ << '\n';

  std::cout << fr1 << '\n';
  Fraction fr2(3,4);
  std::cout << float(fr2) << '\n';

  Fraction fr3;
  int k=4;
  Fraction fr4=(Fraction)k;
  std::cout << fr4 << '\n';
  std::cout<<"The number of Fraction is : "<<Fraction::getCountFraction()<<'\n';

  Fraction *pfr1 = new Fraction(5,10);
  std::cout<<"The number of Fraction is : "<<Fraction::getCountFraction()<<'\n';
  Fraction fr_list[size];
  Fraction fr_elem;
  int n , d;

  for (int i = 0; i < size; i++) {
    std::cin >> n>>d;
    fr_list[i].setFraction(n, d);
  }
  std::cout<<"The number of Fraction is : "<<Fraction::getCountFraction()<<'\n';





  std::cout<<"The number of Fraction is : "<<Fraction::getCountFraction()<<'\n';
  delete pfr1;
  std::cout<<"The number of Fraction is : "<<Fraction::getCountFraction()<<'\n';





  return 0;
}
