#include <iostream>
class Base {
public:

  void f(void){
    std::cout << "in function Base::f()" << '\n';
  }
};
class Derived : private Base {
public:


  void g(void){
    Base::f();
    std::cout << "in function Derived::g()" << '\n';
  }
};
int main() {
  Base myB;
  Derived myD;
  myB.f();
  myD.g();



  return 0;
}
