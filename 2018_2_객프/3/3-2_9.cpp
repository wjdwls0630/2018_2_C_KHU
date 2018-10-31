#include <iostream>

void swap_call_by_reference(int &x, int &y) {
  int temp = x;
  x=y;
  y=temp;
}

int main() {
  int var1=5;
  int var2=19;
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n';
  swap_call_by_reference(var1, var2);
  std::cout << "var1 = " <<var1<<", var2 = "<<var2<<'\n';
  return 0;
}
