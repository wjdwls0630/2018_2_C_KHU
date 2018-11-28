#include <stdio.h>

int main() {
  int a[4]={10,20,30,40};
  double b[ ] = {2.3, 3.0, 4.1, 5.5};
  int aryLenInt=sizeof(a)/sizeof(int);
  int aryLenDouble = sizeof(b) / sizeof(double);

  printf("double형 배열 원소의 주소를 출력하면 \n");
  for (int i = 0; i < aryLenDouble; i++) {
    printf("b + %d = %p\n",i,b+i );
  }

  printf("int형 배열의 원소의 주소를 출력하면 \n" );
  for (int i = 0; i < aryLenInt; i++) {
    printf("a + %d = %p\n",i,a+i );
  }
  return 0;
}
