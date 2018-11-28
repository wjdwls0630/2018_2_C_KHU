#include <stdio.h>

int main() {
  int a;
  printf("정수 값 1개를 입력하시오.\n" );
  scanf("%d",&a );
  printf("입력받은 정수의 값은 %d이다.\n",a );
  printf("입력받은 정수의 주소는 %p이다.\n",&a );
  return 0;
}
