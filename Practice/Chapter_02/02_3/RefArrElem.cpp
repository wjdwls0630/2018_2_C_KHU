#include <iostream>

int main(void) {
  int arr[3]={1,3,5};
  int &ref1=arr[0];
  int &ref2=arr[1];
  int &ref3=arr[2];

  std::cout << "Array " <<arr<< '\n';
  std::cout << "ref1 " <<ref1<< '\n';
  std::cout << "ref2 " <<ref2<< '\n';
  std::cout << "ref3 " <<ref3<< '\n';
  return 0;
}
