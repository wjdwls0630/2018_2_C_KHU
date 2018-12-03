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
  string getYear(int Current_Year);
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

//get GPA

float Student::getGPA() {
  float sum=0;
  float score=0;
  float result=0;
  for (auto elem : Grade_List) {
    if (elem=='A') {
      score=4;
    } else if(elem=='B'){
      score=3;
    } else if(elem=='C'){
      score=2;
    } else if(elem=='D'){
      score=1;
    } else if(elem=='F'){
      score=0;
    }
    sum+=score;
  }
  result=sum/Grade_List.size();
  return result;
}

// get year

string Student::getYear(int Current_Year){
  int Adimission_Year=ID/1000000;
  int num=Current_Year-Adimission_Year;
  string result ;
  if (num==0) {
    result="Freshmen";
  } else if (num==1) {
    result="Sophomore";
  } else if (num==2) {
    result="Junior";
  } else if (num==3) {
    result="Senior";
  } else if (num==4) {
    result="About to graduate";
  }
  return result;
}

int main() {

  Student harry("Harry", 2018101234, "SWCON");
  Student hermione("Hermione", 2016101234, "EE");
  Student ron;

  ron.setName("Ron");
  ron.setID(2015103977);
  ron.setMajor("EE");

  harry.print();
  hermione.print();
  ron.print();

  harry.addGrade("Programming",'B');
  harry.addGrade("English",'A');
  harry.addGrade("Writing",'B');

  hermione.addGrade("Programming",'C');
  hermione.addGrade("English",'A');
  hermione.addGrade("Writing",'D');

  ron.addGrade("Programming",'F');
  ron.addGrade("English",'C');
  ron.addGrade("Writing",'B');

  harry.printGrades();
  hermione.printGrades();
  ron.printGrades();

  std::cout << harry.getGPA() << '\n';
  std::cout << harry.getYear(2018) << '\n';

  std::cout << hermione.getGPA() << '\n';
  std::cout << hermione.getYear(2018) << '\n';

  std::cout << ron.getGPA() << '\n';
  std::cout << ron.getYear(2018) << '\n';

  return 0;
}
