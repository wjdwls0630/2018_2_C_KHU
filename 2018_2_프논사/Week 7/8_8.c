#include <stdio.h>

int main() {
  int input;
  printf("영어로 인사하는 법을배우겠습니다.\n");
  printf("아침 인사는 1번을 누르세요.\n");
  printf("점심 인사는 2번을 누르세요.\n");
  printf("저녁 인사는 3번을 누르세요.\n");
  scanf("%d", &input);
  switch (input) {
    case 1:
     printf("Good Morning!!\n" );
     break;
    case 2:
     printf("Good Afternoon!!\n" );
     break;
    case 3:
     printf("Good Night!!\n" );
     break;
    default :
     printf("잘못 입력했습니다. 1~3사이의 숫자를 입력하세요.\n" );
  }
  return 0;
}
