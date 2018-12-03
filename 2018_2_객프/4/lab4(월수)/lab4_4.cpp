#include <iostream>

int main() {
  float curret_temp=24, set_temp;
  std::cout << "설정 온도를 입력하세요 : ";
  std::cin >> set_temp;
  while (set_temp != -100) {

    if (curret_temp>set_temp-2 && curret_temp< set_temp+2) {
      std::cout << "현상 유지" << '\n';
      std::cout <<"현재 온도는 "<< curret_temp <<"도 입니다."<< '\n';
    } else if (curret_temp-set_temp >= 2 && curret_temp-set_temp<4) {
      std::cout << "에어콘 약하게 작동" << '\n';
      curret_temp -= 0.4;
      std::cout <<"현재 온도는 "<< curret_temp <<"도 입니다."<< '\n';
    } else if (curret_temp-set_temp>=4) {
      std::cout << "에어콘 강하게 작동" << '\n';
      curret_temp -= 0.8;
      std::cout <<"현재 온도는 "<< curret_temp <<"도 입니다."<< '\n';
    } else if (curret_temp-set_temp <= -2 && curret_temp-set_temp> -4) {
      std::cout << "히터 약하게 작동" << '\n';
      curret_temp += 0.6;
      std::cout <<"현재 온도는 "<< curret_temp <<"도 입니다."<< '\n';
    } else if(curret_temp-set_temp <= -4){
      std::cout << "히터 강하게 작동" << '\n';
      curret_temp += 1.2;
      std::cout <<"현재 온도는 "<< curret_temp <<"도 입니다."<< '\n';
    }
    std::cout << "설정 온도를 입력하세요 : ";
    std::cin >> set_temp;
  }


  return 0;
}
