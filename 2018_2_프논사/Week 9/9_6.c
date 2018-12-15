#include <stdio.h>

int main() {
  int sum;
  printf("다중 for문 예제입니다.\n" );
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      sum=i+j;
      printf("%d + %d = %d\n",i,j,sum );
    }
  }
  return 0;
}
