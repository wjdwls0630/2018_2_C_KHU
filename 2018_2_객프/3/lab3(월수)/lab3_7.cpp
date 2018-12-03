#include <iostream>

void swap_call_by_value(int x, int y) {
  int temp = x;
  x=y;
  y=temp;
}
void swap_call_by_reference(int &x, int &y) {
  int temp = x;
  x=y;
  y=temp;
}
void get_data(int &x, int &y) {
  std::cin >> x>>y;
}

/*
 call by value는 단순히 변수에 저장된 값을 함수 안 파라미터에 전달하여서 함수가 끝나면
 그 파라미터에 대한 정보는 사라지지만(local variable) call by reference는 main함수 안에 존재하는
 변수의 주소값에 접근을 하므로 함수가 끝나서 함수 안 동작이 끝나도 main 함수 안의 변수에 영향을 끼친다.
 */
int main() {
  int x, y;
  get_data(x, y);
  std::cout << "Before swap_call_by_value: x = " <<x<<", y = "<<y<< '\n';
  swap_call_by_value(x,y);
  std::cout << "After swap_call_by_value: x = " <<x<<", y = "<<y<< '\n';
  std::cout << "Before swap_call_by_reference: x = " <<x<<", y = "<<y<< '\n';
  swap_call_by_reference(x,y);
  std::cout << "After swap_call_by_reference: x = " <<x<<", y = "<<y<< '\n';



  return 0;
}
