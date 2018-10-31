#include <iostream>

int Adder(int num1=1 , int num2=2){
  return num1+num2;
}

int main() {
  std::cout << Adder() << '\n';
  std::cout << Adder(5) << '\n';
  std::cout << Adder(5,3) << '\n';
  return 0;
}
