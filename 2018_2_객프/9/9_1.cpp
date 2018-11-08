#include <iostream>

class Point {
public:
  double x;
  double y;


};

int main() {
  Point pt1,pt2;
  pt1.x=8.5;
  pt1.y=0.0;
  pt2.x=-4;
  pt2.y=2.5;

  std::cout << pt1.x <<pt1.y<< '\n';


  return 0;
}
