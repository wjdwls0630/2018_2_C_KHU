#include <iostream>
#include <string>




int main() {

  std::string name1 = "Joe";
  std::string name2;
  std::cout << name1 << '\n';
  std::cin >> name1;
  std::cout << name1 << '\n';
  name1="Jane";
  std::cout << name1 << '\n';
  std::cout << name2 << '\n';
  return 0;
}
