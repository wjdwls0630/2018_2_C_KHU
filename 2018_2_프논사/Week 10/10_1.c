#include <stdio.h>

int main() {
  int sum= 0, number=0;
  printf("1에서 10까지 합을 구합니다.\n" );
  do {
    number++;
    sum+=number;
  } while(number<10);

  printf("합은 %d입니다.\n",sum );
  return 0;
}
