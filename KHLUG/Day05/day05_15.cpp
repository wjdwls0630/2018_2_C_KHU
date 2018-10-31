#include <iostream>


struct person {
  char* name;
  int age;
  double height;
};

int main() {
  person individual;
  individual.name="KHU";
  individual.age=21;
  individual.height=180;

  std::cout << individual.name << '\n';
  std::cout << individual.age << '\n';
  std::cout << individual.height << '\n';



  return 0;
}
