#include <iostream>
#include <iomanip>
int main(int argc, char const *argv[]) {
  int UserInput;
  std::cout << "정수를 입력하세요 : " ;
  std::cin >> UserInput;
  for (int i = UserInput; i >=0 ; i--) {
    for (int k = 0; k < UserInput-i; k++) {
      std::cout << " ";
    }
    for (int j = 0; j < i; j++) {
      std::cout << "*" ;
    }
    std::cout <<  '\n';
  }
  for (int i = 0; i <UserInput; i++) {
    for (int j = 0; j < UserInput-1-i; j++) {
      std::cout << " " ;
    }
    for (int k = 0; k < i*2+1; k++) {
      std::cout << "*";
    }
    std::cout <<  '\n';
  }
  for (int i = UserInput; i >=0; i--) {
    for (int j = 0; j < UserInput-i+1; j++) {
      std::cout << " ";
    }
    for (int k = 0; k < i*2-3; k++) {
      std::cout << "*";
    }
    std::cout <<  '\n';
  }

  return 0;
}
