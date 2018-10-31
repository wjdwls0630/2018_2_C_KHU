#include <iostream>

int main(int argc, char const *argv[]) {
  int sum =0;
  for (int i = 1; i <= 100; i++) {
    sum+=i;
  }
  std::cout << sum << '\n';
  return 0;
}
