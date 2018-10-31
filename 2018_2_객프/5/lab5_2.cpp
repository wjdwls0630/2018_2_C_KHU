#include <iostream>

int main() {
  int num1,num2;
  do {
    std::cin >> num1>>num2;
    if (num1==num2) {
      break;
    } else{
      std::cout << "num1!=num2" << '\n';
      continue;
    }
  } while(true);
  std::cout << "num1 == num2" << '\n';
  
  return 0;
}
