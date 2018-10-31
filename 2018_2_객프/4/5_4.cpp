#include <iostream>

int main() {
  int dividend, divisor, quotient;
  //Get two integers from users
  std::cout << "Please enter two integers to divide : " << '\n';
  std::cin >> dividend>> divisor;
  //If possible, divide them and report the result
  if (divisor!=0) {
    quotient=dividend/divisor;
    std::cout << dividend <<" / "<<divisor<<" = "<<quotient<< '\n';
  }else{
    std::cout << "Divison by zero is not allowed!" << '\n';
  }
  return 0;
}
