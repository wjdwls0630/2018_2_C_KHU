#include <stdio.h>

int main() {
  int a[20];
  for (int i = 0; i < 20; i++) {
    printf("%2d 번째 정수 : " ,i+1);
    scanf("%d",a+i );
  }
  printf("\n" );

  int num_count_list[10];
  int count;
  for (int i = 0; i < 10; i++) {
    count=0;
    for (int j = 0; j < 20; j++) {
      if (i==a[j]) {
        count++;
      }
    }
    num_count_list[i]=count;
  }


  int target=0;
  for (int i = 0; i < 10; i++) {
    if (target<num_count_list[i]) {
      target=num_count_list[i];
    }
  }
  for (int i = 0; i < 10; i++) {
    if (target==num_count_list[i]) {
      printf("정수 :%2d,  최대 빈도수 :%2d회 \n",i,target );
    }
  }





  return 0;
}
