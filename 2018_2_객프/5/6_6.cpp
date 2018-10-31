#include <iostream>
#include <iomanip>

int main() {
  int size; //the number of rows and columns in the table
  std::cout << "Please enter the table size: ";
  std::cin >> size;
  //Print a size x size multiplication table

  //First, print heading
  std::cout <<std::setw(6)<< " " ;
  for (int column = 1; column <=size; column++) {
    std::cout << std::setw(4) <<column;
  }
  std::cout << '\n';
  //print line separator
  std::cout <<std::setw(6) <<"+" ;
  for (int column = 1; column <= size; column++) {
    std::cout << "----";
  }
  std::cout  << '\n';
  //print table contents
  for (int row = 1; row <= size; row++) {
    std::cout << std::setw(4) <<row<<" |";
    for (int column = 1; column <= size; column++) {
      std::cout << std::setw(4) <<row*column;
    }
    std::cout  << '\n';
  }

  return 0;
}
