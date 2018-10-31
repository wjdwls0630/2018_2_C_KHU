#include <stdio.h>

int main() {
  int min,max;
  int x,y,z;
  printf("세 정수를 입력 : " );
  scanf("%d%d%d",&x,&y,&z );
  max=x>y?(x>z?x:z):(y>z?y:z);

  printf("최대 정수 : %d",max );

  return 0;
}
