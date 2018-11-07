#include <stdio.h>

int main() {
  int sum=0;
  for (int i = 1; i <= 10; i++) {
    if (i%2==0) {
      continue;
    }
    sum+=i;
  }
  printf("1부터 10까지 홀수의 합은 %d다.\n",sum );
  return 0;
}
