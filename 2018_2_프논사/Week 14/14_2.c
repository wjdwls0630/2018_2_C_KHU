#include <stdio.h>
float Average(float x, float y);
int main() {
  float x,y;
  float result;
  printf("실수 2개를 입력하세요 : " );
  scanf("%f%f",&x,&y );
  result=Average(x, y);
  printf("두 실수의 평균 : %f\n",result );

  return 0;
}
float Average(float x, float y){
  float result=(x+y)/2;
  return result;
}
