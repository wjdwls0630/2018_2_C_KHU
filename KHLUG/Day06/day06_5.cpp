#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int size = 10;

int BinarySearch(int a[], int target);
void swap(int &a, int &b);
void make_list(int a[]);
void print_list(int a[]);


int main() {
  int list[size];
  make_list(list);
  std::sort(list,list+size);
  print_list(list);
  std::cout << BinarySearch(list, 2) << '\n';

  return 0;
}
int BinarySearch(int a[], int target) {
  int left=0;
  int right=size-1;
  int mid;
  int result;
  while (left<=right) {
    mid=left+(left+right)/2;
    if (a[mid]==target) {
      result = mid;
    }else if(a[mid]<target){
      left=mid+1;
    } else if(a[mid]>target){
      right =mid-1;
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
