#include <stdio.h>

int main() {
  int num1,num2;
  char arithmetic;
  printf("숫자 2개와 연산자를 입력하세요.\n\n" );
  printf("연산자는 아래와 같습니다.\n");
  printf("연산자는 아래와 같습니다.\n");
  printf("더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /\n");
  printf("입력 순서 : 정수1 연산자 정수2\n\n" );
  scanf("%d %c %d",&num1,&arithmetic,&num2 );

  switch (arithmetic) {
    case '+':
     printf("%d %c %d = %d\n",num1,arithmetic,num2,num1+num2 );
     break;

    case '-':
     printf("%d %c %d = %d\n",num1,arithmetic,num2,num1-num2 );
     break;

    case '*':
     printf("%d %c %d = %d\n",num1,arithmetic,num2,num1*num2 );
     break;

    case '/':
     printf("%d %c %d = %f\n",num1,arithmetic,num2,(float)num1/num2 );
     break;
    default :
     printf("연산자를 잘못 입력했습니다.\n" );
     break;
  }
  return 0;
}
