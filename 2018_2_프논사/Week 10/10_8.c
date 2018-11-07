#include <stdio.h>

int main() {

  for (int i = 1; i <= 10; i++) {
    if (i%2==0&&i%3==0) {
      continue;
    }
    printf("%d ",i );
  }
  printf("\n" );
  return 0;
}
