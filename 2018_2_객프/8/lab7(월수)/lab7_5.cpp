#include <iostream>
#include <vector>

void print_list(int a[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << ' ';
  }
  std::cout  << '\n';
}

void clear_list(int a[], int n) {
  for (int i = 0; i < n; i++) {
    a[i]=0;
  }
}

void print_vector(std::vector<int> v) {
  for (int elem : v) {
    std::cout << elem << ' ';
  }
  std::cout  << '\n';
}

void clear_vector(std::vector<int> &v) {
  for (int &elem : v) {
    elem=0;
  }
}
int main() {
  int list[] = {2,4,6,8};
  std::vector<int> v{2,4,6,8};
  print_list(list,4);
  clear_list(list,4);
  print_list(list,4);

  print_vector(v);
  clear_vector(v);
  print_vector(v);

  return 0;
}
