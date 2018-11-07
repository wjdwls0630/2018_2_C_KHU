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

  //constructor
  Student();
  Student (const string &Student_Name,const int &Student_ID,const string &Student_Major);

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


//main
int main() {

  Student harry("Harry", 2018101234, "SWCON");
  Student ron;

  return 0;
}
