#include <iostream>
#include <vector>

void print(const std::vector<int> &v) {
  for (int elem : v){
    std::cout << elem << ' ';
  }
  std::cout << '\n';
}

int sum(const std::vector<int> &v){
  int result =0;
  for (int elem : v){
    result += elem;
  }
  return result;
}
int main() {


  std::vector<int> list{2,4,6,8};
  print(list);
  std::cout <<sum(list) << '\n';
  int n = list.size();
  for (int i = 0; i < n; i++) {
    list[i]=0;
  }
  print(list);
  std::cout << sum(list) << '\n';



  return 0;
}
