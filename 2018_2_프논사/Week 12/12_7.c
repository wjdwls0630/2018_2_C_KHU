#include <stdio.h>

int main() {
  int x[2][2][5]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 5; k++) {
        printf("x[%d][%d][%d] = %d\n",i,j,k,x[i][j][k] );
      }
    }
  }

  return 0;
}
