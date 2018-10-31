#include <iostream>

/*
 * increment(x)
 *  Illustrate pass by value protocol.
 */

int increment(int x) {
  std::cout << "Beginning execution of increment, x = " <<x<< '\n';
  x++; //Increment x
  std::cout << "Ending execution of increment x = " <<x<< '\n';
  return x;
}
int main() {
  int x =5;
  std::cout << "Before increment, x = " <<x<< '\n';
  increment(x);
  std::cout << "After increment, x = " <<x<< '\n';
  return 0;
}
