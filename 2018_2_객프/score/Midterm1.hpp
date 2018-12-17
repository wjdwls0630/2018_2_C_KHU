#ifndef Midterm1_hpp
#define Midterm1_hpp
class Midterm1 : public Score {
private:
  int prob1;
  int prob2;
  int prob3;
public:
  Midterm1 (const int &prob1, const int &prob2, const int &prob2);
  virtual ~Score ();
};
Midterm1::Midterm1 (const int &prob1, const int &prob2, const int &prob2):
prob1(prob1),prob2(prob2),prob3(prob3){}
#endif /* Score_hpp */
