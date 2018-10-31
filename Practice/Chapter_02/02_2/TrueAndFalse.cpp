#include <iostream>
using namespace std;

int main(void) {
  int num =10;
  int i =0;

  std::cout << "true : " <<true<< '\n';
  std::cout << "false : " <<false<< '\n';

  while (true) {
    std::cout << i++ <<' ';
    if (i>num) {
      break;
    }
  }
  std::cout << '\n';
  std::cout << "sizeof 1 : " <<sizeof(1)<< '\n';
  std::cout << "sizeof 0 : " <<sizeof(0)<< '\n';
  std::cout << "sizeof true : " <<sizeof(true)<< '\n';
  std::cout << "sizeof false : " <<sizeof(false)<< '\n';
  return 0;
}
