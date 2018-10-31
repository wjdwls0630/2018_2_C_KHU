#include <iostream>

void divide(int divnd, int divsr, int &quot, int &rem);



int main() {
  int divnd,divsr,quot,rem;
  std::cout << "숫자 두개를 입력하세요 : " ;
  std::cin >> divnd>>divsr;
  divide(divnd,divsr,quot,rem);
  std::cout << "몫 : " <<quot<< '\n';
  std::cout << "나머지 : " <<rem<< '\n';
  return 0;
}

void divide(int divnd, int divsr, int &quot, int &rem) {
  quot=divnd/divsr;
  rem=divnd%divsr;
}
