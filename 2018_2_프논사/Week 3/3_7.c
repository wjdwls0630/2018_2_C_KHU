#include "stdio.h"

int main(void) {
  float x =1.1f;
  double y =2.2;
  long double z =3.3L;
  printf("float x = %f\n", x);
  printf("double y = %f\n", y);
  printf("long double z = %Lf\n", z);

  return 0;
}

// float 초기화 뒤에 f를 붙여주지 않으면 warning 이 일어난다.
// float 뒤에 f를 붙이지 않으면 double이 float로 잘린다.
// long double 도 마찬가지로 l 을 붙이고 double 만 아무것도 붙이지 않는다.

/*
 float 인 경우 %f
 double 인 경우 %f
 long double 인 경우 %LF
 */

//실수형 변수를 선언하고 초기화 하는 예제
//구름 IDE - 실수형 선언 초기화
