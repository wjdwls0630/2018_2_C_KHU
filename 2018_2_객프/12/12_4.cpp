#include <iostream>
class Base {
public:

  void f(void){
    std::cout << "in function Base::f()" << '\n';
  }
  virtual void vf(void){
    std::cout << "in function Base::vf()" << '\n';
  }
};
class Derived : public Base {
public:

  void f(void){
    std::cout << "in function Derived::f()" << '\n';
  }
  void vf (void) override {
    std::cout << "in function Derived::vf()" << '\n';
  }
};
int main() {
  Base *p;
  Base myB;
  Derived myD;
  p=&myB;
  p->f();
  p->vf();
  p=&myD;
  p->f();
  p->vf();


  return 0;
}
