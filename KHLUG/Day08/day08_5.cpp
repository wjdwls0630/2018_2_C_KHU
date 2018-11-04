#include <iostream>
void enter_print_ptr(char*a,char*b,char*c,char*d,char*e);

using namespace std;
int main() {
  char a,b,c,d,e;
  enter_print_ptr(&a, &b, &c, &d, &e);


  return 0;
}

void enter_print_ptr(char*a,char*b,char*c,char*d,char*e) {
  cin.unsetf(ios::skipws);


  std::cout << "5개의 문자를 입력하시오 : ";
  std::cin >> *a>>*b>>*c>>*d>>*e;

  std::cout << "a의 주소값 : " <<a<< '\n';
  std::cout << "a의 값 : " <<*a<< '\n';
  std::cout << "b의 주소값 : " <<b<< '\n';
  std::cout << "b의 값 : " <<*b<< '\n';
  std::cout << "c의 주소값 : " <<c<< '\n';
  std::cout << "c의 값 : " <<*c<< '\n';
  std::cout << "d의 주소값 : " <<d<< '\n';
  std::cout << "d의 값 : " <<*d<< '\n';
  std::cout << "e의 주소값 : " <<e<< '\n';
  std::cout << "e의 값 : " <<*e<< '\n';

}
