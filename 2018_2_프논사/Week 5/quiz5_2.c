#include <stdio.h>

int main() {
  int num1, num2;
  printf("1~100 사이 두 정수를 입력하시오 :  " );
  scanf("%d%d",&num1,&num2 );
  printf("%d + %d = %5d\n",num1,num2,num1+num2 );
  printf("%d - %d = %5d\n",num1,num2,num1-num2 );
  printf("%d * %d = %5d\n",num1,num2,num1*num2 );
  printf("%d / %d = %5.3f\n",num1,num2,(float)num1/num2 );
  printf("%d * %d = %5d\n",num1,num2,num1%num2 );
  return 0;
}
