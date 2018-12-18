#ifndef Midterm2_hpp
#define Midterm2_hpp
#include "Score.hpp"
class Midterm2 : public Score {

public:
  Midterm2 (const int &prob1, const int &prob2, const int &prob3);
  std::string WhatIs() override;
  void printInfo() override;
};
Midterm2::Midterm2 (const int &prob1, const int &prob2, const int &prob3):
Score(prob1,prob2,prob3){}
std::string Midterm2::WhatIs(){ return "Mid2" ; }
void Midterm2::printInfo(){
  std::cout << "\t----  MidTerm2 Test --------------------" << '\n';
  Score::printInfo();
}
#endif /* Midterm2_hpp */
