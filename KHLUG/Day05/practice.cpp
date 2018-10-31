#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //First Line
  std::cout <<setw(8)<<setfill(' ')<<'|' ;


  for (int i = 0; i < 5; i++) {
    std::cout << setw(9)<<"과목 "<<i+1;
  }
  std::cout << setw(3) <<'|';

  std::cout << setw(7) <<" 평  균"<< '\n';
  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';



  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20 F" ;
  std::cout <<setw(8) <<"90 A" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50 D" ;
  std::cout  << '\n';

  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20 F" ;
  std::cout <<setw(8) <<"90 A" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50 D" ;
  std::cout  << '\n';

  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20 F" ;
  std::cout <<setw(8) <<"90 A" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50 D" ;
  std::cout  << '\n';

  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20 F" ;
  std::cout <<setw(8) <<"90 A" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50 D" ;
  std::cout  << '\n';

  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20 F" ;
  std::cout <<setw(8) <<"90 A" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(8) <<"50 D" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50 D" ;
  std::cout  << '\n';

  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';

  std::cout<<setw(8)<<setfill(' ')<<"평  균" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  std::cout <<setw(8) <<"20" ;
  std::cout <<setw(8) <<"20" ;
  std::cout <<setw(8) <<"20" ;
  std::cout <<setw(8) <<"20" ;
  std::cout <<setw(8) <<"20" ;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<"50" ;
  std::cout  << '\n';


  return 0;
}
