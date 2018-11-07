#include <iostream>



void print(const int *a, int n);
int sum(int a[], int n);
void clear(int a[],int n);
int main() {
  int list[]={2,4,6,8};

  print(list,4);
  std::cout << sum(list,4) << '\n';

  clear(list, 4);

  print(list,4);
  std::cout << sum(list,4) << '\n';
  return 0;
}


void print(const int *a, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << *a << ' ';
    a++;
  }
  std::cout  << '\n';
}
int sum(int *a, int n) {
  int result=0;
  for (int i = 0; i < n; i++) {
    result+=*a;
    a++;
  }
  return result;
}

void clear(int a[],int n) {
  for (int i = 0; i < n; i++) {
    *a=0;
    a++;
  }
}
