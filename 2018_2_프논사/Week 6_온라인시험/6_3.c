#include <stdio.h>
#define pyeong 3.305785
int main() {
  float num1, num2;
  printf("원룸의 가로와 세로를 입력하시오 :  " );
  scanf("%f%f",&num1,&num2 );
  printf("\n");
  printf("원룸 가로 : %.2fm , 세로 : %.2fm 는 %.2f평 입니다.\n",num1,num2,(num1*num2)/pyeong );

	return 0;
}
