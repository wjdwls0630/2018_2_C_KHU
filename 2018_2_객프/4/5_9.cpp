#include <iostream>

int main() {
  int input =0, //Ensure the Loop is entered
     sum=0; // Initallize Sum
  //Request input from user
  std::cout << "Enter numbers to sum, negative number ends list : ";
  while (input>=0) { // A negative number exits the loop
    std::cin >> input;
    if (input>=0) {
      sum += input;
    }
  }
  std::cout << "Sum = " <<sum<< '\n';
  return 0;
}
