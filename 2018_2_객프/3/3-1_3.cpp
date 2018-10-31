#include <iostream>

double square_root(double x) {
  double diff;
  double root = 1.0;
  do {
    root=(root+x/root)/2.0;
    diff = root *root -x;
  } while(diff>0.0001||diff<-0.0001);
  return root;
}
int main() {
  double x;
  std::cin >> x;
  std::cout << square_root(x) << '\n';

  return 0;
}
