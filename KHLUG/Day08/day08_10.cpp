#include <iostream>

int main() {
  int *p=new int[5];
  for (int i = 0; i < 5; i++) {
    p[i]=i;
  }
  for (int i = 0; i < 5; i++) {
    std::cout << *(p+i) << '\n';
  }
  delete[] p;
  
  return 0;
}
