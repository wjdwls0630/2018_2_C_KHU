#include <stdio.h>


int main(void) {

  int a = 10, b =20, c;
  float d = 5.6, e=8.5, f;

  c = d+ e;
  printf("c = d + e 연산결과 : %.2f\n", (float)c);

  f = d+ e;
  printf("f = d + e 연산결과 : %.2f\n", f);


  f= d+ (int)e;

  printf("f = d + (int)e 연산결과 : %.2f\n", f);





  return 0;
}

//형변환 실습
//구름IDE - 묵시적/명시적 형변환
