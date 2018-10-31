#include <stdio.h>

int main() {
  int min,max;
  int x,y,z;
  printf("세 정수를 입력하세요.\n" );
  scanf("%d%d%d",&x,&y,&z );


  if (x>y) {
    if (x>z) {
      max=x;
    } else {
      max=z;
    }
  } else {
    if (y>z) {
      max=y;
    } else {
      max=z;
    }
  }

  printf("최대값은 %d이다.  ",max );

  return 0;
}
