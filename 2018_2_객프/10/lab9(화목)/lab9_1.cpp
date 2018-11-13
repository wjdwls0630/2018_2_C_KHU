#include <iostream>
#include <string>
using namespace std;

class User {
private:
  std::string id;
  std::string password;
public:
  User () {

  }
  void setID(const std::string &id) {
    this->id=id;
  }
  void setPw(const std::string &pw) {
    this->password=pw;
  }
  std::string getID() const{
    return id;
  }
  std::string getPw() const{
    return password;
  }


};

bool searchID(User user[],std::string searchId,int *pindex);
bool SearchPw(User user, std::string searchPassword);

int main() {

  User user[3];
  string id="", password="";
  string searchId = "", searchPassword = "";

  for (int i = 0; i < 3; i++) {
    std::cout << "============" <<i+1<< "============"<< '\n';
    std::cout << "id : ";
    std::cin >> id;
    for (int j = 0; j < 3; j++) {
      if (user[j].getID()==id) {
        std::cout << "Error : 100 이미 존재하는 ID입니다." << '\n';
        std::cout << "종료합니다." << '\n';
        exit(100);
      }
    }
    std::cout << "password : ";
    std::cin >> password;
    user[i].setID(id);
    user[i].setPw(password);
    std::cout << "============" <<"===="<< "============"<< '\n';
    std::cout << '\n';
  }
  for (int i = 0; i < 3; i++) {
    std::cout << user[i].getID() <<' '<<user[i].getPw()<< '\n';
  }

  int index=0;
  while (1) {
    index=0;
    std::cout << "============" <<"LogIn"<< "============"<< '\n';
    std::cout << "ID : ";
    std::cin >> searchId;
    if (searchId=="종료") {
      std::cout << "종료하겠습니다." << '\n';
      break;
    } else{
      if (searchID(user,searchId,&index)) {
        std::cout << index << '\n';
        std::cout << "Password : " ;
        std::cin >> searchPassword;
        if (SearchPw(user[index],searchPassword)) {
          std::cout << "로그인 되셨습니다." << '\n';
          std::cout << "============" <<"====="<< "============"<< '\n';
          std::cout << '\n';
          break;
        } else {
          std::cout << "잘못된 ID거나 Password입니다." << '\n';
          std::cout << "============" <<"====="<< "============"<< '\n';
          std::cout << '\n';
        }
      } else {
        std::cout << "잘못된 ID거나 Password입니다." << '\n';
        std::cout << "============" <<"====="<< "============"<< '\n';
        std::cout << '\n';
        continue;
      }
    }
  }
}

bool searchID(User user[],std::string searchId,int *pindex){
  bool search_done=false;
  for (int i = 0; i < 3; i++) {
    std::cout << user[i].getID() << '\n';
    if (user[i].getID()==searchId) {
      search_done=true;
      *pindex=i;
      return search_done;
    }
  }
  *pindex=-1;
  return search_done;
}

bool SearchPw(User user, std::string searchPassword){
  bool search_done=false;
  if (user.getPw()==searchPassword) {
    search_done=true;
  }
  return search_done;
}
