#include <iostream>

int main() {
  int Fah;
  double Cel;
  std::cout << "화씨를 입력하세요 : ";
  std::cin >> Fah;
  Cel=(Fah-32)/1.8;
  std::cout << "섭씨 온도 : " <<Cel<< '\n';
  return 0;
}
