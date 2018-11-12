#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int ReadRecordFromKB(std::string& fName, string& eventName);
int WriteRecordToFile(ofstream& outFile, string fName, string eventName);
int ReadRecordFile(ifstream& inFile, string& fName, string& eventName);
void WriteRecordToScreen(string fName, string eventName);

int main() {
  ofstream outFile("lab8_4.dat");
  string fName;
  string eventName;
  int check1, check2;
  check1=ReadRecordFromKB(fName,eventName);
  while (check1!=0) {
    WriteRecordToFile(outFile, fName, eventName);
    check1=ReadRecordFromKB(fName,eventName);
  }
  outFile.close();
  ifstream inFile("lab8_4.dat");
  check2=ReadRecordFile(inFile, fName, eventName);
  while (check2!=0) {
    WriteRecordToScreen(fName,eventName);
    check2=ReadRecordFile(inFile, fName, eventName);
  }

  inFile.close();
  return 0;
}
int ReadRecordFromKB(string& fName, string& eventName){
  string select="";
  std::cout << "Enter a photo record consisting file name, event name(if you want to stop enter \"Quit\") : ";
  std::cin >> select;
  if (cin.fail()||select=="Quit") {
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    return 0;
  }
  fName=select;
  std::cin >> eventName;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  return 1;

}
int WriteRecordToFile(ofstream& outFile, string fName, string eventName){
  if (outFile.fail()) {
    return 0;
  }
  outFile<<fName<<' '<<eventName<<'\n';
  return 1;
}
int ReadRecordFile(ifstream& inFile, string& fName, string& eventName){
  if (inFile.fail()||(!inFile)) {
    return 0;
  } else{
    inFile>>fName>>eventName;
    return 1;
  }
}
void WriteRecordToScreen(string fName, string eventName){
  if (fName==""&&eventName=="") {
    std::cout << "출력 할 것이 없습니다." << '\n';
  } else{
    std::cout << fName <<" , "<<eventName<< '\n';
  }
}
