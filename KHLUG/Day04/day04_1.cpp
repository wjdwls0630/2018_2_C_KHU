#include <iostream>
int add(int a ,int b) {

  return a+b;
}
int main(int argc, char const *argv[]) {
  int n=3 ; int m= 5;
  std::cout << add(3, m) << '\n';
  std::cout << add(n+2, m) << '\n';
  std::cout << add(n, add(n,m)) << '\n';
  return 0;
}
