#include <iostream>
#include <string>

class CStudent {
private:
  int id;
  std::string name;
  std::string major;


public:
  CStudent () :
  id(2018000000),name("홍길동"),major("컴퓨터공학과"){

  }

  CStudent(int stu_id, std::string stu_name, std::string stu_major):
  id(stu_id),name(stu_name),major(stu_major){

  }
  void Display(){
    std::cout << "학번 :" <<id<< '\n';
    std::cout << "이름 :" <<name<< '\n';
    std::cout << "전공 :" <<major<< '\n';
    std::cout  << '\n';
  }
  void setNumber(int number) {
    id=number;
  }
  void setName(std::string stu_name) {
    name=stu_name;
  }
  void setMajor(std::string stu_major) {
    major=stu_major;
  }
  int getNumber(){
    return id;
  }
  std::string getName(){
    return name;
  }
  std::string getMajor(){
    return major;
  }

};

int main() {
  CStudent s1;
  s1.Display();

  CStudent s2(1999000000,"공지철","연극영화과");
  s2.Display();

  s1.setNumber(2006000000);
  s1.setName("민경훈");
  s1.setMajor("포스트모던");
  std::cout << "학번 :" <<s1.getNumber()<< '\n';
  std::cout << "이름 :" <<s1.getName()<< '\n';
  std::cout << "전공 :" <<s1.getMajor()<< '\n';
  std::cout  << '\n';


  return 0;
}
