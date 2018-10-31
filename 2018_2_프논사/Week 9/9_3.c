#include <stdio.h>

int main() {
  for (int i = 0; i < 5; i++) {
    printf("**********\n" );
  }
  printf("\n\n" );

  for (int i = 1; i < 10; i+=2) {
    printf("**********\n" );
  }
  printf("\n\n" );

  for (int i = 10; i > 0; i-=2) {
    printf("**********\n" );
  }
  printf("\n\n" );
  return 0;
}
