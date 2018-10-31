#include <iostream>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 5; i++) {
    if (i==2) {
      break;
    }
    std::cout << i << '\n';
  }
  for (int i = 0; i < 5; i++) {
    if (i==2) {
      continue;
    }
    std::cout << i << '\n';
  }
  return 0;
}
