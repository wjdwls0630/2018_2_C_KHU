#include <iostream>
#include <vector>

void print(std::vector<int> v);
int sum(std::vector<int> v);

int main() {
  std::vector<int> v{1,2,3,4,5};
  print(v);
  std::cout << sum(v) << '\n';


  return 0;
}

void print(std::vector<int> v) {
  for (auto elem : v) {
    std::cout << elem << ' ';
  }
  std::cout  << '\n';
}
int sum(std::vector<int> v) {
  int result=0;
  for(auto elem : v){
    result+=elem;
  }
  return result;
}
