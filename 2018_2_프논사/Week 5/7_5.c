#include <stdio.h>

int main() {
  int a= 0, b=1, c=1;

  printf("a < b && c > a의 결과 : %d\n",a < b && c > a );
  printf("a > b && c > a의 결과 : %d\n",a > b && c > a );
  printf("a > b || c > a의 결과 : %d\n\n",a > b || c > a );

  printf("괄호를 사용하는 것이 더 좋음\n" );
  printf("(a > b) || (c > a)의 결과 : %d\n",(a > b) || (c > a) );

  return 0;

}
