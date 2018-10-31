#include <iostream>
void SwapPointer(int ptr1, int ptr2) {
  int *temp=ptr1;
  ptr1=ptr2;
  ptr2=temp;

}
int main(void) {
  int num1=5;
  int *ptr1=&num1;
  int num2=10;
  int *ptr2=&num2;
  std::cout << "num1 : " <<num1<<'\t'<<"num2 : "<<num2<< '\n';
  std::cout << "*ptr1 : " <<*ptr1<<'\t'<<"ptr1 : "<<ptr1<< '\n';
  std::cout << "*ptr2 : " <<*ptr2<<'\t'<<"ptr2 : "<<ptr2<< '\n';
  SwapPointer(ptr1,ptr2);
  std::cout << "*ptr1 : " <<*ptr1<<'\t'<<"ptr1 : "<<ptr1<< '\n';
  std::cout << "*ptr2 : " <<*ptr2<<'\t'<<"ptr2 : "<<ptr2<< '\n';
  return 0;
}
