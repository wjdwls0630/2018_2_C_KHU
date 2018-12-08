#include <iostream>
#include <vector>
#include <string>

template <typename T>
T sum(const std::vector<T> v){
  T result=0;
  for (T elem : v){
    result+=elem;
  }
  return result;
}
int main() {
  std::vector<double> v {10.0, 20.0, 30.0};
  std::vector<int> w {10, 20, 30};
  std::cout << sum(v) << '\n';
  std::cout << sum(w) << '\n';

  return 0;
}
