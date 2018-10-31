#include <iostream>

int prompt(int n) {
  int result;
  std::cout << "Please enter integer #" <<n<<": ";
  std::cin >> result;
  return result;
}
int main() {
  int value1, value2, sum;
  std::cout << "This program adds together two integers." << '\n';
  value1=prompt(1);
  value2=prompt(2);
  sum=value1+value2;
  std::cout << value1 <<" + "<<value2<<" = "<<sum<< '\n';
  return 0;
}
