#include <iostream>
#include <fstream>

//macOS
#include "/usr/include/malloc/malloc.h"
#define _msize malloc_size
/*
Windows you just write

#include<malloc.h>

and use

_msize()

function when you want to know about memory size of dynamic array.

*/


int main() {
  int **table;
  int *list;
  int a[5]={10,20,30,40,50};
  table=new int*[6];
  list=new int[5];
  std::cout << sizeof(table) << '\n';
  std::cout << sizeof(list) << '\n';
  std::cout << sizeof(a) << '\n';
  std::cout << _msize(table) << '\n';
  std::cout << _msize(list) << '\n';





  return 0;
}
