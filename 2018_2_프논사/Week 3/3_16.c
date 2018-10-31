#include <stdio.h>


int main(void) {
  int x =1, y =2;
  float Average;

  Average =x/y; // 정수 / 정수 = 정수

  printf("(1번)Ave = %f\n",Average );

  Average = x/(float)y;
  // Average = (float)x/y
  // Average = (float)x/(float)y
  // 모두 같은 결과 출력
  printf("(2번)Ave = %f\n",Average );




  return 0;
}

//형변환 실습
//구름IDE - 명시적 형변환(2)
