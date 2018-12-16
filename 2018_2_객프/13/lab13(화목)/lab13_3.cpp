#include <iostream>
#include <vector>
#include <iomanip>
#include "lab13_3a.hpp"


int main() {
  int size;
  std::cout << "홀수 숫자를 하나 입력해주세요  : ";
  std::cin >> size;
  Matrix<int> table(size,std::vector<int>(size));
  MagicSquare<int>ms(table);
  ms.print_table();
  ms.print_sum();
  return 0;
}
