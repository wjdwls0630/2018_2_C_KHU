#include <iostream>
#include <vector>

int main() {
  std::vector<int> v(5);
  for (auto &elem : v) {
    std::cin >> elem;
  }
  for (auto elem : v) {
    std::cout << elem << '\n';;
  }
  
  return 0;
}
