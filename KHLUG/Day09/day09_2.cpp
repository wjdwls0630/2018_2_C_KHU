#include <iostream>
#include "day09_1.h"

int main() {
  Fraction fr1(4,5),fr2(19),fr3,fr4(fr1),fr5;
  Fraction *pfr1 = new Fraction();
  fr5=inputFraction();
  fr1.print();
  std::cout  << '\n';
  fr2.print();
  std::cout  << '\n';
  fr3.print();
  std::cout  << '\n';
  fr4.print();
  std::cout  << '\n';
  fr5.print();
  std::cout  << '\n';
  delete pfr1;
  return 0;
}
