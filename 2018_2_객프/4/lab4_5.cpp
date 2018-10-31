#include <iostream>

int main() {
  int line,number=1 ;
  std::cout << "몇줄? " ;
  std::cin >> line;

  while (line>0) {
    number=1;
    while (number<=line) {
      std::cout << number << ' ';
      number++;
    }
    line--;
    std::cout << '\n';

  }

  return 0;
}
