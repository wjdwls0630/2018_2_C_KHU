#include <stdio.h>

int main() {
  int input;
  printf("양수를 입력하세요.\n" );
  scanf("%d",&input );
  if (input%3==0&&input%6==0) {
    printf("입력한 수 %d은 3의 배수이며, 6의 배수입니다.\n",input );
  } else if (input%3==0&&input%6!=0) {
    printf("입력한 수 %d은 3의 배수이며, 6의 배수가 아닙니다.\n",input );
  } else if (input%3!=0&&input%6==0) {
    printf("입력한 수 %d은 3의 배수가 아니며, 6의 배수입니다.\n",input );
  } else {
    printf("입력한 수 %d은 3의 배수가 아니며, 6의 배수가 아닙니다.\n",input );
  }



  return 0;
}
