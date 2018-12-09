#include <iostream>

int evaluate(int(*f)(int,int),int x,int y) { return f(x,y); }
int main() {
  int val;
  val=evaluate([](int x, int y)->int {return x*y; }, 2, 3);
  std::cout << val << '\n';

  val = evaluate([](int x, int y) { return  x * y; }, 2, 3);
  std::cout << val << '\n';

  [](int x, int y) { std::cout << x << " " << y << '\n'; } (10, 20);

  auto f = [](int x) { return  5*x; };
  std::cout << f(10) << '\n';
  return 0;
}
