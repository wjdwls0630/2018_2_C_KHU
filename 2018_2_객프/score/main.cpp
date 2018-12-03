#include <iostream>
#include <vector>
#include <fstream>
/*
class Class {
private:
  std::vector<int> Id_List; Id;
  std::vector<Score*> Score_List;
  std::vector<int> Rank_List;
  double Percentage;
  char Grade;
  Midterm1 Mid1;

public:
  Class (const int &Id, const std::vector<int> &score, const  int &Rank, const double & Percentage, const Char &Grade);
  virtual ~Class ();
  int getRank();
  int getId();
  double getPercentage();
  char getGrade();

};
Class::Class (const int &Id, const std::vector<int> &score, const  int &Rank, const double & Percentage, const Char &Grade){

}

int Class::getRank(){ return this->Rank ; }
int Class::getId(){ return this->Id}
double Class::getPercentage(){ return this->Percentage }
char Class::getGrade(){ return this->Grade ;}

class Class_A : public Class{
private:


public:
  Class_A (){
    std::ifstream ifs1("midter1_1.txt");
    int prob1;
    int prob2;
    int prob3;
    while (ifs1) {
      ifs1>>this->Id>>prob1>>prob2>>prob3;
      this->Mid1.setProb(prob1,prob2,prob3);
    }
  };
  virtual ~Class_A ();
};
class Score {
private:
  int Total_Score;

public:
  Score (arguments);
  virtual ~Score ();
};
class Midterm1 {
private:
  int prob1;
  int prob2;
  int prob3;

public:
  Midterm1 (const int &prob1,const int &prob2,const int &prob3)
  :prob1(prob1),prob2(prob2),prob3(prob3){};
  virtual ~Midterm1 ();
  void setProb(onst int &prob1=0,const int &prob2=0,const int &prob3=0) {
    this->prob1=prob1;
    this->prob2=prob2;
    this->prob3=prob3;
  }
  void setProb2(const int &x) { return this->prob2=x;}
  void setProb3(const int &x) { return this->prob3=x;}

};
*/
using Matrix = std::vector<std::vector<int>>;

int main() {
  std::ifstream ifs1("midterm1_1.txt");
  int line_count=0;
  std::string line;
  while (getline(ifs1,line)) {
    line_count++;
  }
  ifs1.close();
  std::cout << line_count << '\n';
  Matrix database(line_count,std::vector<int>(7));
  std::ifstream ifs2("midterm1_1.txt");
  int i=0;
  while (ifs2) {
    ifs2>>database[i][0]>>database[i][1]>>database[i][2]>>database[i][3];
    i++;
  }
  int sum;
  for (int i = 0; i < line_count; i++) {
    sum=0;
    for (int j = 1; j < 4; j++) {
      sum+=database[i][j];
    }
    database[i][4]=sum;
  }
  int target=0;
  for (int i = 0; i < line_count; i++) {
    if (target<database[i][4]) {
      target=database[i][4]
    }
    int smallest_index=0;
    for (int i = 0; i < size-1; i++) {
      smallest_index=i;
      for (int j = i+1; j < size; j++) {
        if (*(a+j)<*(a+smallest_index)) {
          smallest_index=j;
        }
      }
      swap((a+i),(a+smallest_index));
      print_list(a);
    }

  }

  for (int i = 0; i < line_count; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << database[i][j] << ' ';
    }
    std::cout  << '\n';
  }






  return 0;
}
