#include <iostream>

int add(int x, int y) ;
int mul(int x, int y);
int evaluate(int(*f)(int,int),int x, int y);

int main() {
  std::cout << add(2,3) << '\n';
  std::cout << mul(2,3) << '\n';
  std::cout << evaluate(&add,2,3) << '\n';
  std::cout << evaluate(&mul,2,3) << '\n';
  int (*func)(int,int);
  func=&add;
  std::cout << func(7,2) << '\n';


  return 0;
}

int add(int x, int y) {
  return x+y;
}
int mul(int x, int y) {
  return x*y;
}
int evaluate(int(*f)(int,int),int x, int y) {
  return f(x,y);
}
