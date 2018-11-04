#include <iostream>




int main() {

  int x = 4;
  int *p;
  std::cout << std::endl << "(1)[address of x: " << &x << "]" << "[value of x: " << x << "]";
  std::cout << std::endl << "(1)[pointed by p: " << p << "]" << "[value of pointed p : " << *p <<"]";
  p = &x;
  std::cout << std::endl << "(2)[address of x: " << &x << "]" << "[value of x: " << x << "]";
  std::cout << std::endl << "(2)[pointed by p: " << p << "]" << "[value of pointed p : " << *p <<"]";
  *p = 7;
  std::cout << std::endl << "(3)[address of x: " << &x << "]" << "[value of x: " << x << "]";
  std::cout << std::endl << "(3)[pointed by p: " << p << "]" << "[value of pointed p : " << *p <<"]"; return 0;


  return 0;
}
