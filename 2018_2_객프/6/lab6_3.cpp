#include <iostream>
#include <string>

using namespace std;


int sum(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int idiv(int x, int y);
int mod(int x, int y);
int main() {
  int num1 , num2,result;
  string oper;
  std::cout << "Enter two numbers : ";
  std::cin >> num1>>num2;
  std::cout << "Choose Operator(add/sub/mul/div/mod/quit) : ";
  std::cin >> oper;

  while (oper!="quit") {
    if (oper=="add") {
      result=sum(num1,num2);
    } else if (oper=="sub") {
      result=sub(num1,num2);
    } else if (oper=="mul") {
      result=mult(num1,num2);
    } else if (oper=="div") {
      result=idiv(num1,num2);
    } else if (oper=="mod") {
      result=mod(num1,num2);
    }
    std::cout << result << '\n';
    std::cout << "Enter two numbers : ";
    std::cin >> num1>>num2;
    std::cout << "Choose Operator(add/sub/mul/div/mod/quit) : ";
    std::cin >> oper;
  }
  return 0;
}

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
int mod(int x, int y) {
  int result = x%y;
  return result;
}
