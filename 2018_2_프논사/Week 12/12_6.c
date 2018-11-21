#include <stdio.h>

int main() {
  int a[][3]={{90,80,90},{70,100,100},{80,90,90}};
  int sum=0;
  double avg[3];
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      sum+=a[i][j];
    }
    avg[j]=(double)sum/3;
    if (j==0) {
      printf("국어 평균은 %.2lf이다.\n",avg[j]);
    } else if (j==1) {
      printf("영어 평균은 %.2lf이다.\n",avg[j]);
    } else if (j==2) {
      printf("수학 평균은 %.2lf이다.\n",avg[j]);
    }
    sum=0;
  }

  return 0;
}
