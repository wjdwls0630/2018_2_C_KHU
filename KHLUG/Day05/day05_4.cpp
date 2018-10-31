#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

void GetData(int studentn[], int size);
void View_First() ;
void View_Score(int studentn[], int size);
char View_Grade(int n);
int Get_Average(int studentn[], int size);
void View_Last(int student0[],int student1[],int student2[],int student3[],int student4[],  int size);

int main() {

  const int n =5;
  int student0[n];
  int student1[n];
  int student2[n];
  int student3[n];
  int student4[n];

  std::cout << "학생 1"<<'\n';
  GetData(student0,n);
  std::cout << "학생 2"<<'\n';
  GetData(student1,n);
  std::cout << "학생 3"<<'\n';
  GetData(student2,n);
  std::cout << "학생 4"<<'\n';
  GetData(student3,n);
  std::cout << "학생 5"<<'\n';
  GetData(student4,n);


  View_First();
  std::cout<<setw(8)<<setfill(' ')<<"학생 1" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  View_Score(student0,n);
  std::cout<<setw(8)<<setfill(' ')<<"학생 2" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  View_Score(student1,n);
  std::cout<<setw(8)<<setfill(' ')<<"학생 3" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  View_Score(student2,n);
  std::cout<<setw(8)<<setfill(' ')<<"학생 4" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  View_Score(student3,n);
  std::cout<<setw(8)<<setfill(' ')<<"학생 5" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  View_Score(student4,n);
  View_Last(student0,student1,student2,student3,student4,n);





  return 0;
}

void GetData(int studentn[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << "점수"<<i+1<<" : ";
    std::cin >> studentn[i];
  }
}

void View_First() {
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

}
void View_Score(int studentn[],int size) {
  //학생 점수와 평균 출력
  for (int i = 0; i < size; i++) {
    std::cout <<setw(6) <<studentn[i]<<' '<<View_Grade(studentn[i]) ;
  }
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(4) <<Get_Average(studentn, size)<<' '<<View_Grade(Get_Average(studentn, 5)) ;
  std::cout  << '\n';

}
char View_Grade(int n) {
  //점수에 따른 등급 분류
  char Grade;
  if (n>=90) {
    Grade='A';
  } else if (n>=80) {
    Grade='B';
  } else if (n>=70) {
    Grade='C';
  } else if (n>=50) {
    Grade='D';
  } else {
    Grade='F';
  }
  return Grade;
}

int Get_Average(int studentn[], int size){
  //평균치 계산


  int result , sum;
  for (int i = 0; i < size; i++) {
    sum+=studentn[i];
  }
  result=sum/size;
  return result;
}

void View_Last(int student0[],int student1[],int student2[],int student3[],int student4[],  int size) {
  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';
  std::cout<<setw(8)<<setfill(' ')<<"평  균" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  int Average_Set[size];
  int Total_Average=0;
  for (int i = 0; i < size; i++) {
    Average_Set[i]=(student0[i]+student1[i]+student2[i]+student3[i]+student4[i])/size;
    Total_Average+=Average_Set[i];
    std::cout <<setw(8) <<Average_Set[i] ;
  }
  Total_Average/=size;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<Total_Average ;
  std::cout  << '\n';


}
