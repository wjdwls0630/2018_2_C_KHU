#include <iostream>

int main() {
  const int n =5;
  int array1[n];
  int array2[n];
  std::cout << "첫 번째 배열 요소를 입력하세요" << '\n';
  for (int i = 0; i < n; i++) {
    std::cout <<i<< "번째 요소 : " ;
    std::cin >> array1[i];
  }
  std::cout << "두 번째 배열 요소를 입력하세요" << '\n';
  for (int i = 0; i < n; i++) {
    std::cout <<i<< "번째 요소 : " ;
    std::cin >> array2[i];
  }
  std::cout << "첫 번째 배열과 두 번째 배열이 같은지 검사 진행" << '\n';
  int count =0;
  for (int &i = count; i < n; i++) {
    if (array1[i]!=array2[i]) {
      std::cout << "두 배열은 같지 않습니다!" << '\n';
      break;
    }
  }
  if (count==5) {
    std::cout << "두 배열은 같습니다!" << '\n';
  }

  return 0;
}
