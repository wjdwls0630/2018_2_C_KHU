#include <iostream>
#include <string>
#include <iomanip>


class Account {
public:
  std::string name;
  int id;
  double balance;
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
};

int main() {
  Account acct1,acct2;
  acct1.name="Joe";
  acct2.name="Moe";
  acct1.id=2312;
  acct2.id=2313;
  acct1.balance=1000.00;
  acct2.balance =520.29;

  std::cout << "Name: " <<acct1.name<<", ID: "<<acct1.id<<", Balance: "<<acct1.balance<< '\n';
  std::cout << "Name: " <<acct2.name<<", ID: "<<acct2.id<<", Balance: "<<acct2.balance<< '\n';
  std::cout << "-------------------" << '\n';
  acct1.withdraw(800.00);
  acct2.deposit(22.00);
  std::cout << "Name: " <<acct1.name<<", ID: "<<acct1.id<<", Balance: "<<acct1.balance<< '\n';
  std::cout << "Name: " <<acct2.name<<", ID: "<<acct2.id<<", Balance: "<<acct2.balance<< '\n';



  return 0;
}
