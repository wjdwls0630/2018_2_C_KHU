#include <iostream>
#include <string>
#include <iomanip>


class Account {
  std::string name;
  int id;
  double balance;

public:
  Account(const std::string &customer_name,const int &account_number, const double &amount){
    name=customer_name;
    id=account_number;
    balance=amount;
  }
  void deposit(double amt) {
    balance+=amt;
  }
  bool withdraw(double amt) {
    bool result = false;
    if (balance-amt>=0) {
      balance-=amt;
      result=true;
    }
    return result;
  }
  void display() {
    std::cout << "Name: " <<name<<", ID: "<<id<<", Balance: "<<balance<< '\n';
  }
};

int main() {
  Account acct1("Joe",2312,1000.00);
  Account acct2("Moe",2313,520.29);

  /*
  acct1.name="Joe";
  acct2.name="Moe";
  acct1.id=2312;
  acct2.id=2313;
  acct1.balance=1000.00;
  acct2.balance =520.29;
  이렇게 직접 접근하는 것은 불가능하다
  클래스 member data가 private 으로 갔기 때문에  외부에서 직접적인 접근은 불가능하다
  */

  acct1.display();
  acct2.display();
  std::cout << "-------------------" << '\n';
  acct1.withdraw(800.00);
  acct2.deposit(22.00);
  acct1.display();
  acct2.display();



  return 0;
}
