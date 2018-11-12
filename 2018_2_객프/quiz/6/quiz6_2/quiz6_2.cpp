#include <iostream>

class Student {
private:
  std::string name;
  int id;
  std::string major;
  int size;
  int MAX_SIZE;
  std::string **grade_list;
  float GPA;

public:
  Student (const std::string &name, const int &id, const std::string &major);
  ~Student();
  void print();
  float getGPA() const;
  void addGrade(const std::string &lecture_name, const std::string & grade);
  float turn_Score(const std::string & grade) const;
  void print_worst_grade();
  void print_best_grade();


};

Student::Student (const std::string &name, const int &id, const std::string &major){
  this->name=name;
  this->id=id;
  this->major=major;
  this->size=0;
  this->MAX_SIZE=100;
  grade_list=new std::string* [MAX_SIZE];
  for (int i = 0; i < MAX_SIZE; i++) {
    grade_list[i]=new std::string[2];
  }
  this->GPA=0;
}
Student::~Student(){
  for (int i = 0; i < MAX_SIZE; i++) {
    delete [] grade_list[i];
  }
  delete [] grade_list;
}

void Student::print() {
  std::cout << name << '\n';
  std::cout << id << '\n';
  std::cout << major << '\n';
  std::cout << GPA << '\n';
}
float Student::getGPA() const {
  return GPA;
}
void Student::addGrade(const std::string &lecture_name, const std::string & grade) {
  float temp=GPA*size;
  grade_list[size][0]=lecture_name;
  grade_list[size][1]=grade;
  size++;

  temp+=turn_Score(grade);
  GPA=temp/size;
}
float Student::turn_Score(const std::string & grade) const {
  float score;
  if (grade=="A") {
    score=4;
  } else if (grade=="B") {
    score=3;
  } else if (grade=="C") {
    score=2;
  } else if (grade=="D") {
    score=1;
  } else if (grade=="F") {
    score=0;
  }
  return score;
}
void Student::print_worst_grade() {
  std::string target="A";
  int index=0;
  for (int i = 0; i < MAX_SIZE; i++) {
    if (turn_Score(target)>turn_Score(grade_list[i][1])) {
      target=grade_list[i][1];
      index=i;
    }
  }
  std::cout << grade_list[index][0] <<" : "<<grade_list[index][1]<< '\n';
}
void Student::print_best_grade() {
  std::string target="F";
  int index=0;
  for (int i = 0; i < MAX_SIZE; i++) {
    if (turn_Score(target)<turn_Score(grade_list[i][1])) {
      target=grade_list[i][1];
      index=i;
    }
  }
  std::cout << grade_list[index][0] <<" : "<<grade_list[index][1]<< '\n';
}

int main() {
  Student s1("jobs",2017103,"Korean");
  Student s2("wozniak",2016103,"Computer");
  Student s3("gates",2018103,"Architecture");

  s1.addGrade("OOP","F");
  s1.addGrade("CN","B");
  s1.addGrade("CS","C");
  s1.addGrade("CG","D");

  s2.addGrade("OOP","F");
  s2.addGrade("CN","D");
  s2.addGrade("CS","B");
  s2.addGrade("CG","C");

  s3.addGrade("OOP","F");
  s3.addGrade("CN","A");
  s3.addGrade("CS","D");
  s3.addGrade("CG","C");

  s1.print();
  s1.print_best_grade();
  s1.print_worst_grade();
  s2.print();
  s2.print_best_grade();
  s2.print_worst_grade();
  s3.print();
  s3.print_best_grade();
  s3.print_worst_grade();





  return 0;
}
