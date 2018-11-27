#ifndef triangle_hpp
#define triangle_hpp
#include "shape.hpp"
#include <algorithm>
#include <cmath>

class Triangle : public Shape {
private:
  double side1;
  double side2;
  double side3;

public:
  Triangle (double s1, double s2,double s3);
  double span() const override;
  double area() const override;

};
Triangle::Triangle (double s1, double s2,double s3)
:side1(s1),side2(s2),side3(s3){}
double Triangle::span() const{
  return std::max(this->side1, std::max(this->side2,this->side3));
}
double Triangle::area() const{
  double s= (this->side1+this->side2+this->side3)/2;
  return sqrt(s*(s-this->side1)*(s-this->side2)*(s-this->side3));
}

#endif /*triangle_hpp*/
