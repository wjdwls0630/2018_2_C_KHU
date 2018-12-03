#include <iostream>

int main() {
  int i1 = 2, i2 = 5, i3 = -3;
  double d1 = 2.0, d2 = 5.0, d3 = -0.5;
  std::cout <<"1. i1 + (i2 * i3) = " <<i1 + (i2 * i3) << '\n';
  std::cout <<"2. i1 * (i2 + i3) = " << i1 * (i2 + i3) << '\n';
  std::cout <<"3. i1 / (i2 + i3) = " << i1 / (i2 + i3) << '\n';
  std::cout <<"4. i1 / i2 + i3 = " << i1 / i2 + i3 << '\n';
  std::cout <<"5. 3+4+5/3 = " << 3+4+5/3 << '\n';
  std::cout <<"6. (3 + 4 + 5) / 3 = " << (3 + 4 + 5) / 3 << '\n';
  std::cout <<"7. d1 + (d2 * d3) = " << d1 + (d2 * d3) << '\n';
  std::cout <<"8. d1 + d2 * d3 = " << d1 + d2 * d3 << '\n';
  std::cout <<"9. d1 / d2 - d3 = " << d1 / d2 - d3 << '\n';
  std::cout <<"10. d1 / (d2 - d3) = " << d1 / (d2 - d3) << '\n';
  std::cout <<"11. d1 + d2 + d3 / 3 = " << d1 + d2 + d3 / 3 << '\n';
  std::cout <<"12. (d1 + d2 + d3) / 3 = " << (d1 + d2 + d3) / 3 << '\n';
  return 0;
}
