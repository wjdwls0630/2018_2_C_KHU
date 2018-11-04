#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector1;
  std::vector<int> vector2(10);
  std::vector<int> vector3(10,8);
  std::vector<int> vector4={10,20,30,40};

  std::cout << "vector1 : ";
  for (int i = 0; i < vector1.size(); i++) {
    std::cout <<vector1[i] << ' ';
  }
  std::cout  << '\n';

  std::cout << "vector2 : ";
  for (int i = 0; i < vector2.size(); i++) {
    std::cout <<vector2[i] << ' ';
  }
  std::cout  << '\n';

  std::cout << "vector1 : ";
  for (int i = 0; i < vector3.size(); i++) {
    std::cout <<vector3[i] << ' ';
  }
  std::cout  << '\n';

  std::cout << "vector1 : ";
  for (int i = 0; i < vector4.size(); i++) {
    std::cout <<vector4[i] << ' ';
  }
  std::cout  << '\n';
  return 0;
}
