#include "stdio.h"

int main(void) {
  int a =20 ;
  float b = 5.06f;
  float c =1234567.89f;

  printf("0) d(123456) : %d\n",123456 );
  printf("1) d(20) : %d\n",a );
  printf("2) 6d(20) : %6d\n",a );
  printf("3) +6d(20) : %+6d\n",a );
  printf("4) -6d(20) : %-6d\n",a );
  printf("1) f(5.06f) : %f\n",b );
  printf("2) 6.1f(5.06f) : %6.1f\n",b );
  printf("3) +6.1f(5.06f) : %+6.1f\n",b );
  printf("4) -6.1f(5.06f) : %-6.1f\n",b );
  printf("5) f(1234567.89f) : %6.1f\n",c );


  return 0;
}
//실수 출력 예제
//구름 IDE - 실수 출력
