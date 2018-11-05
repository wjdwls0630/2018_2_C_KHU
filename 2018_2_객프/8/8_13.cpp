#include <iostream>

void print( int *a,  int *b);

int main() {
  int list[]={2,4,6,8};
  int *begin = list;
  int *last= list+4;



  print(begin,last);

  return 0;
}


void print( int *a,  int *b) {
  int *cursor=a;

  while (cursor!=b) {
    std::cout << *cursor << ' ';
    cursor++;
  }
  std::cout  << '\n';
}
