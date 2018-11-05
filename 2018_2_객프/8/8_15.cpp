#include <iostream>
#include <iomanip>




void Make_Print_Matrix(int **table, int row, int col);



int main() {
  int row, col;
  std::cout << "Enter rows and cols num : ";
  std::cin >> row>>col;
  int **table ;

  Make_Print_Matrix(table,row,col);




  return 0;
}
void Make_Print_Matrix(int **table, int row, int col) {
  table=new int*[row];
  for (int i = 0; i < row; i++) {
    table[i]=new int [col];
    for (int j = 0; j < col; j++) {
      table[i][j]=(i+1)*(j+1);
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      std::cout <<std::setw(5) <<table[i][j] << ' ';
    }
    std::cout  << '\n';
  }
  for(int i = 0; i < row; ++i) {
    delete [] table[i];
  }
  delete [] table;
}
