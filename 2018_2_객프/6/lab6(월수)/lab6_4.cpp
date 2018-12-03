#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int sum(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int idiv(int x, int y);
int mod(int x, int y);
int main() {
  int num1 , num2,result;
  string oper;
  ofstream ofs("lab6_4.txt");
  std::cout << "Enter two numbers : ";
  std::cin >> num1>>num2;
  ofs<<num1<<' '<<num2<<'\n';
  std::cout << "Choose Operator(add/sub/mul/div/mod/quit) : ";
  std::cin >> oper;
  ofs<<oper<<'\n';

  while (1) {
    if (oper=="add") {
      result=sum(num1,num2);
      cout<<num1<<" + "<<num2<<" = "<<result<<'\n';
      ofs<<num1<<" + "<<num2<<" = "<<result<<'\n';
    } else if (oper=="sub") {
      result=sub(num1,num2);
      cout<<num1<<" - "<<num2<<" = "<<result<<'\n';
      ofs<<num1<<" - "<<num2<<" = "<<result<<'\n';
    } else if (oper=="mul") {
      result=mult(num1,num2);
      cout<<num1<<" * "<<num2<<" = "<<result<<'\n';
      ofs<<num1<<" * "<<num2<<" = "<<result<<'\n';
    } else if (oper=="div") {
      result=idiv(num1,num2);
      cout<<num1<<" / "<<num2<<" = "<<result<<'\n';
      ofs<<num1<<" / "<<num2<<" = "<<result<<'\n';
    } else if (oper=="mod") {
      result=mod(num1,num2);
      cout<<num1<<" % "<<num2<<" = "<<result<<'\n';
      ofs<<num1<<" % "<<num2<<" = "<<result<<'\n';
    } else if (oper=="quit") {
      break;
    }


    std::cout << "Enter two numbers : ";
    std::cin >> num1>>num2;
    ofs<<num1<<' '<<num2<<'\n';
    std::cout << "Choose Operator(add/sub/mul/div/mod/quit) : ";
    std::cin >> oper;
    ofs<<oper<<'\n';
  }
  ofs.close();
  std::cout  << '\n';

  ifstream ifs("lab6_4.txt");
  char cInput;
  while (ifs.get(cInput)) {
    std::cout << cInput;
  }
  ifs.close();
  return 0;
}

int sum(int x, int y) {
  int result = x+y;
  return result;
}
int sub(int x, int y) {
  int result = x-y;
  return result;
}
int mult(int x, int y) {
  int result = x*y;
  return result;
}
int idiv(int x, int y) {
  int result = x/y;
  return result;
}
int mod(int x, int y) {
  int result = x%y;
  return result;
}
