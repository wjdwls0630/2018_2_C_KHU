#include <iostream>


int main() {
  int i=405;
  int *ptr1=&i;
  int *ptr2=&i;
  std::cout << "값을 포인터로 접근할 수 있다." << "\n\n";
  std::cout << "[i=405]   i : " <<i<< '\n';
  i=i+1;
  std::cout << "[i=i+1]   i : " <<i<< '\n';
  *ptr1=409;
  std::cout << "[*ptr1=409]   i : " <<i<< '\n';
  *&i=*ptr1+*ptr2;
  std::cout << "[*&i=*ptr1+*ptr2]   i : " <<i<< '\n';
  i= *ptr1 * *ptr2;
  std::cout << "[i=*ptr1**ptr2]   i : " <<i<< '\n';


  return 0;
}
