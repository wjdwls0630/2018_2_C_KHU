#include <iostream>
#include <vector>
void reverse(std::vector<int> &v);
void swap(int &a, int&b);
int main() {
  std::vector<int> v(10);
  for (int i = 0; i < v.size(); i++) {
    v[i]=i+1;
  }
  std::cout << "기본 Vector 값 : " << '\n';
  std::cout << "     " ;
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ' ';
  }
  std::cout  << '\n';
  reverse(v);
  std::cout << "함수 실행 후 Vector 값 : " << '\n';
  std::cout << "     " ;
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ' ';
  }
  std::cout  << '\n';
  return 0;
}
void reverse(std::vector<int> &v) {
  int last=v.size()-1;
  for (int i = 0; i < v.size()/2; i++) {
    swap(v[i], v[last-i]);

  }
}
void swap(int &a, int&b) {
  int temp=a;
  a=b;
  b=temp;
}
