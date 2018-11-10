#include <iostream>
#include <cstdlib>
#include <ctime>

const int size = 10;

void SelectionSort(int a[]);
void swap(int &a, int &b);
void make_list(int a[]);
void print_list(int a[]);


int main() {
  int list[size];
  make_list(list);
  print_list(list);
  SelectionSort(list);
  print_list(list);
  return 0;
}
void SelectionSort(int a[]) {
  int smallest_index=0;
  for (int i = 0; i < size-1; i++) {
    smallest_index=i;
    for (int j = i+1; j < size; j++) {
      if (a[j]<a[smallest_index]) {
        smallest_index=j;
      }
    }
    swap(a[i],a[smallest_index]);
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
