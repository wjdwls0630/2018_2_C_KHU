#include <iostream>

int main(int argc, char const *argv[]) {
  while (1) {
    int a = 3;
    int b= 4;
    char userinput;
    std::cout << "a = 3 , b = 4 " << '\n';
    std::cout << "연산자를 선택하세요(프로그램 종료는 s 입력) : ";
    std::cin >> userinput;
    if (userinput=='+') {
      std::cout << "a + b = " <<a+b<< '\n';
    }else if(userinput=='-'){
      std::cout << "a - b = " <<a-b<< '\n';
    }else if(userinput=='*'){
      std::cout << "a * b = " <<a*b<< '\n';
    }else if(userinput=='/'){
      std::cout << "a / b = " <<a/b<< '\n';
    }else if(userinput=='%'){
      std::cout << "a o/o b = " <<a%b<< '\n';
    }else if(userinput=='-'){
      std::cout << "a - b = " <<a-b<< '\n';
    }else if(userinput=='s'){
      break;
    }else{
      std::cout << "잘 못 입력하셨습니다." << '\n';
      continue;
    }
    char line = '-';
    for (size_t i = 0; i < 40; i++) {
      std::cout << line ;
    }
    std::cout << '\n';


  }
  std::cout <<'\n'<< "프로그램을 종료합니다" << '\n';


  return 0;
}
