#include<iostream>
#include<ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;
/*
class RecordType {
public:
int ReadRecordFromKB(); // read a record from keyboard
int ReadPhotoNameFromKB(); // read photo name from keyboard
int ReadEventNameFromKB(); // read event name from Keyboard
int ReadRecordFromFile(ifstream& inFile); // read a record from file
void WriteRecordToFile(ofstream& outFile); // write a record to file
void GenFileName(string& name); //generate an unique file name using the
current time.
void DisplayOnScreen(); // display a record on screen
bool IsEqual(string name); // compare photoName with input string
private:
        string photoName;
        string eventName;
        int size;
        string contents;
};


class ApplicationType{
public:
ApplicationType(){ photoList.clear(); length=0; inFileName="test.txt"; outFileName="test.txt";};
int AddRecordToList(); // read a record from keyboard and add to the list
int ReadAllFromFile(); // read all the records in file and store in vector arrays void DisplayAllOnScreen(); // write all the record in the list on the screeen
int WriteAllToFile(); // write all photo records to disk.
int GetCommand(); // get an integer representing a proper command
void Run(); // select a command and execute
int SearchByPrimaryKey(string inName); // Search a record by file name and return index of the record.
         // Search a record by file name and return index of the record.
        void FindAndDisplay(); // find a record by name and display
        void DeleteByName(); // find a record by name and delete
private:
        vector<RecordType> photoList;
        int length;
        string inFileName;
        string outFileName;
};
*/

string nowTime();
int GetCommand();
int ReadRecordFromKB(std::string& fName, string& eventName);
int WriteRecordToFile(ofstream& outFile, string fName, string eventName);
int ReadRecordFile(ifstream& inFile, string& fName, string& eventName);
void WriteRecordToScreen(string fName, string eventName);

int AddRecordToList(vector<string> &pName, vector<string> &eName);
int ReadAllFromFile(vector<string> &nameList, vector<string> &eventList);
int WriteAllToFile(vector<string> &nameList, vector<string> &eventList);
int SearchByPrimKey (vector<string> v, string inName);
void DisplayAllOnScreen(vector<string> &nameList, vector<string> &eventList);
void FindAndDisplay(vector<string> &nameList, vector<string> &eventList);
void DeleteByName(vector<string> &nameList, vector<string> &eventList);
void Run(vector<string> &nameList, vector<string> &eventList);

int main(){
  std::vector<string> nameList(20);
  std::vector<string> eventList(20);
  nameList.clear();
  eventList.clear();
  Run(nameList,eventList);
  return 1;
}
string nowTime(){
  // Declaring argument for time()
  time_t tt;
  // Declaring variable to store return value of localtime()
  struct tm * ti;
  // Applying time()
  time (&tt);
  // Using localtime()
  ti = localtime(&tt);
  stringstream ss;
  ss << setw(4)<<ti->tm_year+1900<<setfill('0')<<setw(2)<<ti->tm_mon+1<<setfill('0') <<setw(2)<<ti->tm_mday<<setfill('0')<<setw(2)<<ti->tm_hour<<setfill('0')<<setw(2) <<ti->tm_min<<setfill('0')<<setw(2)<<ti->tm_sec<<"\0";
  string ymd=ss.str();
  return ymd;
}
int GetCommand(){
  int temp;
  while (1) {
    cout << endl <<endl;
    cout<<"\t--- ID - Command -----"<<endl;
    cout<<"\t    1. Add a new record to list"<<endl;
    cout<<"\t    2. Read all records from disk"<<endl;
    cout<<"\t    3. Write all records to disk"<<endl;
    cout<<"\t    4. Display all record on screen"<<endl;
    cout<<"\t    5. Search a record by file name and display on screen"<<endl;
    cout<<"\t    6. Search a record by file name and delet it from list"<<endl;
    cout<<"\t    0. Quit"<<endl<<endl;
    cout << "\t Choose a Command--> ";

    if (cin.fail()|| !(cin>>temp) || temp<0 || temp>6)// input fail or input value is out
    {
      cout<<"\t ### Invalid Command Number. Select again ####"<<endl;
      cin.clear(); //clear flag
      cin.ignore(INT_MAX, '\n'); //empty input buffer
    } else {
      cin.clear(); // clear flag
      cin.ignore(INT_MAX, '\n'); // empty input buffer
      return temp;
    }
  }
}



int ReadRecordFromKB(string& fName, string& eventName){
  string select="";
  std::cout << "Read a photo file(photo name and event name)" << '\n';
  std::cout << "Photo name --> ";
  std::cin >> fName;
  std::cout << "Event name --> ";
  std::cin >> eventName;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    return 0;
  }

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
    return;
  } else{
    std::cout << fName <<" , "<<eventName<< '\n';
  }
}

int AddRecordToList(vector<string> &pName, vector<string> &eName){
  int index=0;
  int result=1;
  std::string fName;
  std::string eventName;
  for (int i = 0; i < pName.size(); i++) {
    if (pName[i]=="") {
      index=i;
      break;
    }
  }
  result=ReadRecordFromKB(fName, eventName);
  if (result==0) {
    return result;
  }
  pName[index]=fName;
  eName[index]=eventName;
  return result;
}
int ReadAllFromFile(vector<string> &nameList, vector<string> &eventList){
  ifstream inFile(nowTime()+".dat");
  int result=1;
  for (int i = 0; i < nameList.size(); i++) {
    if (result==0) {
      return result;
    }
    result=ReadRecordFile(inFile, nameList[i], eventList[i]);
  }
  inFile.close();
  return result;
}

int WriteAllToFile(vector<string> &nameList, vector<string> &eventList){
  ofstream outFile(nowTime()+".dat");
  int result=1;
  for (int i = 0; i < nameList.size(); i++) {
    if (result==0) {
      return result;
    }
    result=WriteRecordToFile(outFile,nameList[i],eventList[i]);
  }
  outFile.close();
  return result;

}

int SearchByPrimKey (vector<string> v, string inName){
  int index=0;
  for (int i = 0; i < v.size(); i++) {
    if(v[i]==inName){
      index=i;
      return index;
    }
  }
  return -1;
}
void DisplayAllOnScreen(vector<string> &nameList, vector<string> &eventList){
  std::cout << "********* [  Records in the List  ] *********" << '\n';
  for (int i = 0; i < nameList.size(); i++) {
    if (nameList[i]=="") {
      return;
    }
    std::cout << "Records " <<i<<"  :   ";
    WriteRecordToScreen(nameList[i],eventList[i]);
  }
}

void FindAndDisplay(vector<string> &nameList, vector<string> &eventList){
  std::string inName="";
  std::cout << "********* [  Search and Display  ] *********" << '\n';
  std::cout << "Enter a file name to search --> ";
  std::cin >> inName;
  int index=SearchByPrimKey(nameList, inName);
  if (index==-1) {
    std::cout << "No such file information" << '\n';
  }else {
    std::cout << "Records " <<index<<"  :   ";
    WriteRecordToScreen(nameList[index], eventList[index]);
  }
}
void DeleteByName(vector<string> &nameList, vector<string> &eventList){
  std::string inName="";
  std::cout << "********* [  Delete record by name  ] *********" << '\n';
  std::cout << "Enter a file name to erase --> ";
  std::cin >> inName;
  int index=SearchByPrimKey(nameList, inName);
  if (index==-1) {
    std::cout << "No such file information" << '\n';
  }else {
    nameList.erase(nameList.begin()+index);
    eventList.erase(eventList.begin()+index);
  }
}
void Run(vector<string> &nameList, vector<string> &eventList){
  nameList.push_back("sss");
  eventList.push_back("ffff");
  nameList.push_back("ggg");
  eventList.push_back("adfasfdas");
  nameList.push_back("kk");
  eventList.push_back("agasdfsdfss");
  DisplayAllOnScreen(nameList, eventList);
  int command;
  while ((command=GetCommand())) {
    switch (command) {
      case 0:
        return ;
      case 1:
      AddRecordToList(nameList, eventList);
      break;
      case 2:
      ReadAllFromFile(nameList, eventList);
      break;
      case 3:
      WriteAllToFile(nameList, eventList);
      break;
      case 4:
      DisplayAllOnScreen(nameList, eventList);
      break;
      case 5:
      FindAndDisplay(nameList, eventList);
      break;
      case 6:
      DeleteByName(nameList, eventList);
      break;
      default :
      std::cout << "Invalid operation" << '\n';
      break;
    }
  }
}
