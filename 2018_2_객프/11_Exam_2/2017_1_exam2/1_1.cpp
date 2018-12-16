#include <iostream>
#include "Statistics.hpp"
int main() {
  Statistics<int> stat;
  if (!stat) {
    std::cout << "현재 통계 데이터가 없습니다. " << '\n';
  }
  int x[5];
  std::cout << "5개의 정수를 입력하세요 >>"<<'\n';
  for (int i = 0; i < 5; i++) {
    std::cin >> x[i];
  }
  for (int i = 0; i < 5; i++) {
    stat<<x[i];
  }
  stat<<50<<100;
  ~stat;
  float avg;
  stat>>avg;
  std::cout << "avg = " <<avg <<'\n';

  try{
    stat<<50<<50<<50<<50<<50;
  }catch(std::exception &ex){
    std::cout << ex.what() << '\n';
  }


  return 0;
}
