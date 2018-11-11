#include <iostream>
void square(int *a);
int main() {
  int input;
  std::cout << "input> ";
  std::cin >> input;
  square(&input);
  std::cout << "제곱값> " <<input<< '\n';
  return 0;
}
void square(int *a) {
  *a*=*a;
}
