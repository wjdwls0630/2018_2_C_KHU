#include <iostream>

void printValue(int input[], int size);
int main() {

  int numbers[]={3,7,12,5,4,6};
  int size = sizeof(numbers)/sizeof(numbers[0]);
  /*
  sizeof()함수는 해당 변수의 크기 (byte)를 반환한다.
  따라서 배열 전체의 크기를 배열 원소 하나의 크기로 나눠주면
  배열에 원소가 몇개인지 알 수 있다.
  */
  printValue(numbers,size);
  return 0;
}

void printValue(int input[],int size) {
  for (int i = 0; i < size; i++) {
    std::cout << "Value " <<i<<" : "<<input[i]<< '\n';
  }
  /*
  배열이 매개변수로 들어갈 땐 자동으로 pass by reference로
  들어가기 때문에 배열의 메모리 주소만 넘어간다. 따라서 sizeof()함수로
  크기를 알 수 없다.
  따라서 함수 안에서 매개변수로 들어간 배열의 크기를 알려면 함수 밖에서
  크기를 정의해 배열과 함께 넘겨줘야 한다.
  */
}


//배열의 원소 하나하나는 변수와 같기 때문에 매개변수로 똑같이 넘겨주면 된다.
