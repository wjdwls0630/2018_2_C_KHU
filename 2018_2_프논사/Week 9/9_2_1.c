#include <stdio.h>

int main() {
  int number;
  printf("반복 횟수를 입력하세요 : " );
  scanf("%d",&number );
  for (int i = 1; i <= number; i++) {
    printf("%d번 반복입니다!!\n",i );
  }
  return 0;
}
