#include <stdio.h>

int main() {
  for (int i = 0; i <7; i++) {
    for (int j = 1; j <=i+1; j++) {
      printf("%3d",(7*i)+j );
    }
    printf("\n\n" );
  }


  return 0;
}
