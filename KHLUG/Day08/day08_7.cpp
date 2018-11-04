#include <iostream>

int main() {
  int a[5]={1,2,3,4,5};
  int *pa;
  pa=a;
  std::cout << "a[0] : " <<a[0]<< '\n';
  std::cout << "*pa : " <<*pa<< '\n';
  std::cout << "a[0] : " <<&a[0]<< '\n';
  std::cout << "pa : " <<pa<< '\n';
  pa=&a[1];
  std::cout << "a[0] : " <<a[0]<< '\n';
  std::cout << "pa[-1] : " <<pa[-1]<< '\n';
  std::cout << "a[0] : " <<a[1]<< '\n';
  std::cout << "pa[-1] : " <<pa[0]<< '\n';

  std::cout << "*(a+n) : ";
  for (int i = 0; i < 5; i++) {
    std::cout << *(a+i)<<' ';
  }
  std::cout  << '\n';
  std::cout << "*(pa+n) : ";
  for (int i = -1; i < 4; i++) {
    std::cout << *(pa+i)<<' ';
  }
  return 0;
}
