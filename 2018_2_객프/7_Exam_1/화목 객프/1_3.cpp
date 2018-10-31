#include <iostream>

using namespace std;

bool ReadEquation(int &num1, char &oper, int &num2);
bool Evaluate(int num1, char oper, int num2, int &result);
bool Accumulate(int num,int num1, char oper, int num2, int &result, int &final_result);
int main() {
  int num1, num2,num=3, result,final_result;
  char oper;
  if (ReadEquation(num1, oper, num2)==1) {
    if (Evaluate( num1,  oper,  num2,  result)==1) {
        std::cout << num1 <<" "<<oper<<" "<<num2<<" =  "<<result<< '\n';
    }
  } else {
    std::cout << "%%% ReadError" << '\n';
  }
  std::cout << "몇 번 반복하시겠습니까 ? ";
  std::cin >> num;
  if (Accumulate( num,  num1,  oper,  num2,  result,  final_result)==0) {
    std::cout << "%%% computation interrupted" << '\n';
  } else {
    std::cout << "Total = " <<final_result<< '\n';
  }



  return 0;
}

bool ReadEquation(int &num1, char &oper, int &num2){
  std::cout << "정수계산을 위한 수식을 입력(예 : 12 + 13)) --> " ;
  std::cin >> num1>>oper>>num2;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    return 0;
  }

  return 1;


}

bool Evaluate(int num1, char oper, int num2, int &result){
    switch (oper) {
      case '+':
        result=num1+num2;
        break;
      case '-':
        result=num1-num2;
        break;
      case '*':
        result=num1*num2;
        break;
      case '/':
        result=num1/num2;
        break;
      default :
        return 0;
    }
    return 1;
  }



bool Accumulate(int num,int num1, char oper, int num2, int &result, int &final_result){


  int count=0;

  std::cout << "### loop를 이용하여 수식을 "<<num<<"번 입력받아 계산하고 그 결과의 합을 출력 ###" << '\n';
  do {

    if (ReadEquation(num1, oper, num2)==0) {
      return 0;
    } else{
      Evaluate(num1,oper,num2,result);
      final_result+=result;
    }
    count++;
  } while(count<num);

  return 1;

}
