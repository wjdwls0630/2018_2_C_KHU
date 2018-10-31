#include <iostream>
#include <iomanip>

const int MAX_ROWS=8;
const int MAX_COlS=9;

void printTable(int input[][MAX_COlS]);

int main() {
  int table[MAX_ROWS][MAX_COlS];

  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      table[i][j]=(i+2)*(j+1);
    }
  }

  printTable(table);
  return 0;
}

void printTable(int input[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout <<std::setw(4)<< input[i][j];
    }
    std::cout  << '\n';
  }
}
