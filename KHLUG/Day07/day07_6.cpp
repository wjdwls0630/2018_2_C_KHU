#include <iostream>


using namespace std;

int main() {
  char cInput;
  std::cout << "[스페이스][문자]를 입력하세요: ";
  std::cin >> cInput;
  std::cout << "받은 문자: " <<(int)cInput<< '\n';
  std::cout  << '\n';

  cin.unsetf(ios::skipws);
  std::cout << "cin의 플래그: skipws를 해제" << '\n';
  std::cin >> cInput;
  std::cout << "받은 문자: " <<(int)cInput<< '\n';
  std::cout  << '\n';
  std::cout << "[스페이스][문자]를 입력하세요: ";
  std::cin >> cInput;
  std::cout << "받은 문자: " <<(int)cInput<< '\n';
  std::cin >> cInput;
  std::cout << "받은 문자: " <<(int)cInput<< '\n';
  std::cin >> cInput;
  std::cout << "받은 문자: " <<(int)cInput<< '\n';


  return 0;
}
