#include <iostream>
#include <iomanip>



int main() {
  char input1[20];
  int input2;
  
  



  std::cout << "글자를 입력하세요 : ";
  std::cin >> input1;

  std::cout << "숫자를 입력하세요 : ";
  std::cin >> input2;
  std::cout <<'\n'<<"입력한 글자 : "<<input1;
  std::cout <<'\n'<<"입력한 숫자 : "<<input2;
  std::cout <<'\n'<<'\n';

  std::cout << setw(10) <<"Hello"<< '\n';
  cout<<setw(10)<<left<<"Hello"<<'\n';
  std::cout << setfill('0') <<right;
  std::cout << setw(10) <<12345<< '\n';
  std::cout << setprecision(10);
  std::cout << (1.0/7.0) << '\n'<<'\n';

  return 0;
}
