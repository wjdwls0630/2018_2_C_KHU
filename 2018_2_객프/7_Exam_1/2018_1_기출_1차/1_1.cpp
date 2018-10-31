#include <iostream>

void printHeader();
void printMiddle();
void calcBasic(int num1, int num2);

int main() {
  int num1, num2;
  std::cin >>num1>>num2;
  printHeader();
  std::cout << "input#1: " <<num1<< '\n';
  std::cout << "input#2: " <<num2<< '\n';
  printMiddle();
  calcBasic(num1,num2);


  return 0;
}

void printHeader() {
  std::cout << "[input]" << '\n';
}
void printMiddle() {
  std::cout << "[result]" << '\n';
}
void printFooter() {
  std::cout << "[end]" << '\n';
}
void calcBasic(int num1, int num2) {
  std::cout << "add: " <<num1+num2<< '\n';
  std::cout << "sub: " <<num1-num2<< '\n';
  std::cout << "mul: " <<num1*num2<< '\n';
}
