#include <iostream>
#include <iomanip>
#include <vector>

const int ROWS = 3,
          COLUMNS =5;
using Matrix = std::vector<std::vector<double>>;

void populate_matrix(Matrix &m) {
  std::cout << "Enter the " <<ROWS<<" rows of the matrix."<< '\n';
  for (int row=0; row<ROWS; row++) {
    std::cout << "Row #" <<row<<"(enter "<<COLUMNS<<" values):";
    for (int col=0; col<COLUMNS; col++) {
      std::cin >> m[row][col];
    }
  }
}
void print_matrix(const Matrix &m) {
  for (auto row : m) {
    for (auto elem : row) {
      std::cout << std::setw(5)<<elem ;
    }
    std::cout  << '\n';
  }
}


int main() {

  Matrix mat(ROWS,std::vector<double>(COLUMNS));
  populate_matrix(mat);
  print_matrix(mat);



  return 0;
}
