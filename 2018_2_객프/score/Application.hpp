#ifndef Application_hpp
#define Application_hpp
#include <vector>
#include "/fstream/Myifstream.hpp"

#include "Student.hpp"
class Application {
private:
  std::vector<Student> Student_List;
  Myifstream inFile_Mid1;
  Myifstream inFile_Mid2;
  Myifstream inFile_Mid3;
  Myifstream inFile_Quiz;
public:
  Application (){}
  void Run();
  void GetCommand();
  void GetData(const std::string &inID);
};
void Application::Run(){
  std::string inID;
  do {
    std::cout << "학번을 입력하세요 : ";
    std::cin >> inID;
  } while(!this->GetData(inID));
  int command;
  while ((command=this->GetCommand())) {
    switch (command) {
      case 1:
      break;
      case 0:
      std::cout << "프로그램을 종료합니다..." << '\n';
      return;
    }
  }
}
void Application::GetCommand(){
  int command;
  while (1) {
    std::cout <<" ---------------------------" << '\n';
    std::cout <<"|"<<std::setw(25)<<std::left<<"\t1. 1차 시험 점수 확인"<<'|'<<'\n';
    std::cout <<"|"<<std::setw(25)<<std::left<<"\t2. 2차 시험 점수 확인"<<"|"<< '\n';
    std::cout <<"|"<<std::setw(27)<<std::left<<"\t3. 기말 시험 점수 확인"<<"|"<< '\n';
    std::cout <<"|"<<std::setw(27)<<std::left<<"\t4. 퀴즈 점수 확인"<<"|"<< '\n';
    std::cout <<"|"<<std::setw(27)<<std::left<<"\t5. 총 점수 확인"<<"|"<< '\n';
    std::cout <<"|"<<std::setw(23)<<std::left<<"\t0. 종료"<<"|" <<'\n';
    std::cout <<" ---------------------------" << '\n';
    if (std::cin.fail()||!(std::cin>>command)||command<0||command>5) {
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

void Application::GetData(const std::string & inID){
  std::vector<Student>::iterator iter;
  for (iter = std::begin(this->Student_List); iter != std::end(this->Student_List); iter++) {
    if (*iter==inID) {

    }
  }


}


#endif /* Application_hpp */
