#include <iostream>

int func(int x) {
  std::cout << "함수 매개변수 a : " <<x<< '\n';
  x+=3;
  std::cout << "함수 과정 후 x : " <<x<< '\n';
  return x;
}

int main(int argc, char const *argv[]) {
  int a =5; int b;
  b=func(a);
  std::cout << "함수 후 a : " <<a<< '\n';
  std::cout << "함수 후 b : " <<b<< '\n';
  return 0;
}
