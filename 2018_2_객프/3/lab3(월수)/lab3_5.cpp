#include <iostream>

/*
 * increment(x)
 *  Illustrate pass by value protocol.
 */

/*
 increment 함수 안에 x는 지역변수로 increment 함수의 실행이 끝났을 때 그 효력을 잃는다.
 따라서 인자를 pass by value로 넘겼을 경우에는 함수 안에서는 증가하지만 메인 함수안에서는 메모리 주소값이 다른 x이므로
 증가하지 않음을 볼 수 있다.
 따라서 리턴 값을 x에 다시 assign하면 pass by value로 값이 증가함을 보일 수 있다.
 */
int increment(int x) {
  std::cout << "Beginning execution of increment, x = " <<x<< '\n';
  x++; //Increment x
  std::cout << "Ending execution of increment x = " <<x<< '\n';
  return x;
}
int main() {
  int x =5;
  std::cout << "Before increment, x = " <<x<< '\n';
  x = increment(x);
  std::cout << "After increment, x = " <<x<< '\n';
  return 0;
}
