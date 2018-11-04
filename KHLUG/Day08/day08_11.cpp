#include <iostream>
#include <fstream>

int main() {
  int **table;
  int row,col;
  std::cout << "단순한 데이터 베이스를 만듭니다." << '\n';
  std::cout << "> 몇 행 입니까? ";
  std::cin >> row;
  table=new int*[row];
  std::cout << sizeof(*table)<<sizeof(int) << '\n';
  for (int i = 0; i < row; i++) {
    std::cout <<i <<"행은 몇 개의 원소가 들어있습니까? ";
    std::cin >> col;
    table[i]=new int[col];
  }
  std::cout << sizeof(table[0])<<sizeof(int) << '\n';

  std::ofstream ofs;
  ofs.open("day08_11.txt");
  std::cout << "데이터를 입력하시오." << '\n';
  for (int i = 0; i <sizeof(table)/sizeof(int) ; i++) {
    std::cout << i<<"행: " ;
    ofs<< i<<"행: " ;
    for (size_t j = 0; j < sizeof(table[i])/sizeof(int); j++) {
      std::cin >> table[i][j];
      ofs<<table[i][j]<<' ';
    }
    ofs<<'\n';
  }
  std::cout << "저장되었습니다." << '\n';





  return 0;
}
