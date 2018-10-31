#include <stdio.h>

int main() {
  int x, y,num;
  printf("x, y 좌표를 입력하세요 :" );
  scanf("%d%d",&x,&y );
  if (x>0) {
    if (y>0) {
      num=1;
    } else {
      num=4;
    }
  } else {
    if (y>0) {
      num=2;
    } else {
      num=3;
    }
  }

  printf("좌표값(%d,%d)는 %d사분면에 있습니다.   ",x,y,num );
  return 0;
}
