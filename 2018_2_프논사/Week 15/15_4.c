#include <stdio.h>
int SelectSum(int a[],int size);
int main() {
  int a[]={20,10,5,8,28};
  int s=0;
  s=SelectSum(a, 5);
  printf("10보다 큰 배열 원소의 합 : %d\n",s );

  return 0;
}
int SelectSum(int a[],int size) {
  int result=0;
  for (int i = 0; i < size; i++) {
    if (a[i]>10) {
      result+=a[i];
    }
  }
  return result;
}
