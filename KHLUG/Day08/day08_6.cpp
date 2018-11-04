#include <iostream>
int* maximum(int*a,int*b,int*c);
int* minimum(int*a,int*b,int*c);

int main() {
  int a=405;
  int b=406;
  int c=409;
  std::cout << "maximum : " <<*maximum(&a,&b,&c)<< '\n';
  std::cout << "minimum : " <<*minimum(&a,&b,&c)<< '\n';
  return 0;
}

int* maximum(int*a,int*b,int*c) {
  return *a>*b?(*a>*c?a:c):(*b>*c?b:c);
}

int* minimum(int*a,int*b,int*c) {
  return *a<*b?(*a<*c?a:c):(*b<*c?b:c);
}
