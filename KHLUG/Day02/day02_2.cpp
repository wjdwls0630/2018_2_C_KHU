#include <iostream>

int main(int argc, char const *argv[]) {
  int month;
  std::cout << "월을 입력하세요 : " ;
  std::cin >> month;
  if ((month>=3)&&(month<6)) {
    std::cout << "봄입니다." << '\n';
  } else if ((month>=6)&&(month<9)) {
    std::cout << "여름입니다." << '\n';
  } else if ((month>=9)&&(month<12)) {
    std::cout << "가을입니다." << '\n';
  } else if (month==12||((month>=1)&&(month<=2))) {
    std::cout << "겨울입니다." << '\n';
  } else {
    std::cout << "지구가 아닌듯;;" << '\n';
  }
  return 0;
}
