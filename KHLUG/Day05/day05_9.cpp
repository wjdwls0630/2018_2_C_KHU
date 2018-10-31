#include <iostream>
#include <iomanip>
int main() {
  int table[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      table[i][j]=10*i+j;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout<<std::setw(4) << table[i][j];
    }
    std::cout  << '\n';
  }
  return 0;
}
