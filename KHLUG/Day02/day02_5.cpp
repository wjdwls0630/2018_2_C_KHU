#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  switch (n) {
    case 3: std::cout << "셋, " << '\n';
    case 2: std::cout << "둘, " << '\n';
    case 1: std::cout << "하나, " << '\n';
    default : std::cout << "Go!" << '\n';

  }
  char k;
  std::cin >> k;
  switch (k) {
    case 'a':
    std::cout << "딸" << '\n';
    case 'b':
    std::cout << "기" << '\n';
    break;
    case 'c' :
    std::cout << "주" << '\n';
    case 'd':
    std::cout << "스" << '\n';
  }
  return 0;
}
