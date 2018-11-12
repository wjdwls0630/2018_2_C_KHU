#include <iostream>

class Point {
private:
  double x;
  double y;
public:
  void set_x(double x) {
    this->x=x;
  }
  void set_y(double y) {
    this->y=y;
  }
  double getX() const{
    return x;
  }
  double getY() const{
    return y;
  }



};

int main() {
  Point pt1;
  Point *pt2;
  Point *pt3;
  pt3 = new Point;
  pt2=&pt1;
  pt1.set_x(8.5);
  pt1.set_y(0.0);


  std::cout <<"pt1 = ( "<< pt1.getX()<<", "<<pt1.getY()<<" )"<< '\n';
  std::cout <<"*pt2 = ( "<< (*pt2).getX()<<", "<<(*pt2).getY()<<" )"<< '\n';
  std::cout <<"*pt2 = ( "<< pt2->getX() <<", "<<pt2->getY()<<" )"<< '\n';

  delete pt3;





  return 0;
}
