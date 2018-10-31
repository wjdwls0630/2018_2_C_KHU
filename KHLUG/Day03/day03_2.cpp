#include <iostream>
void Factorial(int n) {
  int result=1;
  if(n>0){
    for (int i = 1; i <=n; i++) {
      result *= i;
    }
    std::cout << result << '\n';
  }else if(n==0){
    std::cout << result << '\n';
  }else{
    std::cout << "잘못 입력하셨습니다." << '\n';
  }
}
void SumAll(int n) {
  int result = 0 ;
  if (n>=0) {
    for (int i = 0; i <= n; i++) {
      result+=i;
    }
    std::cout << result << '\n';
  }else {
    for (int i = 0; i <= abs(n); i++) {
      result+=i;
    }
    std::cout << result* -1 << '\n';
  }
}
void ShowNine(int n) {
  for (int i = 1; i < 10; i++) {
    std::cout << n*i << '\n';
  }
}

int main(int argc, char const *argv[]) {
  int n1,n2,n3;
  std::cout << "정수를 입력하세요 : " ;
  std::cin >> n1;
  Factorial(n1);
  std::cout << "정수를 입력하세요 : ";
  std::cin >> n2;
  SumAll(n2);
  std::cout << "정수를 입력하세요 : ";
  std::cin >> n3;
  ShowNine(n3);






  return 0;
}
