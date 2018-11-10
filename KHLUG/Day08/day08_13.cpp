#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int size = 10;
void SelectionSort(int *a);
void BubbleSort(int *a);
void InsertionSort(int *a);
int SequentialSearch(int *a, int target);
int BinarySearch(int *a, int target);
void swap(int *a, int *b);
void make_list(int *a);
void print_list(int *a);


int main() {
  int list[size];
  make_list(list);
  print_list(list);
  SelectionSort(list);
  print_list(list);

  return 0;
}
void SelectionSort(int *a) {
  int smallest_index=0;
  for (int i = 0; i < size-1; i++) {
    smallest_index=i;
    for (int j = i+1; j < size; j++) {
      if (*(a+j)<*(a+smallest_index)) {
        smallest_index=j;
      }
    }
    swap((a+i),(a+smallest_index));
    print_list(a);
  }

}
void BubbleSort(int *a) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (*(a+j)>*(a+j+1)) {
        swap((a+j), (a+j+1));
      }
    }
    print_list(a);
  }
}
void InsertionSort(int *a) {
  int target;
  for (int i = 1; i < size; i++) {
    target=*a;
    for (int j = i-1; j >=0; j--) {
      if (*(a+j)>target) {
        *(a+j+1)=*(a+j);
        *(a+j)=target;
      } else{
        break;
      }
    }
    print_list(a);
  }
}
int SequentialSearch(int *a, int target) {

  int result;
  for (int i = 0; i < size; i++) {
    if (*(a+i)==target) {
      result=i;
      break;
    }
  }
  result=-1;
  return result;
}
int BinarySearch(int *a, int target) {
  int left=0;
  int right=size-1;
  int mid;
  int result;
  while (left<=right) {
    mid=left+(left+right)/2;
    if (*(a+mid)==target) {
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

void swap(int *a, int *b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}
void make_list(int *a) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    *(a+i)=rand()%100+1;
  }
}
void print_list(int *a) {
  for (int i = 0; i < size; i++) {
    std::cout << *(a+i)<<' ' ;
  }
  std::cout  << '\n';
}
