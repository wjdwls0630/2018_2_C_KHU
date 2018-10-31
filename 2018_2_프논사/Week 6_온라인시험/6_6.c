#include <stdio.h>

int main() {
  int num,origin_num;
  int hundred_mil=100000000;
  int ten_mil=10000000;
  int mil=1000000;
  int hundred_thd=100000;
  int ten_thd=10000;
  int thd=1000;
  int hundred=100;
  int ten=10;
  printf("정수를 입력하시오 :  " );
  scanf("%d",&num );
  origin_num=num;
  int num_hundred_mil=num/hundred_mil;
  num%=hundred_mil;
  int num_ten_mil=num/ten_mil;
  num%=ten_mil;
  int num_mil=num/mil;
  num%=mil;
  int num_hundred_thd=num/hundred_thd;
  num%=hundred_thd;
  int num_ten_thd=num/ten_thd;
  num%=ten_thd;
  int num_thd=num/thd;
  num%=thd;
  int num_hundred=num/hundred;
  num%=hundred;
  int num_ten=num/ten;
  num%=ten;
  printf("정수 %d : %d억%d천%d백%d십%d만%d천%d백%d십%d\n",origin_num,num_hundred_mil, num_ten_mil,num_mil,num_hundred_thd,num_ten_thd,num_thd,num_hundred,num_ten,num);
  printf("정수 %d : %d억%d%d%d%d만%d천%d백%d십%d\n",origin_num,num_hundred_mil, num_ten_mil,num_mil,num_hundred_thd,num_ten_thd,num_thd,num_hundred,num_ten,num);
  return 0;
}
