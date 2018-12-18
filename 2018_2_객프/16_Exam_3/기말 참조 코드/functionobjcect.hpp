#include <iostream>
#include <functional>

std::function<int(int)> make_adder(){
  int loc_val=2;
  return [loc_val](int x)->int {return x+loc_val;};
}
int main() {
  auto f = make_adder();
  std::cout << f(10) << '\n';
  std::cout << f(2) << '\n';
  return 0;
}
