#include <iostream>
#include <iomanip>

const int MAX_ROWS =5 ;
const int MAX_COlS = 4;

/*
메모리 상에서는 연속된 변수로 전달하기 때문에 어디서
끊어서 행을 만들지 알려줘야한다.
*/

void printTable(int row[][MAX_COlS]);



int main() {
  int table[MAX_ROWS][MAX_COlS];

  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      table[i][j]=10*i+j;
    }
  }
  printTable(table);

  return 0;
}

void printTable(int row[][MAX_COlS]){
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout << std::setw(4) <<row[i][j];
    }
    std::cout  << '\n';
  }


}
