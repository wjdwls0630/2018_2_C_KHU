#ifndef circle_hpp
#define circle_hpp
#include "ellipse.hpp"


class Circle : public Ellipse {
private:
  static const double PI;

public:
  Circle(double radius);

};
const double Circle::PI=3.14159;
Circle::Circle (double radius):Ellipse(radius,radius){}

#endif /*circle_hpp*/
