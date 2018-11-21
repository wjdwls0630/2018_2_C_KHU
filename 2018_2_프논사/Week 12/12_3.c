#include <stdio.h>

int main() {
  int a[2][3]={{15,20,30},{35,40,45}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("a[%d][%d] = %d\n",i,j,a[i][j] );
    }
  }
  return 0;
}
