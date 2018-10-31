#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


const int MAX_COlS=5;
using namespace std;

void GetData(int students_Table[][MAX_COlS],int student_num);
void Write_Data_To_File(ofstream &ofs,int students_Table[][MAX_COlS],int student_num);
void view_Table(ifstream &ifs, int student_num);
void Read_Data_To_Table(ifstream &ifs,int students_Table_Data[][MAX_COlS],int student_num);
void view_First_line();
void view_Score(int students_Table_Data[][MAX_COlS],int student_num);
char View_Grade(int n);
int Get_Average(int students_Table_Data_line[]);
void view_Last_line(int students_Table_Data[][MAX_COlS],int student_num);

int main() {
  ifstream ifs;
  ofstream ofs;
  int student_num;


  ifs.open("day07_16.txt");

  if (!ifs) {
    std::cout << "점수 데이터가 없습니다. "<< '\n';

    ofs.open("day07_16.txt");
    std::cout << "> 몇 명의 학생입니까? " ;
    std::cin >> student_num;
    int students_Table[student_num][MAX_COlS];

    GetData(students_Table,student_num);

    Write_Data_To_File(ofs,students_Table,student_num);
    std::cout << "데이터 파일이 만들어졌습니다." << '\n';
    ofs.close();

    ifs.open("day07_16.txt");
    std::cout << "데이터 파일을 불러옵니다." << '\n';
    std::cout  << '\n';

    view_Table(ifs,student_num);


  } else {
    std::cout << "점수 데이터 파일을 확인했습니다." << '\n';

    std::cout << "데이터 파일을 불러옵니다." << '\n';
    std::cout  << '\n';
    int student_num=0;
    string scores;
    while (getline(ifs,scores)) {
      student_num++;

    }
    ifs.close();
    ifs.open("day07_16.txt");
    view_Table(ifs,student_num);
  }
  ifs.close();


  return 0;
}

void GetData(int students_Table[][MAX_COlS],int student_num) {
  for (int i = 0; i < student_num; i++) {
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

void Write_Data_To_File(ofstream &ofs,int students_Table[][MAX_COlS],int student_num) {
  for (int i = 0; i < student_num; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      ofs<<students_Table[i][j]<<'\t';

    }
    ofs.put('\n');
  }
}


void view_Table(ifstream &ifs, int student_num) {
  int students_Table_Data[student_num][MAX_COlS];
  Read_Data_To_Table(ifs,students_Table_Data, student_num);
  view_First_line();
  view_Score(students_Table_Data,student_num);
  view_Last_line(students_Table_Data,student_num);
}

void Read_Data_To_Table(ifstream &ifs,int students_Table_Data[][MAX_COlS],int student_num) {
  for (int i = 0; i < student_num; i++) {
    for (int j = 0; j < MAX_COlS; j++) {
      ifs>>students_Table_Data[i][j];
    }
  }
}
void view_First_line() {
  //First Line
  std::cout <<setw(11)<<setfill(' ')<<'|' ;

  for (int i = 0; i < 5; i++) {
    std::cout << setw(7)<<"과목 "<<i+1;
  }
  std::cout << setw(3) <<'|';

  std::cout << setw(7) <<" 평  균"<< '\n';
  for (int i = 0; i < 60; i++) {
    std::cout << "-" ;
  }
  std::cout  << '\n';
}



void view_Score(int students_Table_Data[][MAX_COlS],int student_num) {
  //학생 점수와 평균 출력

  for (int i = 0; i < student_num; i++) {
    std::cout<<setw(8)<<setfill(' ')<<"학생 "<<i+1 ;
    std::cout <<setw(2)<<setfill(' ') <<"|";
    for (int j = 0; j < MAX_COlS; j++) {
      std::cout <<setw(6) <<students_Table_Data[i][j]<<' '<<View_Grade(students_Table_Data[i][j]) ;
    }
    std::cout <<setw(3)<<setfill(' ') <<"|";
    int Average=Get_Average(students_Table_Data[i]);
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

int Get_Average(int students_Table_Data_line[]){
  //한 줄 평균치 계산
  int result=0 , sum=0;
  for (int i = 0; i < MAX_COlS; i++) {
    sum+=students_Table_Data_line[i];
  }
  result=sum/MAX_COlS;
  return result;
}

void view_Last_line(int students_Table_Data[][MAX_COlS],int student_num) {
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
    for (int i = 0; i < student_num; i++) {
      Average_Col+=students_Table_Data[i][j];
    }
    Average_Array[j]=Average_Col/student_num;
    Total_Average_Sum+=Average_Array[j];
    std::cout <<setw(8) <<Average_Array[j];

  }
  Total_Average=Total_Average_Sum/MAX_COlS;
  std::cout <<setw(3)<<setfill(' ') <<"|";
  std::cout <<setw(6) <<Total_Average ;
  std::cout  << '\n';

}
