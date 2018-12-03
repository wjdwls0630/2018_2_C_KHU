#include <iostream>
class Base {
public:

  void f(void){
    std::cout << "in function Base::f()" << '\n';
  }
};
class Derived : public Base {
public:

  void g(void){
    std::cout << "in function Derived::g()" << '\n';
  }
};
int main() {
  Base myB;
  Derived myD;
  myB.f();
  myD.g();
  myD.f();


  return 0;
}
