#include <iostream>

int main(int argc, char const *argv[]) {
  int userinput;
  std::cout << "숫자를 입력하세요 : " ;
  std::cin >> userinput;
  if (userinput>10) {
    std::cout << "10보다 큽니다" << '\n';
  } else {
    std::cout << "10보다 작습니다" << '\n';
  }
  std::cout << (userinput>10 ? "10보다 큽니다" : "10보다 작습니다") << '\n';
  return 0;
}
