#include <stdio.h>

int main(void) {

  int age =0,year=0;
  printf("당신의 나이와 출생연도를 입력하세요.\n" );
  scanf("%d%d",&age,&year );
  printf("당신은 %d년에 출생한 %d세입니다.\n",year, age);

  return 0;
}
