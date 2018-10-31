#include <iostream>

int main(int argc, char const *argv[]) {
  int a  ;
  int b;
  std::cout << "두 개의 숫자를 입력하세요 : " ;
  std::cin >> a>>b;
  if (a>b) {
    std::cout << "a가 더 크군" << '\n';
  }else if(a>5){
    std::cout << "a도 꽤 크군" << '\n';
  }else{
    std::cout << "a가 크지 않군" << '\n';
  }
  return 0;
}
