#include <stdio.h>

int main() {
  float num1=0, num2=0;
  float size;
  printf("밑변과 높이를 입력하세요 :  ");
  scanf("%f%f",&num1,&num2 );
  size=(float)num1*num2/2;
  printf("삼각형의 면적은 %.5f  \n",size);

  return 0;
}
