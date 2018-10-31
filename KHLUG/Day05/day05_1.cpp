#include <iostream>


int main() {
  const int n = 100;
  int scores[n];
  for (int i = 0; i < n; i++) {
    std::cout << "학생 " <<i<<": ";
    std::cin >> scores[i];

  }
  float mean =0;
  for (int i = 0; i < n; i++) {
    mean+=scores[i];

  }
  mean/=n
  std::cout << "\n 전체 평균 : " <<mean<<'\n'<< '\n';
  for (int i = 0; i < n; i++) {
    std::cout << "학생 " <<i<<": "<<scores[i]<< '\n';
  }
  return 0;
}
