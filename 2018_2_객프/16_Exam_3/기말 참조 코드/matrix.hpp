#ifndef Matrix_hpp
#define Matrix_hpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "FileNotFoundException.hpp"
#include "OutOfRange.hpp"


template <typename T>
class Matrix : public std::vector<std::vector<T>>  {
private:
  std::vector<std::vector<T>> table;
public:
  Matrix(const int &row=10,const int &col=10);
  std::vector<std::vector<T>> &getMatrix();
  void print(const int &row=10,const int &col=10);
  void loadMatrixFromFile(std::string &fileName);
};
template <typename T>Matrix<T>::Matrix(const int &row,const int &col){
  std::vector<T> temp(col);
  for (int i = 0; i < row; i++) {
    table.push_back(temp);
  }
  temp.clear();
}

template <typename T> std::vector<std::vector<T>>& Matrix<T>::getMatrix() { return this->table ; }
template <typename T> void Matrix<T>::print(const int &inRow,const int &inCol){
  try{
    std::vector<int> tempRow(this->table[0].size());
    for (int i = 0; i < inRow; i++) {
      tempRow=this->table.at(i);
      for (int j = 0; j < inCol; j++) {
        std::cout.width(3);
        std::cout <<tempRow.at(j) << ' ';
      }
      std::cout << '\n';
    }
    tempRow.clear();
  } catch(std::out_of_range &ex){
    throw OutOfRange((std::string)ex.what());
  }

}
template <typename T> void Matrix<T>::loadMatrixFromFile(std::string &fileName){
  std::ifstream ifs(fileName);
  if (ifs.fail()) {
    throw FileNotFoundException(fileName);
  } else{
    for (int i = 0; i < this->table.size(); i++) {
      for (int j = 0; j < this->table[i].size(); j++) {
        ifs>>this->table[i][j];
      }
    }
  }
}
#endif /* Matrix_hpp */
