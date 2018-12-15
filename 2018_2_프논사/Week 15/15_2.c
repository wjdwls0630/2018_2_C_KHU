#include <stdio.h>
int factorial(int n);
int main() {
  int fact_num;
  fact_num=factorial(10);
  printf("10 팩토리얼 : %d\n", fact_num);
  return 0;
}
int factorial(int n) {
  if (n==1) {
    return 1;
  }
  return n*factorial(n-1);
}
