#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
  std::string name="Fred",str="abcDEF-GHijkl345qw";
  std::cout << "Before : " <<name <<' '<<str<<'\n';
  std::transform(std::begin(name),std::end(name),std::begin(name),std::toupper);
  std::transform(std::begin(str),std::end(str),std::begin(str),std::toupper);
  std::cout << "After : " <<name <<' '<<str<<'\n';


  return 0;
}
