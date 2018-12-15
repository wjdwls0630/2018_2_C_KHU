#include <stdio.h>

int main() {
  int number,count=0;
  printf("1~9사이의 정수를 입력하시오 : " );
  scanf("%d",&number );
  for (int i = 0; i <number; i++) {
    for (int j = number; j > i; j--) {
      printf("%d",j );
    }
    printf("\n" );
  }
  return 0;
}
