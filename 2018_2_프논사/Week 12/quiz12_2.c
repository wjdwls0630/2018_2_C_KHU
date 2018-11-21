#include <stdio.h>

int main() {
  int Array[3][4]={{10,20,30,40},{-50,-60,-70,-80},{90,100,50,50}};
  int sum=0;
  double avg;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      sum+=Array[i][j];
    }
    avg=(double)sum/4;
    printf("%d행의 합은 %5d, 평균은 %7.3lf \n",i+1,sum,avg );
    //소수점도 출력 칸 하나를 차지한다.
    sum=0;
  }
  printf("\n" );
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 3; i++) {
      sum+=Array[i][j];
    }
    avg=(double)sum/3;
    printf("%d열의 합은 %5d, 평균은 %7.3lf \n",j+1,sum,avg );
    //소수점도 출력 칸 하나를 차지한다.
    sum=0;
  }

  return 0;
}
