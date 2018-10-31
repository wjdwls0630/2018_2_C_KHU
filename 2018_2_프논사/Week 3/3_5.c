#include "stdio.h"

int main(void) {
  short a =32767,b=2,c;
  unsigned short d;
  c=a+b;
  d=a+b;
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  return 0;
}
//구름 IDE - 오버플로우
