#include <iostream>


void swap(int *a, int *b){
  int temp = *a;
  *a= *b;
  *b= temp;
}
void swap(char *a, char *b){
  char temp = *a;
  *a= *b;
  *b= temp;
}
void swap(double *a, double *b){
  double temp = *a;
  *a= *b;
  *b= temp;
}


int main(void){
  int num1=20, num2=30;
  char ch1='A', ch2='Z';
  double dbl1=1.1111, dbl2=5.5555 ;
  swap(&num1, &num2);
  std::cout <<num1<<' '<<num2<<'\n';
  swap(&ch1, &ch2);
  std::cout <<ch1<<' '<<ch2<<'\n';
  swap(&dbl1, &dbl2);
  std::cout <<dbl1<<' '<<dbl2<<'\n';

  return 0;
}
