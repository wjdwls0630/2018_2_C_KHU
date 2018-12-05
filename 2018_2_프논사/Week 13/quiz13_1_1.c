#include <stdio.h>

int main() {
  int frequency[10]={0};
  int data[20];
  for (int i = 0; i < 20; i++) {
    printf("%2d 번째 정수 : " ,i+1);
    scanf("%d",&data[i] );
    frequency[data[i]]++; //0~9까지니까 이런식으로 해도 상관없다.
  }
  printf("\n" );
  int max=frequency[0];
  for (int i = 0; i < 10; i++) {
    if (max<frequency[i]) {
      max=frequency[i];
    }
  }
  for (int i = 0; i < 10; i++) {
    if (max==frequency[i]) {
      printf("정수 :%2d,  최대 빈도수 :%2d회 \n",i,max );
    }
  }

  return 0;
}
