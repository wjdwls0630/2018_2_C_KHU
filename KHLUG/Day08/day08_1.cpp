#include <iostream>


int main() {
  int a=405;
  int b=406;
  int c=409;
  int *ptra, *ptrb, *ptrc;
  ptra=&a;
  ptrb=&b;
  ptrc=&c;

  std::cout << "포인터에 int*포인터변수명 = 주소명 처럼 assign" << '\n';
  std::cout  << '\n';
  std::cout << "a 주소 : " << ptra<< '\n';
  std::cout << "a 값 : " << *ptra<< '\n';
  std::cout << "b 주소 : " << ptrb<< '\n';
  std::cout << "b 값 : " << *ptrb<< '\n';
  std::cout << "c 주소 : " << ptrc<< '\n';
  std::cout << "c 값 : " << *ptrc<< '\n';
  std::cout  << '\n';

  std::cout  <<"포인터는 가리키는것을 바꿀수 있다. 또한 여러개의 포인터가 하나의 변수를 가리킬수 있다." << '\n';
  ptra=&b;
  std::cout << "ptra=&b 이후 " << '\n';

  std::cout  << '\n';
  std::cout << "a 주소 : " << ptra<< '\n';
  std::cout << "a 값 : " << *ptra<< '\n';
  std::cout << "b 주소 : " << ptrb<< '\n';
  std::cout << "b 값 : " << *ptrb<< '\n';
  std::cout  << '\n';
  return 0;
}
