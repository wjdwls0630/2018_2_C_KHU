#include <stdio.h>

int main() {
  int userInput;
  int sum=0;
  printf("1~100사이의 정수를 입력하시오 : " );
  scanf("%d",&userInput );
  printf("\n" );
  for (int i = 1; i <= userInput; i++) {
    if (i%2==0) {
      if (i%3==0) {
        sum+=i;
      }
    }
  }
  printf("1부터 입력하신 수까지의 짝수이면서 3의 배수인 수들의 합은 %d입니다.\n",sum );
  return 0;
}
