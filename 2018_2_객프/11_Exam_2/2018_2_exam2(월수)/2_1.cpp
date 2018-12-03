#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
void PrintArray(int *big_list, int n);
int main() {
  srand((unsigned int)time(0));
  int row,col;
  int num=0;
  row=rand()%6+4;
  col=rand()%6+4;
  std::cout << "생성된 행의 크기는: "<<row<<'\n' ;
  std::cout << "생성된 열의 크기는: "<<col<<'\n' ;
  int *big_list =new int[row];
  std::vector<std::vector<int>> table(row,std::vector<int>(col+1));

  for (int i = 0; i < table.size(); i++) {
    for (int j = 0; j < table[i].size(); j++) {
      num=rand()%100+1;
      table[i][j]=num;
    }
  }
  int target=0;
  int target_col_index=0;
  for (int i = 0; i < table.size(); i++) {
    target=table[i][0];
    for (int j = 0; j < table[i].size()-1; j++) {
      if (table[i][j]>target) {
        target=table[i][j];
        target_col_index=j;
      }
    }
    big_list[i]=target;
    table[i][col]=target;
  }

  std::cout << "생성된 2차원 벡터의 값: " << '\n';
  for (int i = 0; i < table.size(); i++) {
    for (int j = 0; j < table[i].size(); j++) {
      std::cout << std::setw(4) <<table[i][j];
    }
    std::cout << '\n';
  }
  void (*f)(int *, int);
  f=PrintArray;
  f(big_list,row);
  delete [] big_list;

  return 0;
}

void PrintArray(int *big_list, int n) {
  std::cout << "각 행에서 가장 큰 값은: ";
  for (int i = 0; i < n; i++) {
    std::cout <<big_list[i]<<"  " ;
  }
  std::cout << '\n';
  int target=0;
  for (int i = 0; i < n; i++) {
    if (big_list[i]>target) {
      target=big_list[i];
    }
  }
  std::cout << "행렬에서 가장 큰 값은: " <<target<< '\n';
}
