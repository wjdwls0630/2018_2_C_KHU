#include <iostream>
#include <cmath>

void jolly_jumper(int num1,int num2,int num3,int num4,int num5);

int main() {
  int num1,num2,num3,num4,num5;
  std::cin >> num1>>num2>>num3>>num4>>num5;
  jolly_jumper(num1, num2, num3, num4, num5);


  return 0;
}

void jolly_jumper(int num1,int num2,int num3,int num4,int num5) {
  int a1=abs(num1-num2);
  int a2=abs(num2-num3);
  int a3=abs(num3-num4);
  int a4=abs(num4-num5);
  int sum = a1+a2+a3+a4;
  //4+3+2+1=10
  if (sum==10) {
    std::cout << "Jolly" << '\n';
  } else {
    std::cout << "Not jolly" << '\n';
  }
}
