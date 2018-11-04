#include <iostream>

int main() {
  char c= 'K';
  char *pc;
  pc=&c;

  int i =58;
  int *pi ;
  int **ppi;
  pi=&i;
  ppi=&pi;
  std::cout << "pc : " <<pc<< '\n';
  std::cout << "*pc : " <<*pc<< '\n';
  std::cout << "pi : " <<pi<< '\n';
  std::cout << "*pi : " <<*pi<< '\n';
  std::cout << "ppi : " <<ppi<< '\n';
  std::cout << "*ppi : " <<*ppi<< '\n';
  std::cout << "**ppi : " <<**ppi<< '\n';

  return 0;
}
