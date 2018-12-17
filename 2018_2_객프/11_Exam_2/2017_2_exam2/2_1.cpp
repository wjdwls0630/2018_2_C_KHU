#include <iostream>



int main() {
  int size;
  int index=0,count=0;
  int temp;
  std::cout << "배열의 크기를 입력하시오 : " ;
  std::cin >> size;
  int * arr=new int[size];
  std::cout << "배열의 내용 ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';

  for (int i = 0; i < size; i++) {
    std::cout << "index에 더할 값을 입력하시오 : ";
    std::cin >> temp;
    std::cout <<"temp :" <<temp << '\n';
    index+=temp;
    std::cout <<"index 전 : " <<index << '\n';
    if (index>size-1) {
      index%=size;
    }
    std::cout <<"index 후 : " <<index << '\n';
    if (*(arr+index)==0) {
      *(arr+index)=temp;
    } else{
      *(arr+index)=temp;
      count++;
    }
    std::cout << "배열의 내용 ";
    for (int i = 0; i < size; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
  }
  std::cout << "배열의 내용 ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "충돌 횟수 : " <<count <<'\n';
  delete [] arr;

  return 0;
}
