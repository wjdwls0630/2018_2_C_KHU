#include <iostream>

void PrintResult(int x) {
  std::cout << "출력 : " <<x<< '\n';
}
double GetAverage(int a, int b, int c) {
  double result = (a+b+c)/3;
  return result;
}
int Square(int x) {
  int result= x*x;
  return result;
}
int main(int argc, char const *argv[]) {
  for (int i = 1; i < 10; i++) {
    PrintResult(i);
  }
  char UserChoose;
  while (UserChoose!='n') {
    int a ,b,c;

    std::cout << "성적을 입력하세요 : " ;
    std::cin >> a>>b>>c;
    std::cout << "평균점수 : " <<GetAverage(a,b,c)<< '\n';
    std::cout << "계속 진행하시겠습니까> (y/n)" ;
    std::cin >> UserChoose;

  }
  std::cout << "프로그램을 종료합니다." << '\n';

  int UserInput ;
  std::cout << "정수를 입력하세요 : " ;
  std::cin >> UserInput;
  std::cout << "입력하신 수의 제곱은 " <<Square(UserInput)<<" 입니다."<< '\n';

  return 0;
}
