#include <iostream>
#include <vector>
void print(const std::vector<int>& v, int inc);
void print_reverse(const std::vector<int>& v, int dec);
int main() {
  std::vector<int> vec(20);
  for (int i = 0; i < 20; i++) {
    vec[i]=i;
  }

   print(vec, 1);
   print(vec, 2);
   print(vec, 4);
   print(vec, 5);
   print(vec, 10);

   std::cout << '\n';
   print_reverse(vec, 1);
   print_reverse(vec, 2);
   print_reverse(vec, 4);
   print_reverse(vec, 5);
   print_reverse(vec, 10);

  return 0;
}

void print(const std::vector<int>& v, int inc) {
    for (auto p = std::begin(v); p != std::end(v); p += inc)
        std::cout << *p << ' ';
    std::cout << '\n';
}
void print_reverse(const std::vector<int>& v, int dec) {
  auto p =std::end(v);
  while (p!=std::begin(v)) {
    p-=dec;
    std::cout << *p << ' ';
  }
  //end() 함수는 리스트의 끝 주소를 리턴하는데, 마지막 값보다 한 칸 뒤 위치의 값을 리턴합니다.
  std::cout  << '\n';

}
