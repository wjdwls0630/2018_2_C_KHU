#include <iostream>
#include <iomanip>

int main() {
  int size;
  std::cout << "Please enter the table size : "; //The number of columns and rows in the table
  std::cin >> size;
  //print size x size multiplication table
  int row =1;
  while (row<=size) {
    int column =1;
    while (column<=size) {
      std::cout <<std::setw(4)<<row*column;
      column++;
    }
    row++;
    std::cout  << '\n';
  }


  return 0;
}
