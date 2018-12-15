#include <stdio.h>

int main() {
  int count=0;
  for (int i = 2; i <= 100; i++) {
    for (int j = 2; j <= i; j++) {
      if (i%j==0) {
        if (j==i) {
          count++;
          printf("%d%s",i,count%5?" " : "\n" );
        }
        break;
      }
    }
  }
  printf("\n\n" );
  return 0;
}
