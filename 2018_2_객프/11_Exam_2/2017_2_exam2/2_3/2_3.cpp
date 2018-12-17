#include <iostream>
#include <vector>
#include "TUser.hpp"


int main() {
  std::vector<TUser> UserList(5);
  int nT,lT;
  int totalUse;
  int nowUse=0;
  for (int i = 0; i < UserList.size(); i++) {
    std::cout <<i+1 <<"번 째 사람의 용변 필요 시간과 한계 시간을 입력하세요 :  ";
    std::cin >>nT>>lT ;
    UserList[i].setTime(nT, lT);
  }
  std::cout << "화장실의 개수를 입력하세요 : ";
  std::cin >> totalUse;
  int count;
  for (count = 0; count < totalUse; count++) {
    UserList[count].enter(nowUse);
  }
  bool result=true;
  bool Alldone=false;
  int more;
  while (!Alldone) {
    for (int i = 0; i < UserList.size(); i++) {
      if (UserList[i].getAlldone()) {
        std::cout <<i+1 <<"번 째 사람 이용완료" << '\n';
      } else{
        result=UserList[i].goTime(nowUse);
        if (result) {
          std::cout <<i+1 <<"번 째 사람 상황 : " << '\n';
          UserList[i].print();
          std::cout <<"결과 : " <<result << '\n'<<'\n';
        } else{
          std::cout <<i+1 <<"번 째 사람 상황 : " << '\n';
          UserList[i].print();
          std::cout <<"결과 : " <<result << '\n'<<'\n';
          std::cerr << "웁스, 사고가 났습니다. 개선이 필요합니다." << '\n';
          exit(100);
        }
      }
    }
    std::cout << "현재 이용 중인 화장실 개수 : " <<nowUse <<'\n';
    if (nowUse!=totalUse) {
      if (count<5) {
        for (more = 0; more < totalUse-nowUse; more++) {
          UserList[count+more].enter(nowUse);
          std::cout <<count+more+1 <<"번 째 사람 입장" << '\n';
        }
        count+=more;
      }
    }
    for (int i = 0; i < UserList.size(); i++) {
      Alldone=UserList[i].getAlldone();
      if (Alldone==false) {
        continue;
      }
    }
  }
  if (Alldone) {
    std::cout << "모두 무사히 용변을 마쳤습니다." << '\n';
  }


  return 0;
}
