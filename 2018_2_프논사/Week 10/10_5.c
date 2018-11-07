#include <stdio.h>

int main() {
  for (int i = 1; i <=100; i++) {
    for (int j = 1; j <= 9; j++) {
      printf("%dx%d=%2d\n",i,j,i*j );
      if (i==9&&j==9) {
        goto end;
      }
    }
  }
  end:
  printf("goto문을 빠져 나왔습니다.\n" );
  return 0;
}
