#include <stdio.h>

int main() {
  char a[4]="";
  int i;
  char b[4]="1234";
  int correct=0;
  while (correct==0) {
    printf("비밀번호 4자리를 입력하시오! \n" );
    scanf("%s",a);
    for ( i = 0; i < 4; i++) {
      if(a[i]!=b[i]){
        break;
      }
    }
    if (i==4) {
      correct=1;
    } else{
      continue;
    }
  }
  printf("비밀번호가 일치합니다!\n" );
  return 0;
}
