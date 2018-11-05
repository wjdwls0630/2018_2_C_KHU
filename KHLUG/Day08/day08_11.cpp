#include <iostream>
#include <fstream>

//macOS
#include "/usr/include/malloc/malloc.h"
#define _msize malloc_size
/*
Windows you just write

#include<malloc.h>

and use

_msize()

function when you want to know about memory size of dynamic array.

*/

int main() {
  int **table;
  int row,col;
  std::cout << "단순한 데이터 베이스를 만듭니다." << '\n';
  std::cout << "> 몇 행 입니까? ";
  std::cin >> row;
  table=new int*[row];

  for (int i = 0; i < row; i++) {
    std::cout <<i <<"행은 몇 개의 원소가 들어있습니까? ";
    std::cin >> col;
    table[i]=new int[col];
  }
  std::cout << _msize(table) << '\n';
  std::cout << sizeof(row) << '\n';




  std::ofstream ofs;
  ofs.open("day08_11.txt");
  std::cout << "데이터를 입력하시오." << '\n';
  for (int i = 0; i <_msize(table)/sizeof(row) ; i++) {
    std::cout << i<<"행: " ;
    ofs<< i<<"행: " ;
    for (size_t j = 0; j < sizeof(table[i])/sizeof(int); j++) {
      std::cin >> table[i][j];
      ofs<<table[i][j]<<' ';
    }
    ofs<<'\n';
  }
  ofs.close();
  std::cout << "저장되었습니다." << '\n';

  std::ifstream ifs;
  char cInput;
  ifs.open("day08_11.txt");

  while (ifs.get(cInput)) {
    std::cout << cInput;
  }





  return 0;
}
