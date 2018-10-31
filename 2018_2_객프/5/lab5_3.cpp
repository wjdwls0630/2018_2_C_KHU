#include <iostream>

int main() {
  int num1,num2;
  do {
    std::cin >> num1>>num2;
    if (num1==num2 && num1%2!=0) {
      std::cout << "홀수" << '\n';
      break;
    } else if(num1==num2 && num1%2==0){
      std::cout << "짝수" << '\n';
      continue;
    }else{
      std::cout << "num1!=num2" << '\n';
      continue;
    }
  } while(true);
  std::cout << "num1 == num2" << '\n';

  return 0;
}
