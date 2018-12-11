#include <iostream>
#include <vector>


template <typename T>
void swap(T &a, T&b){
  T temp = a;
  a=b;
  b=temp;
}

template <typename T>
void sort(std::vector<T> &v){
  int target_index;
  for (int i = 0; i < v.size()-1; i++) {
    target_index=i;
    for (int j = i+1; j < v.size(); j++) {
      if (v[target_index]>v[j]) {
        target_index=j;
      }
    }
    swap(v[i],v[target_index]);
  }
}

template <typename T>
void print(const std::vector<T> &v) {
  for (auto i = std::begin(v); i != std::end(v); i++) {
    std::cout << *i << ' ';
  }
  std::cout  << '\n';
}


int main() {
  std::vector<int> int_list(5);
  int_list = { 10, 5, 8, 1, 3 };
  std::vector<double> double_list(5);
  double_list = { 10.1, 5.1, 8.1, 1.1, 3.1 };
  std::vector<std::string> string_list(5);
  string_list = { "하나", "둘", "셋", "넷", "다섯" };
  //sort, print함수는 매개변수 오버로딩이 아닌 template를 활용하여 만드세요.
  //print함수는 iterator를 활용하세요
  sort(int_list);
  sort(double_list);
  sort(string_list);

  print(int_list);
  print(double_list);
  print(string_list);
  return 0;
}
