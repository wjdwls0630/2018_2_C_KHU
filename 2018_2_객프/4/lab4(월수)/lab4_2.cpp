#include <iostream>

int main() {
  int curret_temp, set_temp;
  std::cout << "설정 온도를 입력하세요 : ";
  std::cin >> set_temp;
  std::cout << "현재 온도를 입력하세요 : ";
  std::cin >> curret_temp;
  if (curret_temp>set_temp-2 && curret_temp< set_temp+2) {
    std::cout << "현상 유지" << '\n';
  } else if (curret_temp-set_temp >= 2 && curret_temp-set_temp<4) {
    std::cout << "에어콘 약하게 작동" << '\n';
  } else if (curret_temp-set_temp>=4) {
    std::cout << "에어콘 강하게 작동" << '\n';
  } else if (curret_temp-set_temp <= -2 && curret_temp-set_temp> -4) {
    std::cout << "히터 약하게 작동" << '\n';
  } else if(curret_temp-set_temp <= -4){
    std::cout << "히터 강하게 작동" << '\n';
  }

  return 0;
}
