#include <stdio.h>
int Integral(int start, int end);
int main() {
  int result=0;
  printf("함수를 사용하지 않고 합을 구함\n" );
  for (int i = 1; i <= 10; i++) {
    result+=i;
  }
  printf("1부터 10까지 합은 %d다.\n",result);
  result=0;
  for (int i = 7; i <= 17; i++) {
    result+=i;
  }
  printf("7부터 17까지 합은 %d다.\n",result);
  printf("\n함수를 사용하여 합을 구함\n" );
  printf("1부터 10까지 합은 %d다.\n",Integral(1,10));
  printf("7부터 17까지 합은 %d다.\n",Integral(7,17));
  return 0;
}
int Integral(int start, int end) {
  int sum=0;
  for (int i = start; i <= end; i++) {
    sum+=i;
  }
  return sum;
}
