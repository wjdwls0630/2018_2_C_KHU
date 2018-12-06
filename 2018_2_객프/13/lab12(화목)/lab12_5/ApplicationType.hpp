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
  int AddEventToList(eventType &user_Event);
  int SearchEventList(const string &inName);
  void DisplayEventList();
  int RetrieveFromEventList();
  void DisplayEventPhotos();
private:
  vector<eventType> eventList;
  vector<RecordType> photoList;
  int length;
  string inFileName;
  string outFileName;
};

ApplicationType::ApplicationType()
:length(0),inFileName("lab12_5.txt"),outFileName("lab12_5.txt"){
  photoList.clear();
  eventList.clear();
}


 // select a command and execute
void ApplicationType::Run(){
  int command;
  while ((command=this->GetCommand())) {
    switch (command) {
      case 0:
        return ;
      case 1:
      this->AddRecordToList();
      break;
      case 2:
      this->ReadAllFromFile();
      break;
      case 3:
      this->WriteAllToFile();
      break;
      case 4:
      this->DisplayAllOnScreen();
      break;
      case 5:
      this->RetrieveByPhotoName();
      break;
      case 6:
      this->DeleteByPhotoName();
      break;
      case 7:
      this->RetrieveByEvent();
      break;
      case 8:
      this->RetrieveByContents();
      break;
      case 9:
      this->DisplayEventList();
      break;
      case 10:
      this->RetrieveFromEventList();
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
    cout << "\t|        9.Display Event List                                 |" << endl;
    cout << "\t|        10.Retrieve by event list                            |" << endl;
    cout << "\t|        0.Quit                                               |" << endl;
    cout << "\t--------------------------------------------------------------" << endl;
    cout << "\t  Choose a Command-- >";

    if (cin.fail()|| !(cin>>temp) || temp<0 || temp>10)// input fail or input value is out
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
    if (this->photoList[i].Compare(target)==1) {
      insert_index=i;
      break;
    }
    insert_index++;
  }
  this->photoList.insert(photoList.begin()+insert_index,user_Record);

  eventType user_Event(user_Record.getEName(),user_Record.getPName());
  this->AddEventToList(user_Event);


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
  while (left<=right) {
    mid=left+(right-left)/2;
    if (this->photoList[mid].Compare(inName)==0) {
      return mid;
    }else if(this->photoList[mid].Compare(inName)==-1){
      left=mid+1;
    } else if(this->photoList[mid].Compare(inName)==1){
      right =mid-1;
    }
  }
  return -1;
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

int ApplicationType::AddEventToList(eventType &user_Event){
  string *tempList;
  tempList=new string[user_Event.GetNumOfPhoto()];
  int i;
  for (i = 0; i < this->eventList.size(); i++) {
    if (this->eventList[i].GetEventName()==user_Event.GetEventName()) {
      user_Event.GetFileNameList(tempList);
      this->eventList[i].AddFileName(*(tempList));
      return 1;
    }
  }
  this->eventList.push_back(user_Event);
  delete [] tempList;
  return 0;
}
int ApplicationType::SearchEventList(const string &inName){
  int index;
  for ( int i = 0; i < this->eventList.size(); i++) {
    if (this->eventList[i].GetEventName()==inName) {
      index=i;
      return index;
    }
  }
  return -1;
}
void ApplicationType::DisplayEventList(){
  string *tempList;
  std::cout  << '\n';
  cout << "\t*********** [   Display Event List  ] ***********" << '\n';
  for (int i = 0; i < this->eventList.size(); i++) {
    std::cout << "\tEvent "<<i <<" : ";
    std::cout << this->eventList[i].GetEventName() << '\n';
    tempList=new string [this->eventList[i].GetNumOfPhoto()];
    this->eventList[i].GetFileNameList(tempList);
    std::cout << "\tMembers : ";
    for (int j = 0; j < this->eventList[i].GetNumOfPhoto(); j++) {
      cout.width(3);
      std::cout <<left <<*(tempList+j)<< ' ';
    }
    std::cout << '\n';
    std::cout << '\n';
    delete [] tempList;
  }

}
int ApplicationType::RetrieveFromEventList(){
  string inName = "";
  std::cout  << '\n';
  cout<< "\t********* [   Retrieve From EventList  ] *********" << '\n';
  cout.width(40);
  cout <<left << "\tEnter Event name to search --> ";
  cin >> inName;
  int event_index = SearchEventList(inName);
  if (event_index==-1){
    cout << "\tNo such file information" << '\n';
    return 0;
  } else {
    int photo_index;
    string *tempList;
    tempList=new string [this->eventList[event_index].GetNumOfPhoto()] ;
    this->eventList[event_index].GetFileNameList(tempList);
    for (int i = 0; i < this->eventList[event_index].GetNumOfPhoto(); i++) {
      photo_index=BinarySearchByPrimaryKey(*(tempList+i));
      cout.width(15);
      cout <<left <<"\tRecord : ";
      this->photoList[photo_index].DisplayOnScreen();
    }
    delete [] tempList;

    return 1;
  }
}
void ApplicationType::DisplayEventPhotos(){
  string inName = "";
  std::cout  << '\n';
  cout<< "\t********* [   Retrieve From EventList  ] *********" << '\n';
  cout.width(40);
  cout <<left << "\tEnter Event name to search --> ";
  cin >> inName;
  int event_index = SearchEventList(inName);
  if (event_index==-1){
    cout << "\tNo such file information" << '\n';
    return ;
  } else {
    int photo_index;
    string *tempList;
    tempList=new string [this->eventList[event_index].GetNumOfPhoto()] ;

    this->eventList[event_index].GetFileNameList(tempList);
    for (int i = 0; i < this->eventList[event_index].GetNumOfPhoto(); i++) {
      photo_index=BinarySearchByPrimaryKey(*(tempList+i));
      cout.width(15);
      cout <<left <<"\tRecord : ";
      this->photoList[photo_index].DisplayOnScreen();
    }
    delete [] tempList;
    return ;
  }
}





#endif /*Application_hpp*/
