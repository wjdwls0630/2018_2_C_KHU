#ifndef Paper_hpp
#define Paper_hpp
#include <iostream>
#include "PureBase.hpp"
class Paper : public PureBase {
public:
  void shoot() override;
};
void Paper::shoot(){ std::cout << "보" << '\n'; }
#endif /* Paper_hpp */
