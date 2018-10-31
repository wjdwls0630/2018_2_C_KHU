#include <iostream>

int main() {
  int input, sum=0;
  std::cout << "Enter numbers to sum, negative number ends list:";
  while (true) {
    std::cin >> input;
    if (input<0) {
      continue
    }
    sum+=input;
  }
  std::cout << "sum = " << sum<<'\n';

  return 0;
}

//무한 루프가 된다.
