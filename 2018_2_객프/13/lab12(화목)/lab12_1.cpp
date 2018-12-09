#include <iostream>
#include <cmath>

template<typename T>
class Point {
private:
  T x;
  T y;
public:
  void setPointFromKeybord(const T &x, const T &y) {
    this->x=x;
    this->y=y;
  }
  void print(const T &x, const T &y) {
    std::cout << "첫번째 x : " <<this->x<< '\n';
    std::cout << "첫번째 y : " <<this->y<< '\n';
    std::cout << "두번째 x : " <<x<< '\n';
    std::cout << "두번째 y : " <<y<< '\n';
    std::cout << '\n';
    std::cout << "두점 사이의 거리 = " <<(T)sqrt(pow(this->x-x,2)+pow(this->y-y,2))<< '\n';
  }


};
int main() {
  std::cout << "<int>" << '\n';
  Point<int> p1;
  // 두 점의 position을 입력 받는 함수
  p1.setPointFromKeybord(1,1);
  // 두 점 사이의 거리를 출력하는 함수
  p1.print(2,2);


  std::cout << "<double>" << '\n';
  Point<double> p2;
  // 두 점의 position을 입력 받는 함수
  p2.setPointFromKeybord(1,1);
  // 두 점 사이의 거리를 출력하는 함수
  p2.print(2,2);

  std::cout << "<float>" << '\n';
  Point<float> p3;
  // 두 점의 position을 입력 받는 함수
  p3.setPointFromKeybord(1,1);
  // 두 점 사이의 거리를 출력하는 함수
  p3.print(2,2);
  return 0;
}
