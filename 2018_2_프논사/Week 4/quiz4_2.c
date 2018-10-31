#include <stdio.h>
#define PIE 3.141592


int main(void) {
  double radius=0;
  printf("반지름을 입력하시오.\n");
  scanf("%lf",&radius );
  printf("원의 넓이는 %.5f이다. \n",radius*radius*PIE);
  return 0;
}
