#include <iostream>

int main() {
  int num1, num2;
  std::cout << "두 개의 정수를 입력하세요 : " ;
  std::cin >> num1>>num2;
  std::cout <<"A+B= " <<num1+num2 << '\n';
  std::cout <<"A-B= " <<num1-num2 << '\n';
  std::cout <<"A*B= " <<num1*num2 << '\n';
  std::cout <<"A/B= " <<num1/num2 << '\n';
  std::cout <<"A%B= " <<num1%num2 << '\n';

  return 0;
}
