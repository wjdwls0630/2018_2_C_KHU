#include <stdio.h>

int main() {
  int min,max;
  int x,y,z;
  printf("세 정수를 입력하세요.\n" );
  scanf("%d%d%d",&x,&y,&z );
  max=x>y?(x>z?x:z):(y>z?y:z);

  printf("최대값은 %d이다.  ",max );

  return 0;
}
