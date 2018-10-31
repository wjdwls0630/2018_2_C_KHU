#include <stdio.h>

int main() {
  int sum= 0, number=0;

  while (sum<300) {
    number++;
    sum+=number;

  }
  printf("합이 300이 넘는 a의 최솟값은 %d다.\n",number );
  printf("sum = %d\n", sum);
  return 0;
}
