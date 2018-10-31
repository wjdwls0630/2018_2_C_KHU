#include "stdio.h"

int main(void) {
  int num1 =10;
  //const
  int num2 =50;

  printf("num1 초기값 : %d\n",num1 );
  printf("num2 초기값 : %d\n",num2 );

  num1=20; //num1에 새로운 정수값 저장
  num2=30; //num2에 새로운 정수값 저장 , 에러 요인 const는 한 번 선언한 후 이 후에 수정할 수 없다.

  printf("num1 새로운 값 : %d\n",num1 );
  printf("num2 새로운 값 : %d\n",num2 );
  return 0;
}

//변수(variable) - 실습 2
//구름 IDE - 상수 선언 오류
