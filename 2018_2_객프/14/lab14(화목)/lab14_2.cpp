#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
  srand((unsigned)time(NULL));
  std::vector<int> list((rand()%100+1));
  for (int i = 1; i <= list.size(); i++) {
    list[i]=i;
  }
  int cnt=-1;
  while (1) {
    cnt++;
    try{
      list.at(cnt);
    } catch(std::exception &e){
      std::cout << "현재 list는 "<<list.size()<<"의 크기를 가지고 있다." << '\n';
      break;
    }
  }
  return 0;
}
