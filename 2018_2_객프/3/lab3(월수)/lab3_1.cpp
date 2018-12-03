#include <iostream>
int sum(int x, int y) {
  int result = x+y;
  return result;
}
int sub(int x, int y) {
  int result = x-y;
  return result;
}
int mult(int x, int y) {
  int result = x*y;
  return result;
}
int idiv(int x, int y) {
  int result = x/y;
  return result;
}
int main(int argc, char const *argv[]) {
  int num1, num2;
  std::cin >> num1>>num2;
  std::cout << "summation = " <<sum(num1, num2);
  std::cout << ", subtraction = " <<sub(num1, num2);
  std::cout << ", multiplication = " <<mult(num1, num2);
  std::cout << ", division = " <<idiv(num1, num2)<<"\n";



  return 0;
}
