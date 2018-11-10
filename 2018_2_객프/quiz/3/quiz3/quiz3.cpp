#include <iostream>

using namespace std;
void checknum(int user_num);


int main() {
  int user_num;



  while (1) {
    std::cout << "숫자를 입력하세요:" ;
    std::cin >> user_num;
    if (user_num>=20) {
      checknum(user_num);
      break;
    } else {
      std::cout << "다시 입력하세요." << '\n';
      continue;
    }
  }

  return 0;
}

void checknum(int user_num) {
  int number=1,count=0;
  if (user_num%2==0) {
    while (number<=user_num) {
      if (number%2==0) {
        if (number==user_num) {
          std::cout << number ;
          count++;
        } else {
          std::cout << number <<",";
          count++;
        }
      }
      number++;
      }
      std::cout<<'\n' << "짝수의 개수는 " <<count<<"개 입니다."<<'\n';
    }
  else {
    while (number<=user_num) {
      if (number%2==0) {
        if (number==user_num-1) {
          std::cout << number ;
          count++;
        } else {
          std::cout << number <<",";
          count++;
        }
      }
      number++;
      }
      std::cout<<'\n' << "짝수의 개수는 " <<count<<"개 입니다."<<'\n';
    }
  }
