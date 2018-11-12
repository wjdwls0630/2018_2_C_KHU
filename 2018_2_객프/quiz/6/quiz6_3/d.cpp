#include <iostream>

int main(int argc, char const *argv[]) {
  int size=0;
  int *p=new int[size];
  p[size]=1;
  std::cout << p[size] << '\n';
  return 0;
}
