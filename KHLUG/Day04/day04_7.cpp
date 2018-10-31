#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
  srand(time(NULL));
  std::cout << rand() << '\n';
  std::cout << rand() << '\n';
  std::cout << rand() << '\n';
  std::cout << '\n';
  std::cout << rand()%10 << '\n'; //0~9 사이 랜덤
  std::cout << rand()%10+3 << '\n';//3~12사이 랜덤

  return 0;
}
