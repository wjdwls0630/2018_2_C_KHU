#include <iostream>
#include <string>
void change_string(std::string *a);
int main() {
  std::string str="This is default value";
  std::cout << "기본값 출력> " <<str<< '\n';
  change_string(&str);
  std::cout << "변환값 출력> " <<str<< '\n';
  return 0;
}
void change_string(std::string *a) {
  *a="ChangeValue";
}
