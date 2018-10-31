#include <iostream>
using namespace std;

int main(void) {
  int num1=1020;
  int &num2=num1;
  num2=3047;
  std::cout << "Val : " <<num1<< '\n';
  std::cout << "ReF : " <<num2<< '\n';

  std::cout << "Val address: " <<&num1<< '\n';
  std::cout << "Ref address: " <<&num2<< '\n';
  return 0;
}
