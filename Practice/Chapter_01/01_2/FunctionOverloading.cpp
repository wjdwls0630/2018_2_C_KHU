#include <iostream>

void MyFunc(void) {
  std::cout << "MyFunc(void) called" << '\n';
}

void MyFunc(char c) {
  std::cout << "MyFunc(char c) called" << '\n';
}

void MyFunc(int a, int b) {
  std::cout << "MyFunc(int a, int b) called" << '\n';
}

int main(void) {
  MyFunc();
  MyFunc('A');
  MyFunc(12,13);
  return 0;
}
