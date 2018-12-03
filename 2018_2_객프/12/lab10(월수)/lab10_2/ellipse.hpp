#ifndef ellipse_hpp
#define ellipse_hpp
#include "shape.hpp"
#include <algorithm>

class Ellipse : public Shape {
protected:
  double major_radius;
  double minor_radius;
  static const double PI;
public:
  Ellipse (double major, double minor);
  double span() const override;
  double area() const override;

};

const double Ellipse::PI=3.14159;
Ellipse::Ellipse (double major, double minor)
:major_radius(major),minor_radius(minor){}
double Ellipse::span() const{
  return std::max(this->major_radius, this->minor_radius);
}
double Ellipse::area() const{
  return this->major_radius*this->minor_radius*PI;
}

#endif /*ellipse_hpp*/
