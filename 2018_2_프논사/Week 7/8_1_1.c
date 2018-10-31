#include <stdio.h>

int main() {
  int input;
  printf("정수를 입력하세요 : " );
  scanf("%d",&input );
  if (input%5==0) {
    printf("%d는 5의 배수입니다.\n",input );
  } else {
    printf("%d는 5의 배수가 아닙니다.\n",input );

  }

  return 0;
}
