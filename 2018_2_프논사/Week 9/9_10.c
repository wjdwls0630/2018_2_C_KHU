#include <stdio.h>

int main() {
  int sum= 0, number=1;
  printf("1에서 10까지 합을 구합니다.\n" );
  while (number<=10) {
    sum+=number;
    number++;
  }
  printf("합은 %d입니다.\n",sum );
  return 0;
}
