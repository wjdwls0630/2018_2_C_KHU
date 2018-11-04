#include <iostream>

void exchange_ref(int &x, int &y);
void exchange_ptr(int *px, int *py);
double* larger(double*px, double*py);

int main() {
  int a=4,b=13;
  std::cout << "exchange_ref" << '\n';
  exchange_ref(a,b);
  std::cout << "a : " <<a<<" b : "<<b<< '\n';
  std::cout << "exchange_ptr" << '\n';
  exchange_ptr(&a,&b);
  std::cout << "a : " <<a<<" b : "<<b<< '\n';

  double x,y;
  double *ptr;
  std::cout << "두 개 숫자를 입력하세요 : ";
  std::cin >> x>>y;
  ptr=larger(&x,&y);
  std::cout << "더 큰 숫자는 " <<*ptr<< '\n';




  return 0;
}

void exchange_ref(int &x, int &y) {
  int hand = x;
  x = y;
  y = hand;
}
void exchange_ptr(int *px, int *py) {
  int temp=*px;
  *px=*py;
  *py=temp;
}

double* larger(double*px, double*py) {

  return (*px>*py?px:py);
}
