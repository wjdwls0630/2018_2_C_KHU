#include <iostream>
#include <iomanip>

const int student_num = 5;
const int test_num = 5;

using namespace std;

struct student {
  int test1;
  int test2;
  int test3;
  int test4;
  int test5;
};


void GetData(student students_Table[]);
void view_Table(student students_Table[]);
void view_First_line();
void view_Score(student students_Table[]);
char View_Grade(int n);
int Get_Average(student students_Table_one);
void view_Last_line(student students_Table[]);


int main() {
  student students_Table[student_num];

  GetData(students_Table);
  view_Table(students_Table);

  return 0;
}



void GetData(student students_Table[]) {
  for (int i = 0; i < student_num; i++) {
    std::cout << "학생 " <<i+1<<"의 시험점수 입력"<< '\n';
    std::cin >> students_Table[i].test1
             >> students_Table[i].test2
             >> students_Table[i].test3
             >> students_Table[i].test4
             >> students_Table[i].test5;
    for (int i = 0; i < 60; i++) {
      std::cout << "=" ;
    }
    std::cout  << '\n';
  }
  std::cout  << '\n';
  std::cout  << '\n';
  }

void view_Table(student students_Table[]) {
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


void view_Score(student students_Table[]) {
  //학생 점수와 평균 출력

  for (int i = 0; i < student_num; i++) {
    std::cout<<setw(8)<<setfill(' ')<<"학생 "<<i+1 ;
    std::cout <<setw(2)<<setfill(' ') <<"|";
    std::cout <<setw(6) <<students_Table[i].test1<<' '<<View_Grade(students_Table[i].test1) ;
    std::cout <<setw(6) <<students_Table[i].test2<<' '<<View_Grade(students_Table[i].test2) ;
    std::cout <<setw(6) <<students_Table[i].test3<<' '<<View_Grade(students_Table[i].test3) ;
    std::cout <<setw(6) <<students_Table[i].test4<<' '<<View_Grade(students_Table[i].test4) ;
    std::cout <<setw(6) <<students_Table[i].test5<<' '<<View_Grade(students_Table[i].test5) ;
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

int Get_Average(student students_Table_one){
  //한 줄 평균치 계산
  int result=0 , sum=0;
  sum = students_Table_one.test1+students_Table_one.test2+students_Table_one.test3+students_Table_one.test4+students_Table_one.test5;
  result=sum/test_num;
  return result;
}

void view_Last_line(student students_Table[]) {
  //Last Line
  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';
  std::cout<<setw(9)<<setfill(' ')<<" 평  균" ;
  std::cout <<setw(2)<<setfill(' ') <<"|";
  int Average_Array[test_num];
  int Average_Col=0;
  int Total_Average_Sum=0;
  int Total_Average=0;


  for (int i = 0; i < student_num; i++) {
    Average_Col+=students_Table[i].test1;
  }
  Average_Array[0]=Average_Col/student_num;
  Average_Col=0;

  for (int i = 0; i < student_num; i++) {
    Average_Col+=students_Table[i].test2;
  }
  Average_Array[1]=Average_Col/student_num;
  Average_Col=0;

  for (int i = 0; i < student_num; i++) {
    Average_Col+=students_Table[i].test3;
  }
  Average_Array[2]=Average_Col/student_num;
  Average_Col=0;
  for (int i = 0; i < student_num; i++) {
    Average_Col+=students_Table[i].test4;
  }
  Average_Array[3]=Average_Col/student_num;
  Average_Col=0;

  for (int i = 0; i < student_num; i++) {
    Average_Col+=students_Table[i].test5;
  }
  Average_Array[4]=Average_Col/student_num;
  Average_Col=0;

  for (int i = 0; i < test_num; i++) {
    Total_Average_Sum+=Average_Array[i];
    std::cout <<setw(8) <<Average_Array[i];

  }

  Total_Average=Total_Average_Sum/test_num;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<Total_Average ;
  std::cout  << '\n';



  }
