#include <stdio.h>

int main() {
  int a,b,c,d;
  int x= 10, y=7;

  a=x&y;
  b=x|y;
  c=x^y;
  d= ~x;


  printf("비트곱 x & y 의 결과 : %d\n",a );
  printf("비트합 x | y 의 결과 : %d\n",b );
  printf("배타적 논리합 x ^ y 의 결과 : %d\n",c );
  printf("비트 반전  ~x 의 결과 : %d\n",d );

  return 0;

}
