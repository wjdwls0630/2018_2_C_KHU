#include <iostream>

template<typename T>
class Point {
private:
  T x;
  T y;
public:
  Point(){}
  Point(const T &x, const T &y):x(x),y(y){}
  void set_x(const T &x) { this->x=x; }
  void set_y(const T &y) { this->y=y; }
  T getX() const{ return x; }
  T getY() const{ return y; }
};

int main() {
  Point<double> pt1(8.5,0.0);
  Point <double>*pt2;
  Point <int>*pt3;
  pt3 = new Point<int>(10,10);
  pt2=&pt1;

  std::cout <<"pt1 = ( "<< pt1.getX()<<", "<<pt1.getY()<<" )"<< '\n';
  std::cout <<"*pt2 = ( "<< pt2->getX() <<", "<<pt2->getY()<<" )"<< '\n';
  std::cout <<"*pt3 = ( "<< pt3->getX() <<", "<<pt3->getY()<<" )"<< '\n';

  delete pt3;





  return 0;
}
