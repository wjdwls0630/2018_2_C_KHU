#include <stdio.h>

int main() {
  int input;
  printf("정수를 입력하세요.\n" );
  scanf("%d",&input );
  (input>=0)?printf("x는 양수입니다.\n"):printf("x는 음수입니다.\n");
  return 0;
}
