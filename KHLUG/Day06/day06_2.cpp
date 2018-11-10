#include <iostream>
#include <cstdlib>
#include <ctime>

const int size = 10;

void BubbleSort(int a[]);
void swap(int &a, int &b);
void make_list(int a[]);
void print_list(int a[]);


int main() {
  int list[size];
  make_list(list);
  print_list(list);
  BubbleSort(list);
  print_list(list);
  return 0;
}
void BubbleSort(int a[]) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (a[j]>a[j+1]) {
        swap(a[j], a[j+1]);
      }
    }
    print_list(a);
  }
}

void swap(int &a, int &b) {
  int temp=a;
  a=b;
  b=temp;
}
void make_list(int a[]) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    a[i]=rand()%100+1;
  }
}
void print_list(int a[]) {
  for (int i = 0; i < size; i++) {
    std::cout << a[i]<<' ' ;
  }
  std::cout  << '\n';
}
