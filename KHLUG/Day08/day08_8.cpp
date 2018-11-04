#include <iostream>

int main() {
  int table[9][9];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      table[i][j]=(i+1)*(j+1);
    }
  }
  std::cout << "table[1]+4 : " <<table[1]+4 << '\n';
  std::cout << "*(table+1)+4 : " <<*(table+1)+4<< '\n' ;
  std::cout << "*(table[1]+4)" <<*(table[1]+4)<< '\n';
  std::cout << "*(*(table+1)+4)" <<*(*(table+1)+4)<< '\n';
  return 0;
}
