#include <iostream>
#include <cstdlib>
#include <ctime>

const int size = 10;

void InsertionSort(int a[]);
void swap(int &a, int &b);
void make_list(int a[]);
void print_list(int a[]);


int main() {
  int list[size];
  make_list(list);
  print_list(list);
  InsertionSort(list);
  print_list(list);
  return 0;
}
void InsertionSort(int a[]) {
  int target;
  for (int i = 1; i < size; i++) {
    target=a[i];
    for (int j = i-1; j >=0; j--) {
      if (a[j]>target) {
        a[j+1]=a[j];
        a[j]=target;
      } else{
        break;
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
