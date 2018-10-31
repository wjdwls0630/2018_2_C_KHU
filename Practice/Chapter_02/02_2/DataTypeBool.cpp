#include <iostream>
using namespace std;

bool IsPositvie(int num) {
  if (num<=0)
    return false;

  else
    return true;

}

int main(void) {
  bool isPos;
  int num;
  std::cout << "Input Number : ";
  std::cin >> num;
  isPos=IsPositvie(num);
  if (isPos)
    std::cout << "Positive number" << '\n';

  else
    std::cout << "Negative number" << '\n';

  return 0;
}
