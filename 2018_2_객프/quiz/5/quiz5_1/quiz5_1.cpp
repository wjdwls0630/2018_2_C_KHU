#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

bool GetDataFile(int rowSize, int colSize);
bool ReadDataFile(std::vector<std::vector<int>> &array);
void DisplayResult(const std::vector<std::vector<int>> matrix, const std::vector<int> rowV,const std::vector<int> colV);
void ComputeRowNColSum(const std::vector<std::vector<int>> &matrix, std::vector<int> &rowV,std::vector<int> &colV);

int main() {
  int rowSize, colSize;
  std::cout << "\n\t 2차원 배열크기 (행과 열)를 입력 -->";
  std::cin >> rowSize>>colSize;
  GetDataFile(rowSize,colSize);
  std::vector<std::vector<int>> matrix;
  ReadDataFile(matrix);
  std::vector<int> rowV(rowSize);
  std::vector<int> colV(colSize);
  ComputeRowNColSum(matrix,rowV,colV);
  DisplayResult(matrix,rowV,colV);
  return 0;
}

bool GetDataFile(int rowSize, int colSize) {
  if (rowSize>0&&colSize>0) {
    int number=0;
    std::ofstream ofs;
    ofs.open("quiz5_1.txt");
    srand(time(NULL));
    ofs<<rowSize<<' '<<colSize<<'\n';
    for (int i = 0; i < rowSize; i++) {
      for (int j = 0; j < colSize; j++) {
        ofs<<rand()%100<<' ';
      }
      ofs<<'\n';
    }
    ofs.close();
  return true;
  }
  return false;
}

bool ReadDataFile(std::vector<std::vector<int>> &array) {
  std::ifstream ifs;
  int rowSize,colSize;
  ifs.open("quiz5_1.txt");
  ifs>>rowSize>>colSize;
  std::vector<std::vector<int>> tempMatrix(rowSize,std::vector<int>(colSize));
  int elem;

  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      ifs>>elem;
      tempMatrix[i][j]=elem;
    }
  }
  array.resize(rowSize*colSize);

  array=tempMatrix;
  ifs.close();
  return true;
}
void DisplayResult(const std::vector<std::vector<int>> matrix, const std::vector<int> rowV,const std::vector<int> colV) {
  std::cout <<"\n\n" <<"결과 출력" << '\n';
  for (int i = 0; i < rowV.size(); i++) {
    for (int j = 0; j < colV.size(); j++) {
      std::cout <<std::setw(4)<<matrix[i][j] ;
    }
    std::cout <<std::setw(4) <<rowV[i]<<'\n' ;
  }
  for (int i = 0; i < colV.size(); i++) {
    std::cout << std::setw(4) <<colV[i];
  }
  std::cout  << '\n';

}

void ComputeRowNColSum(const std::vector<std::vector<int>> &matrix, std::vector<int> &rowV, std::vector<int> &colV) {
  int sumRow,sumCol;
  for (int i =0; i < rowV.size(); i++) {
    sumRow=0;
    for (int j = 0; j < colV.size(); j++) {
      sumRow+=matrix[i][j];

    }

    rowV[i]=sumRow;
  }
  for (int j = 0; j < colV.size(); j++) {
    sumCol=0;
    for (int i = 0; i < rowV.size(); i++) {
      sumCol+=matrix[i][j];

    }

    colV[j]=sumCol;
  }
}
