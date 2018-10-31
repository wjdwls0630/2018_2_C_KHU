#include <iostream>


void inputArray(int input[],int size);
void checkArray(int input1[], int input2[],int size);

int main() {
  const int n =5;
  int array1[n];
  int array2[n];
  std::cout << "첫 번째 배열 요소를 입력하세요" << '\n';
  inputArray(array1, n);

  std::cout << "두 번째 배열 요소를 입력하세요" << '\n';
  inputArray(array2, n);

  checkArray(array1, array2, n);

  return 0;
}

void inputArray(int input[],int size){
  for (int i = 0; i < size; i++) {
    std::cout <<i<< "번째 요소 : " ;
    std::cin >> input[i];
  }
}


void checkArray(int input1[], int input2[],int size) {
  std::cout << "첫 번째 배열과 두 번째 배열이 같은지 검사 진행" << '\n';
  int count =0;
  for (int &i = count; i < size; i++) {
    if (input1[i]!=input2[i]) {
      std::cout << "두 배열은 같지 않습니다!" << '\n';
      break;
    }
  }
  if (count==5) {
    std::cout << "두 배열은 같습니다!" << '\n';
  }

}
