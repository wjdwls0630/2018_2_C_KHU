#include <iostream>

int main(int argc, char const *argv[]) {
  int UserInput;
  std::cout << "정수를 입력하세요 : " ;
  std::cin >> UserInput;
  int TryNum=0;
  int Sum=0;
  while (UserInput>0) {
    TryNum++;
    Sum+=UserInput%10;
    UserInput /= 10;
  }
  std::cout << "자리수 : " <<TryNum<< '\n';
  std::cout << "각 자리의 합 : " <<Sum<< '\n';
  return 0;
}
