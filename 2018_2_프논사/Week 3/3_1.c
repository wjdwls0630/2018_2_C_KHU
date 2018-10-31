#include "stdio.h"

int main(void) {
  int num1 =10, num2;
  printf("num1 초기값 : %d\n",num1 );
  printf("num2 초기값 : %d\n",num2 ); //구름 IDE에서는 0 Visual Studio에서는 쓰레기 값

  num1=20; //num1에 새로운 정수값 저장
  num2=30; //num2에 새로운 정수값 저장


  printf("num1 새로운 값 : %d\n",num1 );
  printf("num2 새로운 값 : %d\n",num2 );
  return 0;
}

//변수(variable) - 실습 1
//구름 IDE - 변수 선언 및 초기화
