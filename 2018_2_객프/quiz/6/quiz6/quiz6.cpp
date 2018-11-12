#include <iostream>
#include <vector>

class Student {
private:
  int id;
  std::string name;
  std::vector<std::string> mNum;
public:
  Student(){
    
  }
  Student(const int &user_num, const std::string &user_name, const std::string &user_Mnum){
    id=user_num;
    name=user_name;
    mNum.push_back(user_Mnum);
  }
  void setId(const int &user_num) {
    id=user_num;
  }
  void setName(const std::string &user_name) {
    name=user_name;
  }
  void setMnum(const std::string &user_Mnum) {
    mNum.push_back(user_Mnum);
  }
  void pInfo() {
    std::cout << "ID: " <<id<< '\n';
    std::cout << "Name: " <<name<< '\n';
    std::cout << "Moblie Number: ";
    for (int i = 0; i < mNum.size(); i++) {
      std::cout << mNum[i] << '\n';
    }
    std::cout  << '\n';


  }
};

int main() {
  Student s1(201800,"Yong-Chan","010-4321-8765");
  Student s2;

  s2.setId(201801);
  s2.setName("Dong-min");
  s2.setMnum("010-1234-5678");
  s1.pInfo();
  s2.pInfo();


  return 0;
}
