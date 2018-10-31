#include <stdio.h>

int main(void) {
  char name[20];
  printf("당신의 이름을 입력하세요 : ");

  gets(name);
  puts(name);

  return 0;
}
