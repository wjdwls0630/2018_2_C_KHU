#include <iostream>
#include <string>

template<typename T, typename V>
bool less_than(const T &a, const V &b) { return a<b; }

int main() {
  std::cout << less_than(2, 3) << '\n';
  std::cout << less_than(2.2, 2) << '\n';
  std::cout << less_than(2, 2.2) << '\n';

  std::string word1="ABC", word2="xyz";
  std::cout << less_than(word1,word2) << '\n';
  std::cout << less_than(word2,word1) << '\n';

  return 0;
}
