#include <iostream>
using namespace std;

int main() {
  int num =10 ;
  int *ptr = &num;
  std::cout << "num= " <<num<< '\n';
  std::cout << "ptr= " <<ptr<< '\n';
  std::cout << "*ptr= " <<*ptr<< '\n';
  return 0;
}
