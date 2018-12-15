#include <stdio.h>

int main() {
  int A[5]={1,2,3,4,5};
  int sum =0;
  double average;
  for (int i = 0; i < 5; i++) {
    sum+=A[i];
  }
  average=(double)sum/5;
  printf("배열 A 원소의 합은 %d다.\n",sum );
  printf("배열 A 원소의 평균은 %4.2lf이다.\n", average);
  return 0;
}
