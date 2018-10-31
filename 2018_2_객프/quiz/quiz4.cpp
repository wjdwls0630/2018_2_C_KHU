#include <iostream>



int biggest(int num1, int num2, int num3);
int factorial(int n);
int main() {
  int num1,num2,num3;
  std::cout << "enter 3 numbers : ";
  std::cin >> num1>>num2>>num3;
  int biggest_num=biggest( num1,  num2,  num3);
  std::cout << "the biggest number is : " <<biggest_num<< '\n';
  std::cout << "result of factorial is : " <<factorial(biggest_num)<< '\n';



  return 0;
}

int biggest(int num1, int num2, int num3) {
  int result;
  if (num1>=num2&&num2>=num3) {
    result=num1;
  } else if(num1>=num3&&num3>=num2){
    result=num1;
  } else if (num2>=num1&&num1>=num3) {
    result=num2;
  } else if(num2>=num3&&num3>=num1) {
    result=num2;
  } else if (num3>=num1&&num1>=num2) {
    result=num3;
  } else if(num3>=num2&&num2>=num1) {
    result=num3;
  }
  return result;
}

int factorial(int n) {
  if (n==0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }

}
