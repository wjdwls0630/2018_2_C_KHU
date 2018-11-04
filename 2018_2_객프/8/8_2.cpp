#include <iostream>
void swap(int *a, int *b);
int main() {

  int var1 = 5, var2 = 19;
  std::cout << "var1 = " << var1 << " ( " << &var1 << " ), "<< "var2 = " << var2 << " ( " << &var2 << " )" << '\n';
  swap(&var1, &var2);
  std::cout << "var1 = " << var1 << " ( " << &var1 << " ), "<< "var2 = " << var2 << " ( " << &var2 << " )" << '\n';

  return 0;
}

void swap(int *a, int *b){
  int temp = *a;
  std::cout << "a = " << a << " ( " << *a << " ), " << "b = " << b << " ( " << *b << " )" << '\n';
  *a = *b;
  *b = temp;
  std::cout << "a = " << a << " ( " << *a << " ), " << "b = " << b << " ( " << *b << " )" << '\n';
}
