#include <iostream>

int main() {
  int input, sum=0;
  std::cout << "Enter numbers to sum, negative number ends list:";
  while (true) {
    std::cin >> input;
    if (input<0) {
      break;
    }
    sum+=input;
  }
  std::cout << "sum = " << sum<<'\n';

  return 0;
}
