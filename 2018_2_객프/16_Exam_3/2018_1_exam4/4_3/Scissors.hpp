#ifndef Scissors_hpp
#define Scissors_hpp
#include <iostream>
#include "PureBase.hpp"

class Scissors : public PureBase {
public:
  void shoot() override;
};
void Scissors::shoot(){ std::cout << "가위" << '\n'; }
#endif /* Scissors_hpp */
