#include <stdio.h>

int main() {
  int a[][3]={{90,80,90},{70,100,100},{80,90,90}};
  int sum=0;
  double avg[3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      sum+=a[i][j];
    }
    avg[i]=(double)sum/3;
    printf("%d번 학생의 평균은 %.2lf이다.\n",i+1,avg[i]);
    sum=0;
  }
  return 0;
}
