#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void view(int userinput, int com_num);
string convert_to_rck(int n);
int main() {
  int userinput;
  int com_num;
  srand(time(NULL));
  do {
    std::cout << "가위 바위 보 중 하나를 쓰세요(가위 : 0, 바위 : 1, 보 : 2) : " ;
    std::cin >> userinput;
    com_num=rand()%3;
    if (userinput<0 || userinput>2) {
      std::cout << "0,1,2 수 중 하나를 입력하세요" << '\n';
      continue;
    }
    view( userinput,  com_num);
    if ((userinput-com_num>0 && userinput-com_num<2)||com_num-userinput==2) {
      std::cout<< " 이겼습니다" << '\n';
      break;
    } else if (userinput==com_num) {
      std::cout << " 비겼습니다" << '\n';
    } else {
      std::cout << " 졌습니다" << '\n';
      break;
    }
  } while(1);






  return 0;
}

void view(int userinput, int com_num) {
  std::cout << userinput << '\n';
  std::cout << com_num << '\n';
  std::cout << "사용자 : " <<convert_to_rck(userinput)<<" 컴퓨터 : "<<convert_to_rck(com_num);
}
string convert_to_rck(int n){
  string result;
  if (n==0) {
    result="가위";
  } else if (n==1) {
    result="바위";
  } else {
    result="보";
  }
  return result;
}
