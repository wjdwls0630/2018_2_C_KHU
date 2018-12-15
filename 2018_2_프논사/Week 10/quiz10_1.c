#include <stdio.h>

int main() {
  int number,count=0;
  printf("1~100사이의 정수를 입력하시오 : " );
  scanf("%d",&number );
  for (int i = number; i >0; i--) {
    printf("%3d",i );
    count++;
    if (count==10) {
      printf("\n" );
    }
  }
  return 0;
}
