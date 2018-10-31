#include <iostream>

void printValue(int input);
int main() {
  int number =100;
  printValue(number);
  int numbers[]={3,7,12,5,4,6};
  printValue(numbers[3]);
  return 0;
}

void printValue(int input) {
  std::cout << "Value : " <<input<< '\n';
}


//배열의 원소 하나하나는 변수와 같기 때문에 매개변수로 똑같이 넘겨주면 된다.
