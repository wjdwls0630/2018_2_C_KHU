#ifndef rectangle_hpp
#define rectangle_hpp
#include "shape.hpp"
#include <algorithm>

class Rectangle : public Shape {
private:
  double length;
  double width;

public:
  Rectangle (double len, double wid);
  double span() const override;
  double area() const override;

};
Rectangle::Rectangle (double len, double wid):length(len),width(wid){}
double Rectangle::span() const{
  return std::max(length, width);
}
double Rectangle::area() const{
  return this->length*this->width;
}

#endif /*rectangle_hpp*/
