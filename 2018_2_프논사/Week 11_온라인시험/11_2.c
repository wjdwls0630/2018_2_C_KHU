#include <stdio.h>

int main() {
  int i;
  for (int i = 1; i < 10; i++) {
    printf(" %d 단  ",i );
    if(i%3==0){
      printf("\n" );
      for (int j = 1; j <10; j++) {
        for (int k = i-2; k < i+1; k++) {
          printf("%dx%d=%2d ",k,j,k*j );
        }
        printf("\n" );
      }
      printf("\n" );
    }
  }
  return 0;
}
