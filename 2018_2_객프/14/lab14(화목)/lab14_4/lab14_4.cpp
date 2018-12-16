#include <iostream>
#include "RandomMatrix.hpp"

using rm=RandomMatrix;
int main() {
  rm a;
  Matrix<int> loadTable;
  int inRow, inCol;
  std::string inName;
  std::cout << "파일 이름 : " ;
  std::cin >> inName;

  try{
    loadTable.loadMatrixFromFile(inName);
    std::cout << "출력할 행의 크기 : " ;
    std::cin >> inRow;
    std::cout << "출력할 열의 크기 : " ;
    std::cin >> inCol;
    loadTable.print(inRow, inCol);
  } catch(std::exception &ex){
   std::cerr << ex.what() << '\n';
  }






  return 0;
}
