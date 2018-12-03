#include <iostream>

const int count = 3;

void menu() ;
void getData_1(int &x);
void getData_2(int &x, int &y);
void Discriminate_nums(int x, int y);
void Discriminate_even(int x) ;
void view_lab04_5(int x);

int main() {
  for (int i = 0; i < count; i++) {
    menu();
  }




  return 0;
}
void menu() {
  int userinput, x, y;

  for (int i = 0; i < 60; i++) {
    std::cout << "=";
  }
  std::cout  << '\n';
  std::cout << "1)두 수를 입력받고 같은지 판별 " << '\n';
  std::cout << "2)숫자를 입력받고 입력받은 숫자가 짝수인지 홀수인지 판별 " << '\n';
  std::cout << "3)숫자를 입력받고 Lab#04-5와 같이 출력" << '\n';
  for (int i = 0; i < 60; i++) {
    std::cout << "=";
  }
  std::cout  << '\n';
  std::cout << "메뉴를 입력하세요 : " ;
  std::cin >> userinput;



  if (userinput==1) {
    Discriminate_nums(x,y);

  } else if (userinput==2) {
    Discriminate_even(x);

  } else {
    view_lab04_5(x);

  }
}
void getData_1(int &x) {
  std::cout << "한 개의 숫자를 입력하세요 : ";
  std::cin >> x;
}
void getData_2(int &x, int &y) {

  std::cout << "두 개의 숫자를 입력하세요 : ";
  std::cin >> x>>y;
}
void Discriminate_nums(int x, int y) {
  getData_2(x,y);
  if (x==y) {
    std::cout << "x == y" << '\n';
  } else {
    std::cout << "x != y" << '\n';
  }
}
void Discriminate_even(int x) {
  getData_1(x);
  if (x%2==0) {
    std::cout << "짝수" << '\n';
  } else {
    std::cout << "홀수" << '\n';
  }
}
void view_lab04_5(int x) {
  getData_1(x);
  for (int line = x ; line > 0; line--) {
    for (int number = 1; number <= line; number++) {
      std::cout << number << ' ';
    }
    std::cout  << '\n';
  }
}
