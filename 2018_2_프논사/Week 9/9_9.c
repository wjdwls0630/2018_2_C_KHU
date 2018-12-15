#include <stdio.h>

int main() {
  int j;
  int count=0;
  for (int i = 2; i <= 100; i++) {
    for (j = 2; i%j; j++);
    if (j==i) {
      count++;
      printf("%d%s",i,count%5?" " : "\n" );
    }
  }
  return 0;
}
