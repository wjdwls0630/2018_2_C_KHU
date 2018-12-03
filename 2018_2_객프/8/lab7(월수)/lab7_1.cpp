#include <iostream>

void swap_call_by_value(int x, int y) {
  int temp = x;
  x=y;
  y=temp;
}

void swap_by_pointer(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y= temp;
}

void print_pointer(const float* const x) {
  std::cout << *x << '\n';
}

int main() {
  int var1=5;
  int var2=19;
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n';
  swap_call_by_value(var1, var2);
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n'<<'\n';
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n';
  swap_by_pointer(&var1, &var2);
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n';

  float x = var1/var2;

  print_pointer(&x);

  return 0;
}
