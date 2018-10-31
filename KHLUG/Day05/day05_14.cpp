#include <iostream>
#include <iomanip>

const int MAX_ROWS=5;
const int MAX_COlS=5;
using namespace std;


void GetData(int students_Table[][MAX_COlS]);
void view_Table(int students_Table[][MAX_COlS]);
void view_First_line();
void view_Score(int students_Table[][MAX_COlS]);
char View_Grade(int n);
int Get_Average(int students_Table_line[]);
void view_Last_line(int students_Table[][MAX_COlS]);


int main() {
  int students_Table[MAX_ROWS][MAX_COlS];

  GetData(students_Table);
  view_Table(students_Table);





  return 0;
}

void GetData(int students_Table[][MAX_COlS]) {
  for (int i = 0; i < MAX_ROWS; i++) {
    std::cout << "학생 "<<i+1<<'\n';
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout << "점수"<<j+1<<" : ";
      std::cin >> students_Table[i][j];
    }
    for (int i = 0; i < 60; i++) {
      std::cout << "=" ;
    }
    std::cout  << '\n';
  }
  std::cout  << '\n';
  std::cout  << '\n';
}

void view_Table(int students_Table[][MAX_COlS]) {
  view_First_line();
  view_Score(students_Table);
  view_Last_line(students_Table);
}

void view_First_line() {
  //First Line
  std::cout <<setw(9)<<setfill(' ')<<'|' ;

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


void view_Score(int students_Table[][MAX_COlS]) {
  //학생 점수와 평균 출력

  for (int i = 0; i < MAX_ROWS; i++) {
    std::cout<<setw(8)<<setfill(' ')<<"학생 "<<i+1 ;
    std::cout <<setw(2)<<setfill(' ') <<"|";
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout <<setw(6) <<students_Table[i][j]<<' '<<View_Grade(students_Table[i][j]) ;
    }
    std::cout <<setw(3)<<setfill(' ') <<"|";
    int Average=Get_Average(students_Table[i]);
    std::cout <<setw(4) <<Average<<' '<<View_Grade(Average) ;
    std::cout  << '\n';
  }
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

int Get_Average(int students_Table_line[]){
  //한 줄 평균치 계산
  int result=0 , sum=0;
  for (int i = 0; i < MAX_COlS; i++) {
    sum+=students_Table_line[i];
  }
  result=sum/MAX_COlS;
  return result;
}

void view_Last_line(int students_Table[][MAX_COlS]) {
  //Last Line
  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';
  std::cout<<setw(9)<<setfill(' ')<<" 평  균" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  int Average_Array[MAX_COlS];
  int Average_Col=0;
  int Total_Average_Sum=0;
  int Total_Average=0;

  for (int j = 0; j < MAX_COlS; j++) {
    Average_Col=0;
    for (int i = 0; i < MAX_ROWS; i++) {
      Average_Col+=students_Table[i][j];
    }
    Average_Array[j]=Average_Col/MAX_ROWS;
    Total_Average_Sum+=Average_Array[j];
    std::cout <<setw(8) <<Average_Array[j];

  }
  Total_Average=Total_Average_Sum/MAX_COlS;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<Total_Average ;
  std::cout  << '\n';

}
