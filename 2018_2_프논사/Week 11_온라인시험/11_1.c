#include <stdio.h>

int main() {
  int userInput;
  printf("1~100사이의 정수를 입력하시오 : " );
  scanf("%d",&userInput );
  printf("\n" );

  int lineCount=0;
  for (int i = userInput; i >0 ; i--) {
    if (i%2==0) {
      printf("%3d",i );
      lineCount++;
      if (lineCount==10) {
        printf("\n" );
      }
    }

  }

  return 0;
}
