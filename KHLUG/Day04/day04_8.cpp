#include <iostream>
#include <cmath>

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
  char f=102;// f
  char u=117; // u
  char d=100; //d
  char p=112;//p
  char s=115;//s
    while (1) {
    std::cout << "숫자 두개를 입력하세요 : ";
    std::cin >> num1>> num2;
    std::cout << "연산자를 입력하세요 : " ;
    std::cin >> userinput;
    if (userinput==plus) {
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "합은 " <<add(num1,num2)<< '\n';
    } else if (userinput==sub) {
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "차는 " <<subtract(num1,num2)<< '\n';
    } else if(userinput==mul) {
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "곱은 " <<multiply(num1,num2)<< '\n';
    } else if(userinput==divid){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "몫은 " <<divide(num1,num2)<< '\n';
    } else if(userinput==rem){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "나머지는 " <<modular(num1,num2)<< '\n';
    } else if(userinput==f){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "절대값은" <<fabs(num1)<<"와 "<<fabs(num2)<< '\n';
    } else if(userinput==u){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "올림값은" <<ceil(num1)<<"와 "<<ceil(num2)<< '\n';
    } else if(userinput==d){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "내림값은" <<floor(num1)<<"와 "<<floor(num2)<< '\n';
    } else if(userinput==p){
      std::cout << num1 <<"의 "<<num2;
      std::cout << " 제곱값은" <<pow(num1,num2)<< '\n';
    } else if(userinput==s){
      std::cout << num1 <<"와 "<<num2<<"의 ";
      std::cout << "제곱근값은" <<sqrt(num1)<<"와 "<<sqrt(num2)<< '\n';
    }
      else{
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
