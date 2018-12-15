#include <stdio.h>

int main() {
  int sum= 0, number=0;
  do {
    number++;
    sum+=number;

  } while(sum<1000);
  
  printf("합이 1000보다 작은 최대합은 = %d\n",sum-number );
  printf("마지막으로 더해지는 자연수는 %d다.\n",number-1 );
  return 0;
}
