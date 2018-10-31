#include <iostream>

struct person {
  char* name;
  int age;
  double height;
};

int main() {
  person people[5];
  for (int i = 0; i < 5; i++) {
    std::cin >> people[i].name
             >> people[i].age
             >> people[i].height;
  }

  for (int i = 0; i < 5; i++) {
    std::cout << people[i].name <<"("<<people[i].age<<")"<<people[i].heigh<<"cm" '\n';
  }

  return 0;
}
