#include <stdio.h>



int main(void) {
  float num1=0,num2=0,result=0;

  printf("가로와 세로를 입력하세요 : ");
  scanf("%f%f",&num1,&num2 );
  result=num1*num2;
  printf("사각형의 넓이는 %.4f이다. \n",result);
  return 0;
}
