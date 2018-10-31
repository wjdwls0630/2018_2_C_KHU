#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

bool getStu(ifstream &stuFile, int &stuID,int &exam1,int &exam2,int &exam3);
void writeStu(ofstream &gradesFile, int stuID, int avrg, char grade);
void calcGrade(int exam1, int exam2, int exam3, int &avrg, char &grade);
  int main() {
    ifstream stuFile1("7_10_1.txt");
    if (!stuFile1) {
      std::cerr << "\aError 100 : opening student file" << '\n'<<'\n';
      stuFile1.close();
      std::cout << "Make student file randomly" << '\n'<<'\n';
      ofstream stuFile2("7_10_1.txt");
      srand(time(NULL));
      for (int i = 0; i < 5; i++) {
        stuFile2.fill('0');
        stuFile2<<setw(4)<<rand()%100;
        for (int j = 0; j < 3; j++) {
          stuFile2.fill(' ');
          stuFile2<<setw(3)<<rand()%100;
        }
        stuFile2<<'\n';
      }
      stuFile2.close();
      std::cout << "Making is done" << '\n'<<'\n';
    } else{
      ofstream gradesFile("7_10_2.txt");
      if (!gradesFile) {
        std::cerr << "\aError 102 : opening grades file" << '\n';
        exit(102);
      }
      int stuID , exam1,exam2,exam3;

      int avrg;
      char grade;

      while (getStu(stuFile1, stuID,exam1,exam2,exam3)) {
        calcGrade(exam1,  exam2,  exam3,  avrg,  grade);
        writeStu(gradesFile, stuID,  avrg,  grade);
      }//while

    }// if open stuFile

    //making done and read file

    ifstream stuFile3("7_10_1.txt");
    ofstream gradesFile("7_10_2.txt");
    if (!gradesFile) {
      std::cerr << "\aError 102 : opening grades file" << '\n';
      exit(102);
    }
    int stuID , exam1,exam2,exam3;

    int avrg;
    char grade;

    while (getStu(stuFile3, stuID,exam1,exam2,exam3)) {
      calcGrade(exam1,  exam2,  exam3,  avrg,  grade);
      writeStu(gradesFile, stuID,  avrg,  grade);
    }//while

    stuFile1.close();
    gradesFile.close();
    return 0;
  }

bool getStu(ifstream &stuFile, int &stuID,int &exam1,int &exam2,int &exam3){
  stuFile>>stuID>>exam1>>exam2>>exam3;
  if (!stuFile) {
    return false;
  }
  return true;
}

void writeStu(ofstream &gradesFile, int stuID, int avrg, char grade){
  gradesFile.fill('0');
  gradesFile<<setw(4)<<stuID;
  gradesFile.fill(' ');
  gradesFile<<setw(3)<<avrg;
  gradesFile<<' '<<grade<<endl;
}

void calcGrade(int exam1, int exam2, int exam3, int &avrg, char &grade){
  avrg=(exam1+exam2+exam3)/3;
  if (avrg>=90) {
    grade='A';
  } else if (avrg>=80) {
    grade='B';
  } else if (avrg>=70) {
    grade='C';
  } else if (avrg>=50) {
    grade='D';
  } else {
    grade='F';
  }
}
