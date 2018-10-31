#include <iostream>
#include <iomanip>

const int MAX_ROWS =5 ;
const int MAX_COlS = 4;

/*
전역으로 사용할 배열의 행과 열의 수를 상수로 만들면 편하다.
그러면 배열의 크기를 따로 매개변수로 안넘겨도 된다.
*/
void printRow(int row[]);



int main() {
  int table[MAX_ROWS][MAX_COlS];

  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      table[i][j]=10*i+j;
    }
  }
  for (int i = 0; i < MAX_ROWS; i++) {
    printRow(table[i]);
  }
  //2차원 배열인 table의 각 원소는 1차원 배열이다.

  return 0;
}

void printRow(int row[]){
  for (int i = 0; i < MAX_COlS; i++) {
    std::cout << std::setw(4) <<row[i];
  }
  std::cout  << '\n';

}
