#ifndef Application_hpp
#define Application_hpp
#include <iostream>
#include <iomanip>
#include "Dictionary.hpp"
#include "Error.hpp"
class Application {
private:
  Dictionary DicApp;
public:
  Application (){}
  void Run();
  int GetCommand();


};
void Application::Run(){
  int command;
  while ((command=this->GetCommand())) {
    switch (command) {
      case 1:
      this->DicApp.addWord();
      break;
      case 2:
      this->DicApp.showWord();
      break;
      case 3:
      this->DicApp.showAllWord();
      break;
      case 4:
      std::cout << "프로그램을 종료합니다..." << '\n';
      return ;
    }
  }
}
int Application::GetCommand(){
  int command;
  while (1) {
    try{
      std::cout <<" ---------------------------" << '\n';
      std::cout <<"|"<<std::setw(25)<<std::left<<"\t1. 단어 등록"<<'|'<<'\n';
      std::cout <<"|"<<std::setw(25)<<std::left<<"\t2. 단어 탐색"<<"|"<< '\n';
      std::cout <<"|"<<std::setw(27)<<std::left<<"\t3. 모든 단어 조회"<<"|"<< '\n';
      std::cout <<"|"<<std::setw(23)<<std::left<<"\t4. 종료"<<"|" <<'\n';
      std::cout <<" ---------------------------" << '\n';
      std::cout << "메뉴 입력 : ";
      if (std::cin.fail()||!(std::cin>>command)||command<1||command>4) {
        std::cin.clear(); //clear flag
        std::cin.ignore(INT_MAX, '\n'); //empty input buffer
        throw InvalidOperation();
      } else{
        std::cin.clear(); // clear flag
        std::cin.ignore(INT_MAX, '\n'); // empty input buffer
        return command;
      }
    } catch(std::exception &ex){
      std::cout << ex.what() << '\n';
      continue;
    }
  }
}
#endif /* Application_hpp */
