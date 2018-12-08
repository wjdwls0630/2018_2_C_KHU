#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec {10, 20, 30, 40, 50};
  int arr[]={10,20,30,40,50};
  for(auto iter = std::begin(vec); iter!=std::end(vec);iter++){
    std::cout << *iter << ' ';
  }
  std::cout  << '\n';

  for(auto iter = std::begin(arr); iter!=std::end(arr);iter++){
    std::cout << *iter << ' ';
  }
  std::cout  << '\n';

  return 0;
}
