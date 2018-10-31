#include <iostream>

int main(int argc, char const *argv[]) {
  int month;
  std::cout << "월을 입력하세요 : ";
  std::cin >> month;
  switch (month) {
    case 12:
    case 1:
    case 2:
    std::cout << "겨울입니다." << '\n';
    break;
    case 3:
    case 4:
    case 5:
    std::cout << "봄입니다." << '\n';
    break;
    case 6:
    case 7:
    case 8:
    std::cout << "여름입니다." << '\n';
    break;
    case 9:
    case 10:
    case 11:
    std::cout << "가을입니다." << '\n';
    break;
    default :
    std::cout << "지구가 아닌 듯." << '\n';

  int grade ;
  std::cout << "성적을 입력하세요 : " ;
  std::cin >> grade;
  switch (grade) {
    case 5:
    std::cout << "A" << '\n';
    break;
    case 4:
    std::cout << "B" << '\n';
    break;
    case 3:
    std::cout << "C" << '\n';
    break;
    case 2:
    std::cout << "D" << '\n';
    break;
    case 1:
    std::cout << "F" << '\n';
    break;
    default :
    std::cout << "E" << '\n';
  }

  }
  return 0;
}
