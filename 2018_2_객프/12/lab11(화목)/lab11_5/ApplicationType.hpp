#ifndef Application_hpp
#define Application_hpp

using namespace std;

class ApplicationType{
public:
  ApplicationType();
  void Run(); // select a command and execute
  int GetCommand(); // get an integer representing a proper command
  int AddRecordToList(); // read a record from keyboard and add to the list
  int ReadAllFromFile(); // read all the records in file and store in vector arrays
  int WriteAllToFile(); // write all photo records to disk.
  void DisplayAllOnScreen(); // write all the record in the list on the screeen
  int SearchByPrimaryKey(string inName); // Search a record by file name and return index of the record.
  int BinarySearchByPrimaryKey(string inName);// Search a record by file name and return index of the record.
  int RetrieveByPhotoName(); // find records by photoname
  int DeleteByPhotoName();  //  find  a  record  by  name  and  delete
  int RetrieveByEvent();    //  find  records  by  event
  int RetrieveByContents();  //  find  records  by  contents
  void AddEventToList();
  int SearchEventList();
  void DisplayEventList();
  void RetrieveFromEventList();
  void DisplayEventPhotos();
private:
  vector<eventType> eventList;
  vector<RecordType> photoList;
  int length;
  string inFileName;
  string outFileName;
};

ApplicationType::ApplicationType()
:length(0),inFileName("lab10_4.txt"),outFileName("lab10_4.txt"){ photoList.clear();}


 // select a command and execute
void ApplicationType::Run(){
  int command;
  while ((command=GetCommand())) {
    switch (command) {
      case 0:
        return ;
      case 1:
      AddRecordToList();
      break;
      case 2:
      ReadAllFromFile();
      break;
      case 3:
      WriteAllToFile();
      break;
      case 4:
      DisplayAllOnScreen();
      break;
      case 5:
      RetrieveByPhotoName();
      break;
      case 6:
      DeleteByPhotoName();
      break;
      case 7:
      RetrieveByEvent();
      break;
      case 8:
      RetrieveByContents();
      break;
      default :
      std::cout << "\tInvalid  operation  \n" << '\n';
      break;
    }
  }
}

// get an integer representing a proper command
int ApplicationType::GetCommand(){
  int temp;
  while (1) {
    cout << endl << endl;
    cout << "\t----  ID-Command ---------------------------------------------" << endl;
    cout << "\t|        1.Add a new record to list                           |" << endl;
    cout << "\t|        2.Read all records from disk                         |" << endl;
    cout << "\t|        3.Write all records to disk                          |" << endl;
    cout << "\t|        4.Display all record on screen                       |" << endl;
    cout << "\t|        5.Retrieve by photo name                             |" << endl;
    cout << "\t|        6.Delete by photo name                               |" << endl;
    cout << "\t|        7.Retrieve by event                                  |" << endl;
    cout << "\t|        8.Retrieve by content                                |" << endl;
    cout << "\t|        0.Quit                                               |" << endl;
    cout << "\t--------------------------------------------------------------" << endl;
    cout << "\t  Choose a Command-- >";

    if (cin.fail()|| !(cin>>temp) || temp<0 || temp>8)// input fail or input value is out
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

// read a record from keyboard and add to the list
int ApplicationType::AddRecordToList(){
  RecordType user_Record;
  std::cout  << '\n';
  cout <<"\t*********   [   Add a Record to list   ]   *********" << endl;
  user_Record.ReadPhotoNameFromKB();
  user_Record.ReadEventNameFromKB();
  user_Record.ReadRecordFromKB();
  string target=user_Record.getPName();
  int insert_index=0;
  for (int i = 0; i < this->photoList.size(); i++) {
    if (target<this->photoList[i].getPName()) {
      insert_index=i;
      break;
    }
    insert_index++;
  }
  this->photoList.insert(photoList.begin()+insert_index,user_Record);
  return 1;
}

// read all the records in file and store in vector arrays
int ApplicationType::ReadAllFromFile(){
  ifstream inFile(this->inFileName);
  int result=1;
  int i=0;
  while (inFile) {
    if (result==0) {
      return result;
    }
    result=this->photoList[i].ReadRecordFromFile(inFile);
    i++;
  }
  inFile.close();
  cout << "\t****   [   Reading from disk is completed   ]   ****" << endl;
  return result;
}

// write all photo records to disk.
int ApplicationType::WriteAllToFile(){
  ofstream outFile(this->outFileName);
  for (int i = 0; i < this->photoList.size(); i++) {
    this->photoList[i].WriteRecordToFile(outFile);
  }
  outFile.close();
  cout << "\t****   [   Writing to disk is completed   ]   ****" << endl;
  return 1;

}

void ApplicationType::DisplayAllOnScreen(){
  std::cout  << '\n';
  cout << "\t**********   [   Display on screen   ]   **********" << endl;
  for (int i = 0; i < this->photoList.size(); i++) {
    std::cout << "\tRecord "<<i <<" : ";
    this->photoList[i].DisplayOnScreen();
  }
}

// Search a record by file name and return index of the record.
int ApplicationType::SearchByPrimaryKey(string inName){
  int index=0;
  for (int i = 0; i < this->photoList.size(); i++) {
    if(this->photoList[i].IsEqual(inName)){
      index=i;
      return index;
    }
  }
  return -1;
}

// Search a record by file name and return index of the record.
int ApplicationType::BinarySearchByPrimaryKey(string inName){
  int left=0;
  int right=this->photoList.size()-1;
  int mid;
  int result;
  while (left<=right) {
    mid=left+(left+right)/2;
    if (this->photoList[mid].Compare(inName)==0) {
      result = mid;
    }else if(this->photoList[mid].Compare(inName)==-1){
      left=mid+1;
    } else if(this->photoList[mid].Compare(inName)==1){
      right =mid-1;
    }
  }
  result=-1;
  return result;
}

// find records by photoname
int ApplicationType::RetrieveByPhotoName(){
  string inName = "";
  std::cout  << '\n';
  cout<< "\t************ [   Find by PhotoName  ] ************" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a Photo name to search --> ";
  cin >> inName;
  int index = BinarySearchByPrimaryKey(inName);
  if (index==-1){
    cout << "\tNo such file information" << '\n';
    return 0;
  } else {
    cout.width(15);
    cout <<left <<"\tRecord "<<index <<" : ";
    this->photoList[index].DisplayOnScreen();
    return 1;
  }
}

//  find  a  record  by  name  and  delete
int ApplicationType::DeleteByPhotoName(){
  std::string inName="";
  std::cout<< '\n';
  cout<< "\t*********** [  Delete record by name  ] ***********" << '\n';
  std::cout << "\tEnter a Photo name to erase --> ";
  std::cin >> inName;
  int index=BinarySearchByPrimaryKey(inName);
  if (index==-1) {
    cout << "\tNo such file information" << '\n';
    return 0;
  }else {
    this->photoList.erase(this->photoList.begin()+index);
    return 1;
  }
}

//  find  records  by  event
int ApplicationType::RetrieveByEvent(){
  string inName = "";
  cout << "\t************ [   Find by EventName  ] ************" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a Event name to search --> ";
  cin >> inName;
  int count=0;
  for (int i = 0; i < this->photoList.size(); i++) {
    if (this->photoList[i].IsEqualEvent(inName)){
      cout << "\tRecords " << i << "  :   ";
      this->photoList[i].DisplayOnScreen();
      count++;
    }
  }
  if (count==0) {
    cout << "\tNo such file information" << '\n';
    return 0;
  } else{
    return 1;
  }
}

//  find  records  by  contents
int ApplicationType::RetrieveByContents(){
  string inName = "";
  cout << "\t************ [   Find by Contents  ] ************" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a key in Contents      --> ";
  cin >> inName;
  int count=0;
  for (int i = 0; i < this->photoList.size(); i++) {
    if (this->photoList[i].IsContentsIncluded(inName)){
      cout << "\tRecords " << i << "  :   ";
      this->photoList[i].DisplayOnScreen();
      count++;
    }
  }
  if (count==0) {
    cout << "\tNo such file information" << '\n';
    return 0;
  } else{
    return 1;
  }
}



#endif /*Application_hpp*/
