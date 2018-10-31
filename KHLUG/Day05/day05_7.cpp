#include <iostream>

/*
배열은 알아서 pass by reference 방식으로 매개변수로 넘기기 때문에
함수에서 바뀐 값을 함수 밖에서도 알아서 적용된다.
*/

void mul_two_array(int input[],int size);
void printReverse(int input[],int size);
void printValue(int input[], int size);
void swap(int &a, int &b);
void reverseArray(int input[],int size);

int main() {
  int numbers[5];
  int size=sizeof(numbers)/sizeof(numbers[0]);

  for (int i = 0; i < size; i++) {
    std::cout << "Value " <<i<<" 값 : ";
    std::cin >> numbers[i];
  }

  std::cout  << '\n'<<"두 배로 부풀리기"<<'\n';

  mul_two_array(numbers,size);
  printValue(numbers,size);

  std::cout  << '\n'<<"역순으로 출력"<<'\n';

  printReverse(numbers,size);

  std::cout  << '\n'<<"역순으로 정렬"<<'\n';

  reverseArray(numbers, size);
  printValue(numbers, size);
  return 0;
}

void printValue(int input[],int size) {
  for (int i = 0; i < size; i++) {
    std::cout << "Value " <<i<<" : "<<input[i]<< '\n';
  }
}


void mul_two_array(int input[],int size) {
  for (int i = 0; i < size; i++) {
    input[i] *= 2;
  }
}

void printReverse(int input[],int size) {
  for (int i = 0; i < size; i++) {
    int iReverse=size-i-1;
    std::cout << "Value " <<iReverse<<" : "<<input[iReverse]<< '\n';
  }
  /*
  for (int i = size-1; i >=0; i--) {
    std::cout << "Value " <<i<<" : "<<input[i]<< '\n';
  }
  이 for문도 똑같이 작동한다.
  */
}

void swap(int &a, int &b) {
  int temp = b;
  b=a;
  a=temp;

}
void reverseArray(int input[],int size) {
  int middle = size/2;
  for (int i = 0; i < middle; i++) {
    swap(input[i], input[size-i-1]);
  }

}
