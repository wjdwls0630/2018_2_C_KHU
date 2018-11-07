#include <stdio.h>

int main() {
  int sum= 0, number=0;
  do {
    number+=7;
    sum+=number;
    printf("%d   %d\n",sum,number );

  } while(sum<100);


  printf("누적합 : %d  배수 : %d\n",sum,number);
  return 0;
}
