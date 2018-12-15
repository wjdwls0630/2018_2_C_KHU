#include <stdio.h>
int SumArray(int a[], int size);
int main() {
  int a[]= {10,5,15,25,7};
  int Sum;
  Sum=SumArray(a,5);
  printf("배열 원소의 합 : %d\n",Sum );
  return 0;
}
int SumArray(int a[], int size) {
  int result=0;
  for (int i = 0; i < size; i++) {
    result+=a[i];
  }
  return result;
}
