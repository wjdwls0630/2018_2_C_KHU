#include <iostream>

int val=100;
int SimpleFunc(void){
  int val=20;
  val+=3;
  ::val+=7;
  return val;

}

int main() {
  std::cout << "전역변수 val"<<val << '\n';
  std::cout << "지역변수 val"<<SimpleFunc()<< '\n';
  return 0;
}
