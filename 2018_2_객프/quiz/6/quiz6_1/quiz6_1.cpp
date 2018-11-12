#include <iostream>
class KHULecture {
private:
  std::string Lecture_Name;
  std::string Lecture_Code;
  int Lecture_Student;


public:
  KHULecture ();
  KHULecture (const std::string &Lecture_Name, const std::string &Lecture_Code);
  ~KHULecture();
  void setName(const std::string & Lecture_Name);
  void setCode(const std::string &Lecture_Code);
  void setStudent(const int & Lecture_Student);
  void print();

};

KHULecture::KHULecture (){
  Lecture_Name="genericLecture";
  Lecture_Code="CSE101";
  Lecture_Student=0;
}
KHULecture::KHULecture (const std::string &Lecture_Name, const std::string &Lecture_Code){
  this->Lecture_Name=Lecture_Name;
  this->Lecture_Code=Lecture_Code;
  this->Lecture_Student=0;
}
KHULecture::~KHULecture (){

}
void KHULecture::setName(const std::string & Lecture_Name) {
  this->Lecture_Name=Lecture_Name;
}
void KHULecture::setCode(const std::string &Lecture_Code) {
  this->Lecture_Code=Lecture_Code;
}
void KHULecture::setStudent(const int & Lecture_Student) {
  this->Lecture_Student=Lecture_Student;
}
void KHULecture::print() {
  std::cout << "강의명 : " <<Lecture_Name<< '\n';
  std::cout << "강의코드 : " <<Lecture_Code<< '\n';
  std::cout << "수강인원 : " <<Lecture_Student<< '\n';
}

int main(int argc, char const *argv[]) {
  KHULecture l1("신시","EE104");
  KHULecture l2;
  l1.setStudent(52);
  l2.setName("객프");
  l2.setCode("CSE104");
  l2.setStudent(40);
  l1.print();
  l2.print();
  return 0;
}
