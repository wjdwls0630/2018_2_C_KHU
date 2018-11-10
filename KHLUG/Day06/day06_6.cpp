#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int size = 10;

int SequentialSearch(int a[], int target);
void swap(int &a, int &b);
void make_list(int a[]);
void print_list(int a[]);


int main() {
  int list[size];
  make_list(list);

  print_list(list);
  std::cout << SequentialSearch(list, 2) << '\n';

  return 0;
}
int SequentialSearch(int a[], int target) {

  int result;
  for (int i = 0; i < size; i++) {
    if (a[i]==target) {
      result=i;
      break;
    }
  }
  result=-1;
  return result;
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
