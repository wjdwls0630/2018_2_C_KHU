#include <iostream>
#include <list>
#include <algorithm>

int main() {
  std::list<int> seq{5,22,6,-3,8,4};
  std::for_each(std::begin(seq),std::end(seq),[](int x)->void{std::cout << x << ' ';});
  std::cout << '\n';
  std::for_each(std::begin(seq),std::end(seq),[](int &x)->void{x++;});
  std::for_each(std::begin(seq),std::end(seq),[](int x)->void{std::cout << x << ' ';});
  std::cout << '\n';
  return 0;
}
