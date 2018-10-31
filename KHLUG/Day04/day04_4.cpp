#include <iostream>
#include <string>
using namespace std;
string ToUpper(string UserInput){
  for (int i = 0; i < UserInput.size(); i++) {
    UserInput[i]=toupper(UserInput[i]);
  }
  return UserInput;
}

float CelToFah(int Cel){
  float result = (float)Cel*1.8+32;
  return result;
}

double FahToCel(int Fah){
  double result = ((double)Fah-32)/1.8;
  return result;
}
int main() {
  string UserInput;
  std::cout << "소문자만 입력하세요 :" ;
  std::cin >> UserInput;
  std::cout << ToUpper(UserInput) << '\n';
  int Cel, Fah ;
  std::cout << "섭씨를 입력하세요 : " ;
  std::cin >> Cel;
  std::cout << CelToFah(Cel) << '\n';
  std::cout << "화씨를 입력하세요 : " ;
  std::cin >> Fah;
  std::cout << FahToCel(Fah) << '\n';

  return 0;
}
