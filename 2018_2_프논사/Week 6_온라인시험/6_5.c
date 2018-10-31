#include <stdio.h>

int main() {
  float x1,x2,y1,y2;
  printf("첫 번째 좌표를 입력하시오. :  ");
  scanf("%f%f",&x1,&y1  );
  printf("두 번째 좌표를 입력하시오. :  ");
  scanf("%f%f",&x2,&y2  );
  float mean_x=(x1+x2)/2;
  float mean_y=(y1+y2)/2;
  printf("두 좌표 (%.1f, %.1f)와 (%.1f, %.1f)의 중간 좌표는 (%.2f, %.2f) 입니다.  ",x1,y1,x2,y2,mean_x,mean_y );
  return 0;
}
