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

//main
int main() {

  Student harry("Harry", 2018101234, "SWCON");
  Student ron;

  ron.setName("Ron");
  ron.setID(2015103977);
  ron.setMajor("EE");

  harry.print();
  ron.print();

  return 0;
}
