#include <iostream>
#include <iomanip>

const int MAX_ROWS=5;
const int MAX_COlS=5;

void printTable(int input[][MAX_COlS]);
void makeTable1(int input[][MAX_COlS]);
void makeTable2(int input[][MAX_COlS]);
void makeTable3(int input[][MAX_COlS]);


int main() {
  int table[MAX_ROWS][MAX_COlS];

  makeTable1(table);
  printTable(table);
  std::cout  << '\n';
  makeTable2(table);
  printTable(table);
  std::cout  << '\n';
  makeTable3(table);
  printTable(table);

  return 0;
}

void makeTable1(int input[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      if (i>=j) {
        input[i][j]=1;
      } else {
        input[i][j]=0;
      }
    }
  }
}

void makeTable2(int input[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      if (i==j) {
        input[i][j]=1;
      } else {
        input[i][j]=0;
      }
    }
  }
}

void makeTable3(int input[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      if ((j==i)||(j==4-i)) {
        input[i][j]=1;
      } else {
        input[i][j]=0;
      }
    }
  }
}

void makeTable4(int input[][MAX_COlS]) {

}

//makeTable4 수정, 규칙 찾아내기





void printTable(int input[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout <<std::setw(4)<< input[i][j];
    }
    std::cout  << '\n';
  }
}
