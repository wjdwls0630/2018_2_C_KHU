#include <stdio.h>
int SumTwo(int x, int y) {
  return x+y;
}
int main() {
  int x=10,y=5;
  int value;
  value=SumTwo(x, y);
  printf("두 수의 합 : %d\n",value );
  return 0;
}
