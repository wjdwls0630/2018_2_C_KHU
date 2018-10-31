#include <iostream>

int main() {
  int userinput=0, sum =0, count=0;
  double average;
  std::cout << "숫자를 입력하시오: " ;
  std::cin >> userinput;
  while (userinput != -100) {

    sum+=userinput;
    count++;
    std::cout << "숫자를 입력하시오: " ;
    std::cin >> userinput;



  }
  average = (double)sum/(count);
  std::cout << "평균은 " <<average<<" 입니다."<< '\n';
  return 0;
}
