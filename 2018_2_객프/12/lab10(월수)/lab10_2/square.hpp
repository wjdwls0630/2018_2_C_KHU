#ifndef square_hpp
#define square_hpp
#include "rectangle.hpp"


class Square : public Rectangle {
public:
  Square(double side);

};
Square::Square (double side):Rectangle(side,side){}

#endif /*square_hpp*/
