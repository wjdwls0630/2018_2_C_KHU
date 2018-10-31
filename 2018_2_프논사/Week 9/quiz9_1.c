#include <stdio.h>

int main() {
  for (int i = 5; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      printf("*" );
    }
    printf("\n\n");
  }

  for (int i = 3; i >0 ; i--) {
    for (int j =0; j < 2*i-1; j++) {
      printf("*" );
    }
    printf("\n\n");
  }
  /*
  for (int i = 5; i >0 ; i-=2) {
    for (int j =0; j < i; j++) {
      printf("*" );
    }
    printf("\n\n");
  }*/

  return 0;
}
