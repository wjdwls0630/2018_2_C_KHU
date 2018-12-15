#include <stdio.h>

int main() {
  char str[4]={'A','B','C','\0'};
  char student[]="John";
  printf("문자열을 동시에 출력하는 경우 \n" );
  printf("학생의 이름은 %s이다.\n\n",student );
  printf("문자열을 한 글자씩 출력하는 경우\n" );
  for (int i = 0; str[i]!='\0'; i++) {
    printf("%c\n",str[i] );
  }
  return 0;
}
