#include <stdio.h>

int main() {
  int a, b,c;
  a=10; b=20; c=30;

  a=++b;
  c=b++;

  printf("a = %d, b = %d, c = %d\n\n",a,b,c );


  return 0;
}
