#include <iostream>

void calculator();
double add(double num1 , double num2);
double subtract(double num1 , double num2);
double multiply(double num1 , double num2);
long divide(long num1 , long num2);
long modular(long num1 , long num2);

int main() {
  calculator();
  return 0;
}

void calculator() {
  double num1, num2;
  char userinput;
  //ASCII 코드 적용
  char plus= 43; // +
  char sub= 45; // -
  char mul=42; // *
  char divid=47; // /
  char rem=37; // %
  while (1) {
    std::cout << "숫자 두개를 입력하세요 : ";
    std::cin >> num1>> num2;
    std::cout << "연산자를 입력하세요 : " ;
    std::cin >> userinput;
    if (userinput==plus) {
      std::cout << "합은 " <<add(num1,num2)<< '\n';
    } else if (userinput==sub) {
      std::cout << "차는 " <<subtract(num1,num2)<< '\n';
    } else if(userinput==mul) {
      std::cout << "곱은 " <<multiply(num1,num2)<< '\n';
    } else if(userinput==divid){
      std::cout << "몫은 " <<divide(num1,num2)<< '\n';
    } else if(userinput==rem){
      std::cout << "나머지는 " <<modular(num1,num2)<< '\n';
    } else{
      break;
    }
  }
}
double add(double num1 , double num2){
  return num1+num2;
}
double subtract(double num1 , double num2){
  return num1-num2;
}
double multiply(double num1 , double num2){
  return num1*num2;
}
long divide(long num1 , long num2){
  return num1/num2;
}
long modular(long num1 , long num2){
  return num1%num2;
}
