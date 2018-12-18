#ifndef Final_hpp
#define Final_hpp
#include "Score.hpp"
class Final : public Score {

public:
  Final (const int &prob1, const int &prob2, const int &prob3);
  std::string WhatIs() override;
  void printInfo() override;
};
Final::Final (const int &prob1, const int &prob2, const int &prob3):
Score(prob1,prob2,prob3){}
std::string Final::WhatIs(){ return "Final" ; }
void Final::printInfo(){
  std::cout << "\t----  Final Test -----------------------" << '\n';
  Score::printInfo();
}
#endif /* Midterm2_hpp */
