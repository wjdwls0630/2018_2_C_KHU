#include <iostream>
#include "day09_1.h"

int main() {
  Fraction fr1(4,5),fr2(4);
  fr1.multiplyBy(fr2);
  fr1.print();
  std::cout  << '\n';
  fr2.print();
  std::cout  << '\n';
  Fraction fr3=add(fr1,fr2);
  fr3.print();
  std::cout  << '\n';
  Fraction fr4=multiply(fr1, fr2);
  fr4.print();
  std::cout  << '\n';

  return 0;
}
