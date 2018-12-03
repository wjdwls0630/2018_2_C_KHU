#include <iostream>

int main() {
  int num1,num2;
  do {
    std::cin >> num1>>num2;
  } while(num1!=num2);
  std::cout << "num1 == num2" << '\n';
  return 0;
}
