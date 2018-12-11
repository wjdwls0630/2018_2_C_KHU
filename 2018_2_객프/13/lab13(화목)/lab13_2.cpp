#include <iostream>
#include <functional>
#include <algorithm>

int main() {
  std::string user;
  std::string comp1,comp2,comp3,comp4;
  std::cout << "문자열 하나를 입력해주세요 : ";
  std::cin >> user;
  std::cout << "입력하신 문자열의 역순 : " ;

  //0번 방법
  std::for_each(user.rbegin(),user.rend(),[](char x)->void {std::cout << x ;});
  std::cout << '\n';

  std::function<void(std::string)> Compare=[user](const std::string &comp)->void{
    if (comp==user) {
      std::cout << "이 문자는 회문입니다." << '\n';
    } else{
      std::cout << "이 문자는 회문이 아닙니다." << '\n';
    }
  };

  //1번 방법
  comp1=user;
  std::reverse(std::begin(comp1),std::end(comp1));
  std::cout << "1번 comp 출력 : " << comp1<<'\n';
  Compare(comp1);

  //2번 방법
  comp2=user;
  std::reverse_copy(std::begin(user), std::end(user),std::begin(comp2));
  std::cout << "2번 comp 출력 : " << comp2<<'\n';
  Compare(comp2);

  //3번 방법
  comp3=user;
  std::copy(user.rbegin(),user.rend(),std::begin(comp3));
  //copy는 메모리가 할당되있는 상태에서 복사 가능하다.
  std::cout << "3번 comp 출력 : " << comp3<<'\n';
  Compare(comp3);

  //4번 방법
  comp4=user;

  std::string::iterator comp4_iter=std::begin(comp4);
  for (auto i = std::end(user)-1; i != std::begin(user)-1; i--) {
    *comp4_iter=*i;
    comp4_iter++;
  }
  std::cout << "4번 comp 출력 : " << comp4<<'\n';
  Compare(comp4);





  return 0;
}
