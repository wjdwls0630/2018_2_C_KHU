#include <stdio.h>

int main() {
  int a[4]={10,20,30,40};
  int aryLength=sizeof(a)/sizeof(int);
  printf("배열의 원소값을 출력하면 \n" );
  for (int i = 0; i < aryLength; i++) {
    printf("a[%d] = %d\n",i,a[i] );
  }
  printf("배열의 원소의 주소를 출력하면 \n" );
  for (int i = 0; i < aryLength; i++) {
    printf("&a[%d] = %p\n",i,&a[i] );
  }
  return 0;
}
