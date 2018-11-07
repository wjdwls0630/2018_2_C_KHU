#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Student {
private:
  //Member data declaration(property)

  string Name;
  int ID;
  string Major;
  std::vector<string>Subject_List ;
  std::vector<char> Grade_List;

public:
  //Member Function declaraltion(method)

  Student();
  Student(const string &Student_Name,const int &Student_ID,const string &Student_Major);
  void setName(string Student_Name);
  void setID(int Student_ID);
  void setMajor(string Student_Major);
  void print();
  void addGrade(const string &subject,const char &grade);
  void printGrades();
  float getGPA();
};

//definition

//constructor

Student::Student(){
  Name="";
  ID=0;
  Major="";
}

Student::Student (const string &Student_Name,const int &Student_ID,const string &Student_Major){
  Name=Student_Name;
  ID=Student_ID;
  Major=Student_Major;
}

//set member data (property)

void Student::setName(string Student_Name) {
  Name=Student_Name;
}
void Student::setID(int Student_ID) {
  ID=Student_ID;
}
void Student::setMajor(string Student_Major) {
  Major=Student_Major;
}

//print object data

void Student::print() {
  std::cout << Name << ' '<<ID << ' '<<Major ;
  std::cout << '\n';
}

// add Grade

void Student::addGrade(const string &subject,const char &grade){
  Subject_List.push_back(subject);
  Grade_List.push_back(grade);
}

//print Grade

void Student::printGrades() {
  for (int i = 0; i < Subject_List.size(); i++) {
    std::cout << Subject_List[i] << ' '<<Grade_List[i];
    std::cout  << '\n';
  }
}



//main
int main() {

  Student harry("Harry", 2018101234, "SWCON");
  Student ron;

  ron.setName("Ron");
  ron.setID(2015103977);
  ron.setMajor("EE");

  harry.print();
  ron.print();

  harry.addGrade("Programming",'B');
  harry.addGrade("English",'A');
  harry.addGrade("Writing",'B');
  harry.printGrades();

  return 0;
}
