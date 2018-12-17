#ifndef Rock_hpp
#define Rock_hpp
#include <iostream>
#include "PureBase.hpp"
class Rock : public PureBase {
public:
  void shoot() override;
};
void Rock::shoot(){ std::cout << "바위" << '\n'; }
#endif /* Rock_hpp */
