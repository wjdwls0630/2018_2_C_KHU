#include <iostream>

#define Square_define(x) x*x


inline int Square_inline(int x)
{
    return x*x;
}

int main(void) {
  int integer = 3;
  double dbl = 3.15;
  std::cout << "Square_define" << '\n';
  std::cout << Square_define(integer) << '\n';
  std::cout << Square_define(dbl) << '\n';
  std::cout << Square_define(integer+3) << '\n';
  std::cout << "Square_inline" << '\n';
  std::cout << Square_inline(integer) << '\n';
  std::cout << Square_inline(dbl) << '\n';
  std::cout << Square_inline(integer+3) << '\n';
  return 0;
}
