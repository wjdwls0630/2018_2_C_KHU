#include <iostream>

int main(int argc, char const *argv[]) {
  int userinput;
  std::cout << "숫자를 입력하세요 : " ;
  std::cin >> userinput;
  if (userinput%2==0) {
    std::cout << "짝수입니다." << '\n';
    if (userinput%3==0) {
      std::cout << "6의 배수입니다." << '\n';
    }
  }else{
    std::cout << "홀수입니다." << '\n';
  }
  return 0;
}
