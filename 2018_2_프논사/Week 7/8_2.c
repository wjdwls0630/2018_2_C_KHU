#include <stdio.h>

int main() {
  int min, max, x,y;
  printf("숫자 2개를 입력하세요.\n" );
  scanf("%d%d",&x,&y );
  if (x>y) {
    max=x;
    min=y;
  } else {
    max=y;
    min=x;
  }
  printf("두 수 %d와 %d 중 큰 수는 %d이다.\n",x,y,max );
  printf("두 수 %d와 %d 중 작은 수는 %d이다.\n",x,y,min );

  return 0;
}
