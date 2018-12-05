#include <stdio.h>

int main() {
  char secret[]="1234";
  char input[10];
  int number=0;
  while (number!=4) {
    number=0;
    printf("비밀번호 4자리를 입력하시오! \n" );
    scanf("%s",input);
    for (int i = 0; i < 4; i++) {
      if (input[i]==secret[i]) {
        number++;
      }
    }
  }
  printf("비밀번호가 일치합니다!\n" );
  return 0;
}
