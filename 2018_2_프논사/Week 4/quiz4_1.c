#include <stdio.h>

int main(void) {
  int temp=0;
  printf("섭씨 온도를 입력하세요.\n");
  scanf("%d",&temp );
  printf("섭씨 %d 는 화씨 %.2f 도 입니다.\n",temp,(temp*1.8)+32 );
  return 0;
}
