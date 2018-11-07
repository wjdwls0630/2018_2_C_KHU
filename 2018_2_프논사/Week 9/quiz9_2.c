#include <stdio.h>

int main() {
  for (int i = 1; i < 10; i++) {
    printf(" %d 단  ",i );
  }
  printf("\n" );
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (j*i>=10) {
        printf("%dx%d=%d ",j,i,j*i );
      } else{
        printf("%dx%d= %d ",j,i,j*i );

      }
      //printf("%dx%d=%2d ",j,i,j*i );

    }
    printf("\n" );
  }
  return 0;
}
