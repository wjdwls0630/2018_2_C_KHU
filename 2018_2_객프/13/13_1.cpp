#include <iostream>
#include <string>

template <typename T>
//template<class T>도 가능
bool less_than(const T &a, const T &b) { return a<b; }
//speed up by using call by reference
//more safety by using const



int main() {
  std::cout << less_than(2, 3) << '\n';
  std::cout << less_than(2.2, 2.7) << '\n';
  std::cout << less_than(2.7, 2.2) << '\n';
  

  std::string word1="ABC", word2="xyz";
  std::cout << less_than(word1,word2) << '\n';
  std::cout << less_than(word2,word1) << '\n';

  return 0;
}
