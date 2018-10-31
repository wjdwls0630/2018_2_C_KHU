#include <stdio.h>



int main(void) {
  int num1=0,num2=0,sum=0;
  float average=0;
  printf("두 정수를 입력하세요 : ");
  scanf("%d%d",&num1,&num2 );
  sum=num1+num2;
  average=(float)sum/2;
  printf("합은 %d, 평균은 %f \n",sum,average);
  return 0;
}
