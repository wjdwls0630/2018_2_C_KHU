#include <iostream>

using namespace std;

int main() {
  std::cout.setf(ios::scientific);
  std::cout << "...scientific format  : " <<3141.59<< '\n';
  std::cout.unsetf(ios::scientific);
  std::cout .setf(ios::fixed);
  std::cout << "...with fixed point   : " <<3141.59<< '\n';

  return 0;
}
