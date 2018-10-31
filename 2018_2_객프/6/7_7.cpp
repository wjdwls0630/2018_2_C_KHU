#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char aChar;
  //Read Characters
  std::cout << "Enter <space z>     : ";
  std::cin >> aChar;
  std::cout << "Characters read is  : " <<aChar<<'\n';
  cin.unsetf(ios::skipws);
  cout << "cin의 플래그: skipws를 해제" << endl;
  std::cin >> aChar;
  std::cout << "Characters read is  : " <<(int)aChar<<'\n';
  std::cout << "Enter <space z> again : " ;
  std::cin >> aChar;
  std::cout << "Characters read is  : " <<(int)aChar<<'\n';
  std::cin >> aChar;
  std::cout << "Characters read is  : " <<(int)aChar<<'\n';
  std::cin >> aChar;
  std::cout << "Characters read is  : " <<(int)aChar<<'\n';




  return 0;
}
