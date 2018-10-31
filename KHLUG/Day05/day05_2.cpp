#include <iostream>

int main() {
  const int n = 10;
  int DataSet[n];
  for (int i = 0; i < n; i++) {
    std::cout << i<<"번째 요소 : " ;
    std::cin >> DataSet[i];
  }
  std::cout << "거꾸로 출력" << '\n';
  for (int i = n-1; i >=0 ; i--) {
    std::cout << DataSet[i] << ' ';
  }
  std::cout  << '\n';
  return 0;
}
