#include <iostream>
#include <cmath>

int main() {
  double x,y;
  std::cin >> x>>y;
  std::cout << "sqrt " <<sqrt(x)<< '\n'; // x에 대한 양의 제곱근 연산
  std::cout << "exp " <<exp(x)<< '\n'; //자연상수 e의 x제곱 연산
  std::cout << "log10 " <<log10(x)<< '\n'; //로그함수 log10 연산
  std::cout << "cos " <<cos(x)<< '\n';//삼각함수 코사인 연산
  std::cout << "pow " <<pow(x, y)<< '\n'; //x의 y제곱 연산
  std::cout << "fabs " <<fabs(x)<< '\n'; //실수를 위한 절대값 연산

  return 0;
}
