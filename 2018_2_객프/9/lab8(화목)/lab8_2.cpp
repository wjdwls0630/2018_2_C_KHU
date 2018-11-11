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
bool check_list(CStudent a[],int n,int target){
  for (int i = 0; i < n; i++) {
    if (target==a[i].getNumber()) {
      return false;
    }
  }
  return true;
}

int main() {
  CStudent s[3];
  int inputNumber;
  std::string inputName, inputMajor;
  int length =0;
  CStudent student;
  while (1) {
    std::cout << length+1 <<" 번째 학생 입력 "<< '\n';
    std::cout << "학번 : " ;
    std::cin >> inputNumber;
    std::cout << "이름 : ";
    std::cin >> inputName;
    std::cout << "전공 : " ;
    std::cin >> inputMajor;
    if (check_list(s, 3,inputNumber)) {
      student.setNumber(inputNumber);
      student.setName(inputName);
      student.setMajor(inputMajor);
      s[length]=student;
      length++;
      std::cout << "입력 완료 " << '\n'<<'\n';
    } else{
      std::cout << "중복된 학번이 존재합니다." << '\n'<<'\n';
      continue;
    }
    if (length>2) {
      std::cout << "--------모든 입력이 완료 되었습니다.--------" << '\n';
      break;
    }
  }
  for (int i = 0; i < 3; i++) {
    std::cout <<i+1 <<"학생정보" << '\n';
    s[i].Display();
  }


  return 0;
}
