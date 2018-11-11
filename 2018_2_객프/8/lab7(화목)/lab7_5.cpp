#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using Matrix = std::vector<std::vector<int>>;

void init_Matrix(Matrix &m);
void print_Matirx(const Matrix &m);
Matrix multiply(Matrix &m1 , Matrix &m2);

int main() {
  int row,column;
  srand(time(NULL));

  std::cout << "A의 행과 열의 크기를 입력해주세요 : ";
  std::cin >> row>>column;
  Matrix matrixA(row,std::vector<int>(column));
  std::cout << "B의 행과 열의 크기를 입력해주세요 : ";
  std::cin >> row>>column;
  Matrix matrixB(row,std::vector<int>(column));
  Matrix matrixResult;

  init_Matrix(matrixA);
  std::cout << "A 행렬 : " << '\n';
  print_Matirx(matrixA);

  init_Matrix(matrixB);
  std::cout << "B 행렬 : " << '\n';
  print_Matirx(matrixB);
  if (matrixA[0].size()!=matrixB.size()) {
    std::cout << "두 행렬은 곱할 수 없습니다." << '\n';
  } else{
    matrixResult=multiply(matrixA,matrixB);
    std::cout << "AB 행렬 : " << '\n';
    print_Matirx(matrixResult);
  }



  return 0;
}
void init_Matrix(Matrix &m) {

  for (auto &row : m) {
    for(auto &elem : row){
      elem=rand()%19-9;
    }
  }

}
void print_Matirx(const Matrix &m) {
  for (auto row : m) {
    for(auto elem : row){
      std::cout <<std::setw(4) <<elem;
    }
    std::cout  << '\n';
  }
  std::cout  << '\n';
}
Matrix multiply(Matrix &m1 , Matrix &m2) {
  Matrix result(m1.size(),std::vector<int>(m2[0].size()));
  for (int i = 0; i < m1.size(); i++) {
    for (int j = 0; j < m2[0].size(); j++) {
      for (int k = 0; k < m2.size(); k++) {
        result[i][j]+=m1[i][k]*m2[k][j];
      }
    }
  }
  return result;
}
