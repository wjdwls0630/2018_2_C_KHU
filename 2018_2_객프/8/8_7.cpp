#include <iostream>
#include <vector>


int main() {
  std::vector<int> v{1,2,3,4,5};
  std::cout << "v contains ";
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << ' ';
  }
  std::cout  << '\n';
  for (int i = 0; i < v.size(); i++) {
    v.at(i)=8;
  }
  std::cout << "v contains ";
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << ' ';
  }
  std::cout  << '\n';

  v.push_back(6);
  std::cout << "v contains ";
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << ' ';
  }
  std::cout  << '\n';

  v.pop_back();
  std::cout << "v contains ";
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << ' ';
  }
  std::cout  << '\n';

  std::cout << "empty ? : " <<v.empty()<< '\n';
  v.clear();
  std::cout << "aftre v.clear() empty ? : " <<v.empty()<< '\n';

  std::cout << "v contains ";
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << ' ';
  }
  std::cout  << '\n';




  return 0;
}
