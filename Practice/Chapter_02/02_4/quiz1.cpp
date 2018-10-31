#include <iostream>

int PlusOne_r(int &ref) {
  ref++;
  return ref;
}
int SwapSign_r(int &ref){

  if (ref>0) {
    ref=ref-2*ref;

  } else if (ref <0) {
    ref=abs(ref);

  }
  return ref;
}
int PlusOne_p(int *ptr) {
  *ptr+=1;
  return *ptr;
}
int SwapSign_p(int *ptr) {
  *ptr*=-1;
  return *ptr;
}
/*void InverSign(int &ref) {
  ref *= -1;
} 책 답안*/

int main(void) {
  while (1) {
    int user_number;
    std::cout << "숫자를 입력하세요(종료는 -1 입력): " << '\n';
    std::cin >> user_number;
    if (user_number==-1) {
      break;
    }else{
      int user_choose;
      std::cout << "포인터(1) or 참조자(2) : " << '\n';
      std::cin >> user_choose;
      if (user_choose==1) {
        std::cout << "입력한 숫자 : " << user_number<< '\n';
        std::cout << "1 더하기  : " <<PlusOne_p(&user_number)<< '\n';
        std::cout << "형 변환 : " <<SwapSign_p(&user_number)<< '\n';
      }else if(user_choose==2){
        std::cout << "입력한 숫자 : " << user_number<< '\n';
        std::cout << "1 더하기  : " <<PlusOne_r(user_number)<< '\n';
        std::cout << "형 변환 : " <<SwapSign_r(user_number)<< '\n';
      }else{
        std::cout << "잘못 입력하셨습니다. 처음으로 돌아갑니다." << '\n';
        continue;
      }
    }
  }
  std::cout << "프로그램을 종료합니다." << '\n';
  return 0;
}
