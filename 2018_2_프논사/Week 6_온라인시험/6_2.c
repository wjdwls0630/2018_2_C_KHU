#include <stdio.h>

int main() {
  int num1, num2;
  printf("두 정수를 입력하시오.\n" );
  scanf("%d%d",&num1,&num2 );
  printf("%d + %d =%7d \n",num1,num2,num1+num2 );
  printf("%d - %d =%7d \n",num1,num2,num1-num2 );
  printf("%d * %d =%7d \n",num1,num2,num1*num2 );
  printf("%d / %d =%7.3f \n",num1,num2,(float)num1/num2 );
  printf("%d %% %d =%7d \n",num1,num2,num1%num2 );

  return 0;
}
