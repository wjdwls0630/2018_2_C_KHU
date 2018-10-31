#include <stdio.h>

int main() {
  int a= 0, b=1, c=1;

  printf("논리 연산 1 && 1 || 0의 결과 : %d\n",1&&1||0 );
  printf("논리 연산 1 && 0 || 1 의 결과 : %d\n",1&&0||1 );
  printf("논리 연산 1 && 0 || 0의 결과 : %d\n",1&&0||0 );
  printf("논리 연산 1 && 0 || 0 && 1의 결과 : %d\n",b&&a||a&&c );
  printf("논리 연산 <1 && 0> || <0 && 1>의 결과 : %d\n",(b&&a)||(a&&c) );
  return 0;

}
