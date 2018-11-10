#include <iostream>

void get_two_numbers(int &a, int &b);
int get_operator(void);
int cal_sum_a_to_b(int a, int b);
int cal_sum_even_a_to_b(int a, int b);
int main(){
    int iOperand1,iOperand2,iOperator,iResult ;
    while (1) {
      get_two_numbers(iOperand1, iOperand2);
      iOperator=get_operator();
      switch (iOperator) {
        case 1:
          iResult=cal_sum_a_to_b(iOperand1,iOperand2);
          std::cout << "output>" <<iResult<<'\n'<< '\n';
          break;
        case 2:
          iResult=cal_sum_even_a_to_b(iOperand1,iOperand2);
          std::cout << "output>" <<iResult<<'\n'<< '\n';
          break;
        case 0:
          std::cout << "프로그램을 종료합니다" << '\n'<< '\n';
          break;
      }
      if (iOperator==0) {
        break;
      }

    }
    return 0;
}
void get_two_numbers(int &a, int &b){
    std::cout << "두 정수 a, b를 입력하시오: " ;
    std::cin >> a>>b;
}

int get_operator(void){
  int oper;
  std::cout << "(1) a부터 b까지 합 출력." << '\n';
  std::cout << "(2) a부터 b까지 짝수의 합 출력." << '\n';
  std::cout << "(0) 프로그램 종료." << '\n';
  std::cout << "Input>" ;
  std::cin >> oper;
  return oper;

}

int cal_sum_a_to_b(int a, int b){
  if (a==b) {
    return b;
  } else {
    return b+cal_sum_a_to_b(a, b-1);
  }
}

int cal_sum_even_a_to_b(int a, int b){
  int sum=0;
  for (int i = a; i <=b; i++) {
    if (i%2==0) {
      sum+=i;
    }
  }
  return sum;
}
