#include <iostream>
#include <iomanip>
#include <vector>


using Matrix = std::vector<std::vector<int>>;

void print(const Matrix &m);

int main() {
  Matrix table(9,std::vector<int>(9));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      table[i][j]=(i+1)*(j+1);
    }
  }
  print(table);
  return 0;
}

void print(const Matrix &m) {
  for (auto row : m) {
    for (auto elem : row) {
      std::cout <<std::setw(5) <<elem ;
    }
    std::cout  << '\n';
  }
}
