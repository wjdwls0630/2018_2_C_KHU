#include <stdio.h>

int main() {
  int a[2][2]={5,20,12,7};
  int sum=0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      sum+=a[i][j];
    }
  }
  printf("2차원 배열 a의 합은 %d다.\n",sum );
  return 0;
}
