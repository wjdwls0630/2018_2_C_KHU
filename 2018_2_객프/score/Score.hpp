#ifndef Score_hpp
#define Score_hpp
class Score {
private:
  int prob1;
  int prob2;
  int prob3;
public:
  Score (const int &prob1, const int &prob2, const int &prob2);
  virtual ~Score ();
};
Score::Score (const int &prob1, const int &prob2, const int &prob2):
prob1(prob1),prob2(prob2),prob3(prob3){}
#endif /* Score_hpp */
