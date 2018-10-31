#include <stdio.h>

int main() {
  int score, grade;
  printf("점수를 입력하세요 : ");
  scanf("%d",&score );
  grade=(score>=90);

  if (grade==1) {
    printf("결과는 %d, 합격\n",grade );
  } else {
    printf("결과는 %d, 불합격\n",grade );
  }

  return 0;
}
