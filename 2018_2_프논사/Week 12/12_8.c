#include <stdio.h>

int main() {
  int mult[]={4,2,5,1,3};
  int result=1;
  for (int i = 0; i < 5; i++) {
    result*=mult[i];
  }

  printf("제시된 모든 원소의 곱은 %d\n",result );

  return 0;
}
