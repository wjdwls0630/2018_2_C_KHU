#include <stdio.h>

int main() {

  int input, index;
  printf("임의의 정수를 입력하세요 : " );
  scanf("%d",&input );

  for (int i = 1; i <= input; i++) {
    index=0;
    for (int j = 1; j <= i; j++) {
      if (i%j==0) {
        index++;
      }

    }
    if (index==2) {
      printf("%d\n",i);
    }
  }
  printf("\n\n" );




  return 0;
}
