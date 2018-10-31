#include <stdio.h>

int main() {
  int input;
  printf("양수를 입력하세요.\n" );
  scanf("%d",&input );
  if (input>=0&&input%2==0) {
    printf("입력한 수 %d은 양수이며 짝수입니다\n",input );
  } else if (input>=0&&input%2!=0) {
    printf("입력한 수 %d은 양수이며 홀수입니다\n",input );
  } else {
    printf("입력한 수 %d은 음수입니다\n",input );
  }


  return 0;
}
