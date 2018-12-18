#ifndef Score_hpp
#define Score_hpp
class Score {
private:
  int prob1;
  int prob2;
  int prob3;
  int Total;
public:
  Score (const int &prob1, const int &prob2, const int &prob3);
  virtual ~Score(){}
  virtual std::string WhatIs() =0;
  virtual void printInfo();
  int GetProb1() const;
  int GetProb2() const;
  int GetProb3() const;
  int GetTotal() const;
};
Score::Score (const int &prob1, const int &prob2, const int &prob3):
prob1(prob1),prob2(prob2),prob3(prob3),Total(prob1+prob2+prob3){}
int Score::GetProb1() const { return this->prob1; }
int Score::GetProb2() const { return this->prob2; }
int Score::GetProb3() const { return this->prob3; }
int Score::GetTotal() const { return this->Total; }
void Score::printInfo(){
  std::cout << "\t|        Problem 1 Score : "<<this->GetProb1()<<"           |" << '\n';
  std::cout << "\t|        Problem 2 Score : "<<this->GetProb2()<<"          |" << '\n';
  std::cout << "\t|        Problem 3 Score : "<<this->GetProb3()<<"           |" << '\n';
  std::cout << "\t|        Total Score : "<<this->GetTotal()<<"              |" << '\n';
  std::cout << "\t----------------------------------------" << '\n';
}
#endif /* Score_hpp */
