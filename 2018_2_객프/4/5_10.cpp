#include <iostream>
#include <cmath>

int main() {
  int usercount;
  int power =1;
  std::cout << "몇 줄을 출력하시겠습니까? : ";
  std::cin >> usercount;
  unsigned long long int finish_line = pow(10,usercount);
  while (power<=finish_line) {
    std::cout << power << '\n';
    power *= 10;
  }
  return 0;
}
