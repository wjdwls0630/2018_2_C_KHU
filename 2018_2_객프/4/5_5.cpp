#include <iostream>

int main() {
  int value;
  std::cout << "Please enter an integer value in the range 0...10 : " << '\n';
  std::cin >> value;
  if (value>=0&&value<=10) {
    std::cout << "In range" << '\n';
  }
  return 0;
}
