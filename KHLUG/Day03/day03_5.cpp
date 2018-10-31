#include <iostream>

int main(int argc, char const *argv[]) {
  int i =11;
  while (i<10) {
    std::cout << i << '\n';
    i++;
  }
  std::cout << i << '\n';
  do {
    std::cout << i << '\n';
    i++;
  } while(i<10);
  std::cout << i << '\n';
  return 0;
}
