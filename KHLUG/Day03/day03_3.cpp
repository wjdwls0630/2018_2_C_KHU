#include <iostream>

int main(int argc, char const *argv[]) {
  int i = 0;
  while (i<10) {
    std::cout << i << '\n';
    i+=2;
  }
  std::cout << "끝" << '\n';
  return 0;
}
