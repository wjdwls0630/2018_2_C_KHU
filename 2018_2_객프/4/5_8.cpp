#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << 1 << '\n';
  std::cout << 2 << '\n';
  std::cout << 3 << '\n';
  std::cout << 4 << '\n';
  std::cout << 5 << '\n';
  std::cout  << '\n';
  int count =1; //Initallize Counter
  while (count<=5) {
    std::cout << count << '\n';
    count++;
  }

  return 0;
}
