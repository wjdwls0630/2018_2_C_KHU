#include <iostream>
#include "fraction.hpp"
#include "func.hpp"

int main() {
  fraction fr1(3,4);
  fraction fr2(1,2);
  fraction fr3;
  std::cout << max(fr1, fr2) << '\n';
  std::cout << summation(fr1, fr2) << '\n';
  std::cout << multiply(fr1, fr2) << '\n';
  fr3=fr1+fr2;
  std::cout << fr3 << '\n';
  fr3=fr1*fr2;
  std::cout << fr3 << '\n';


  return 0;
}
