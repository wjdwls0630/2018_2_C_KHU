#include <iostream>
#include <vector>
#include <string>
class Lecture {
private:
  std::string lecture_name;
  int score;
  friend class Student;

};

class Student {
private:
  std::string name;
  int id;
  std::string major;
  int size;
  int lecture_count;
  std::vector<Lecture> lecture_list;
  float GPA;

public:
  Student (const std::string &name, const int &id, const std::string &major,const int &lecture_count);
  ~Student();
  void print();
  float getGPA() const;
  void addLecture(const std::string &lecture_name, const std::string &grade);
  int turn_Score(const std::string & grade) const;
  void print_worst_grade();
  void print_best_grade();


};

Student::Student (const std::string &name, const int &id, const std::string &major,const int &lecture_count)
:name(name),id(id),major(major),size(0),lecture_count(lecture_count),GPA(0){
  lecture_list.resize(this->lecture_count);
}
Student::Student::~Student(){}

void Student::print() {
  std::cout << name << '\n';
  std::cout << id << '\n';
  std::cout << major << '\n';
  std::cout << GPA << '\n';
}
float Student::getGPA() const {
  return GPA;
}
void Student::addLecture(const std::string &lecture_name, const std::string &grade) {
  float temp=GPA*size;
  lecture_list[size].lecture_name=lecture_name;
  lecture_list[size].score=turn_Score(grade);
  temp+=lecture_list[size].score;
  size++;
  GPA=temp/size;
}
int Student::turn_Score(const std::string & grade) const {
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
  int target=10;
  int index=0;
  for (int i = 0; i < lecture_count; i++) {
    if (lecture_list[i].score<target) {
      target=lecture_list[i].score;
      index=i;
    }
  }
  std::cout << lecture_list[index].lecture_name <<" : "<<lecture_list[index].score<< '\n';
}
void Student::print_best_grade() {
  int target=0;
  int index=0;
  for (int i = 0; i < lecture_count; i++) {
    if (lecture_list[i].score>target) {
      target=lecture_list[i].score;
      index=i;
    }
  }
  std::cout << lecture_list[index].lecture_name <<" : "<<lecture_list[index].score<< '\n';
}




int main() {
  Student s1("jobs",2017103,"Korean",6);
  Student s2("wozniak",2016103,"Computer",6);
  Student s3("gates",2018103,"Architecture",6);

  s1.addLecture("OOP","F");
  s1.addLecture("CN","B");
  s1.addLecture("CS","C");
  s1.addLecture("CG","D");

  s2.addLecture("OOP","F");
  s2.addLecture("CN","D");
  s2.addLecture("CS","B");
  s2.addLecture("CG","C");

  s3.addLecture("OOP","F");
  s3.addLecture("CN","A");
  s3.addLecture("CS","D");
  s3.addLecture("CG","C");

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
