#include <stdio.h>
#define PIE 3.141592
int main() {
  double radius;
  printf("반지름을 입력하시오. : " );
  scanf("%lf",&radius );

  printf("\n원의 넓이는 %.5f이다. ",(radius*radius)*PIE );


  return 0;
}
