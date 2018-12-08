#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec {10, 20, 30, 40, 50};
  std::vector<int>::iterator iter=std::begin(vec);
  std::cout << *(iter) << '\n';
  iter++;
  std::cout << *(iter) << '\n';
  return 0;
}
