#include <iostream>

using namespace std;
int main() {
  cout.setf(ios::scientific);
  std::cout << "과학적 표기법    : "<<314.1592<<'\n';
  cout.unsetf(ios::scientific);

  cout.setf(ios::fixed);
  std::cout << "고정소수점 표기법: " <<314.1592<< '\n';

  return 0;
}
