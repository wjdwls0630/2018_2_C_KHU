#include <iostream>
using namespace std;
void Process_View1(int &UserMoney, string UserInput,int &Total_Charge);
void Process_View2(int &UserMoney, string UserInput, int &Total_Charge);
int Distinguish_UserInput(string UserInput);
int Process_Calculate(int Products, int Count);
int main() {
  string UserInput;
  int UserMoney=10000;
  int Total_Charge;
  do {
    std::cout << "구매할 물건을 입력하세요.(연필, 볼펜, 자, 지우개, 풀, 테이프)" << '\n'<< "> ";
    std::cin >> UserInput;
    if (UserInput!="연필"&&UserInput!="볼펜"&&UserInput!="자"&&UserInput!="지우개"&&UserInput!="풀"&&UserInput!="테이프") {
      std::cout << "없는 물품입니다."<<'\n';
      continue;
    }
    Process_View1(UserMoney,UserInput,Total_Charge);
    if (UserMoney<Total_Charge) {
      std::cout <<Total_Charge-UserMoney<<"원 부족합니다.";
      std::cout << UserMoney <<"원 남았습니다."<< '\n';
      continue;
    }
    Process_View2(UserMoney,UserInput,Total_Charge);

  } while(UserInput!="나가기");

  std::cout << "오늘을 여기까지 영업합니다. 안녕히 가세요!" << '\n';
  return 0;
}

//function

void Process_View1(int &UserMoney, string UserInput, int &Total_Charge) {
  int Price = Distinguish_UserInput(UserInput);
  std::cout <<UserInput << "하나에 " <<Price<<"원 입니다. ";

  int Count;
  std::cout << "몇 개를 구입하시겠습니까?" << '\n'<<"> ";
  std::cin >> Count;

  Total_Charge=Process_Calculate(Price,Count);
  std::cout << "합계 " <<Total_Charge<<"원 입니다. ";
}

void Process_View2(int &UserMoney, string UserInput, int &Total_Charge) {
  UserMoney -= Total_Charge;
  std::cout <<UserMoney<<"원 남았습니다."<<'\n';
}

int Distinguish_UserInput(string UserInput){
  int Products;
  int Pencil=500,Pen=700,Ruler=1500, Eraser=1000, Glue = 800, Tape=700;
  if (UserInput=="연필") {
    Products=Pencil;
  } else if (UserInput=="볼펜") {
    Products=Pen;
  } else if (UserInput=="자") {
    Products=Ruler;
  } else if (UserInput=="지우개") {
    Products=Eraser;
  } else if (UserInput=="풀") {
    Products=Glue;
  } else if (UserInput=="테이프") {
    Products=Tape;
  }
  return Products;
}

int Process_Calculate(int Products, int Count) {
  int Total_Charge=Products*Count;
  return Total_Charge;
}
