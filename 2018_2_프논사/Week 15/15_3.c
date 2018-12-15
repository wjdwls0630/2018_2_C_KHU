#include <stdio.h>
int sum(int n);
int main() {
  int input, s=0;
  printf("양의 정수를 입력하세요 : ");
  scanf("%d",&input );
  s=sum(input);
  printf("재귀함수를 이용한 1부터 %d까지 합 : %d\n", input, s);
  return 0;
}
int sum(int n) {
  if (n==1) {
    return 1;
  }
  return n+sum(n-1);
}
