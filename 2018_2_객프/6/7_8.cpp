#include <iostream>

using namespace std;

int main() {
  std::cout << "Default justification: |";
  std::cout.width(10);
  std::cout << 12345 <<'|'<<'\n';
  std::cout.setf(ios::left,ios::adjustfield);
  std::cout << "Left justification   : |";
  std::cout.width(10);
  std::cout << 12345 <<'|'<<'\n';
  std::cout.setf(ios::right,ios::adjustfield);
  std::cout << "Right justification  : |";
  std::cout.width(10);
  std::cout << 12345 <<'|'<<'\n';
  return 0;
}
