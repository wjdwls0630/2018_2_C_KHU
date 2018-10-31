#include <iostream>
int Fib(int n) {
  int result;
  if (n==1) {
    result= 1;
  }else if(n<=0){
    result= 0;
  }else{
    result=Fib(n-1)+Fib(n-2);
  }
  return result;
}
int main(int argc, char const *argv[]) {
  int UserInput;
  std::cout << "정수를 입력하세요 : " ;
  std::cin >> UserInput;
  int fibnumber=1;
  int n=1;
  while (fibnumber<UserInput) {
    std::cout << fibnumber << ' ';
    n++;
    fibnumber=Fib(n);
  }



  return 0;
}
