#include <iostream>

template <int N>
int scale(const int &value) { return value*N; }

template<typename T, int N>
T scale(const T &value){ return value*N; }

int main() {
  std::cout << scale<3>(5) << '\n';
  std::cout << scale<4>(10) << '\n';
  std::cout << scale<double, 3>(5.3) << '\n';
  std::cout << scale<int, 4>(10) << '\n';
  return 0;
}
