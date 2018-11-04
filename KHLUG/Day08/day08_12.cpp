#include <iostream>
#include <fstream>

int main() {
  int **table;
  int *list;
  int a[5]={10,20,30,40,50};
  table=new int*[6];
  list=new int[5];
  std::cout << sizeof(table) << '\n';
  std::cout << sizeof(list) << '\n';
  std::cout << sizeof(a) << '\n';





  return 0;
}
