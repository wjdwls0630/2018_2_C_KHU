#include <stdio.h>

int main() {
  int input;
  printf("1~9사이의 정수를 입력하시오 : " );
  scanf("%d",&input );

  for (int i = 0; i <= input; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d",j+1 );
    }
    printf("\n\n" );
  }


  return 0;
}
