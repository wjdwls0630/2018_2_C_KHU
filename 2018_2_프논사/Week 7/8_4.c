#include <stdio.h>

int main() {
  int jumsu;
  printf("0점과 100점 사이의 점수르 입력하세요.\n" );
  scanf("%d",&jumsu );
  if (jumsu>=0&&jumsu<=100) {
    printf("입력한 점수는 %d점입니다.\n",jumsu );
  } else {
    printf("0점에서 100점 사이를 입력하셔야 합니다.\n");
  }
  if (jumsu>=90) {
    printf("%d점은 A학점입니다.\n", jumsu);
  } else if (jumsu>=80) {
    printf("%d점은 B학점입니다.\n", jumsu);
  } else if (jumsu>=70) {
    printf("%d점은 C학점입니다.\n", jumsu);
  } else if (jumsu>=60) {
    printf("%d점은 D학점입니다.\n", jumsu);
  } else {
    printf("%d점은 F학점입니다.\n", jumsu);
  }
  return 0;
}
