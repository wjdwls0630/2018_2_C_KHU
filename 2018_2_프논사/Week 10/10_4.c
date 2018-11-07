#include <stdio.h>

int main() {
  int sum=0,number=0;

  while (1) {
    sum+=number;
    number++;
    if (number>10) {
      goto ex1;
    }
  }
  ex1:
  printf("1부터 10까지 합을 구합니다.\n" );
  printf("합은 %d입니다.\n",sum );
  return 0;
}
