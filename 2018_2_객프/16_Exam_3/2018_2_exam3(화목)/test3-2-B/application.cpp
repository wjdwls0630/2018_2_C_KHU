#include <iomanip>
#include "application.h"


//?????[문제 3-2-B-ii] 아래와 같이 새 사진을 master와 eventList에 추가하는 함수를 구현

// 사진 정보를 master list에 존재하지 않으면 바로 리턴.
// 존재하면 master list에 추가하고 eventList 추가
//    추가할 event가 list에 존재하면 기존 event 항목에 입력된 사진 키를 추가하고
//          존재하지 않으면 새로운 event 항목을 만들에 사진 키를 추가하여 event list에 추가.
// event항목에 새 사진키 입력은 EventType 멤버 함수 AddPhotoKey(photoKey)를 사용한다.
int Application::AddPhotoToList(PhotoType item) {
  EventType *tEvent;
  if (this->master.Retrieve(item)==-1) {
    this->master.Add(item);
    this->eventList.ResetList();
    for (int i = 0; i < this->eventList.GetLength(); i++) {
      tEvent=this->eventList.GetNextItemPtr();
      if (tEvent->GetEventName()==item.GetEventName()) {
        tEvent->AddPhotoKey(item.GetPhotoName());
        return 1;
      }
    }
    EventType user_Event(item.GetEventName());
    user_Event.AddPhotoKey(item.GetPhotoName());
    this->eventList.Add(user_Event);
    return 1;
  }
  std::cout << "\tPhoto already exists!" << '\n';
  return 0;// 코드와 무관
}


// 키보드로부터 사진정보를 입력받아서 리스트에 추가
void Application::AddPhoto() {
  std::cout  << '\n';
  cout <<"\t*********   [   Add a Record to list   ]   *********" << endl;
   PhotoType temp;
   if (!temp.ReadItemFromKB()) return;
   //master.Add(temp);
   //?????[문제 3-2-B-i] 위 master.Add()를 지우고 아랫 명령을 활성화
   AddPhotoToList(temp);

}


// 사진명을 입력받아서 해당 사진을 리스트에서 삭제
void Application::DeletePhoto() {
  std::cout  << '\n';
  cout<< "\t*********** [  Delete record by name  ] ***********" << '\n';
  cout.width(40);
  std::cout << left<<"\tEnter a Photo name to delete --> ";
   string inName;
   cin >> inName;
   PhotoType tRecord;
   tRecord.SetPhotoName(inName);
   master.Delete(tRecord);
   }


//?????[문제 3-2-A-v] 아래 DisplayList 함수를 GetNextPtr과 RetrievePtr함수를 이용하여 재작성

// 리스트에 저장된 모든 사진 정보를 화면에 출력
void Application::DisplayList() {
  std::cout  << '\n';
  cout << "\t**********   [   Display on screen   ]   **********" << endl;
   cout << "\t";
   cout.width(20);
   cout<< left<<"[Photo Name]" ;
   cout.width(20);
   cout<< left<<"[Event Name]";
   cout.width(20);
   cout<< left<<"[Contents]" << endl;
   PhotoType* tRecord;
   int i = 0;
   this->master.ResetList();
	 while ((tRecord=master.GetNextItemPtr())!=NULL) {
		tRecord->DisplayOnScreen();
	 }
	 /*
   while (master.GetNextItemPtr())
   {
      cout << "\t";
      tRecord.DisplayOnScreen();
      i++;
   }
	 */
}


//?????[문제 3-2-A-v] 아래 FindPhoto함수를 GetNextPtr과 RetrievePtr함수를 이용하여 재작성

// 사진명을 입력받아서 해당 사진을 찾아서 자세한 정보를 화면에 출력
void Application::FindPhoto() {
  std::cout  << '\n';
  cout<< "\t************ [   Find by PhotoName  ] ************" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a Photo name to search --> ";
	string inName;
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetPhotoName(inName);
	PhotoType* showRecord;
	if ((showRecord=master.RetrievePtr(tRecord))==NULL) {
	 std::cout << "\tNo Photo in List" << '\n';
	 return;
	}
	std::cout << "\tPhoto Information searched\n ";
  cout << "\t";
  cout.width(20);
  cout<< left<<"[Photo Name]" ;
  cout.width(20);
  cout<< left<<"[Event Name]";
  cout.width(20);
  cout<< left<<"[Contents]" << endl;
	showRecord->DisplayOnScreen();

	 /*
   if (master.Retrieve(tRecord) > -1) {
      cout << "\t 검색된 사진 정보 ";
      tRecord.DisplayOnScreen();
      return ;
   }
   else    cout << "\t 사진이 리스트에 없습니다. \n";
	 */
}


//?????[문제 3-2-B-iii] 이벤트 리스트를 이용하여 이벤트를 검색하여 소속된 사진들을 화면에 출력하는 다음 함수를 구현

// 이벤트명을 입력받아서 event list에서 해당 event record를 찾고
// 존재하면 EventType의 멤버함수 DisplayDetail()에 master list를 전달하여 해당 이벤트에서 찍은 모든 사진의 자세한 정보를 화면에 출력한다.
void Application::DisplayByEventUsingEL() {
  std::cout  << '\n';
  cout << "\t*** [ Display Photo on screen by Event List ] ***" << endl;
  cout.width(40);
  cout <<left << "\tEnter a Event name to search --> ";
  string inName;
  cin >> inName;
  EventType tEvent;
  tEvent.SetEventName(inName);
  EventType* showEvent;
  if ((showEvent=this->eventList.RetrievePtr(tEvent))==NULL) {
   std::cout << "\tNo Event in List" << '\n';
   return;
  }
  std::cout << "\tEvent Information searched "<<'\n';
  showEvent->DisplayDetail(this->master);
}


//?????[문제 3-2-B-iv] 다음과 같이 (사진명) AND (이벤트명)으로 사진을 검색하는 SearchByPhotoNameNEvent()를 구현한다.

// 사진명과 event명을 받아서 이벤트명으로 eventList에서 항목을 찾고
//    이벤트가 존재하면 EventType 멤버함수 FindByNameKey 함수를 이용하여 이벤트에 입력된 사진이 포함되는 지를 확인하여
//    존재하면 해당 사진 항목의 포인터를 전달받아서 화면에 출력한다.
void Application::SearchByPhotoNameNEvent() {
  std::cout  << '\n';
  cout<< "\t******** [   Find by Event & Photo Name  ] ********" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a Event name to search --> ";
  string inEvent;
  cin >> inEvent;
  EventType tEvent(inEvent);
  EventType * findEvent;
  if ((findEvent=this->eventList.RetrievePtr(tEvent))==NULL) {
    std::cout << "\tNo Event in List" << '\n';
    return;
  }
  cout.width(40);
  cout <<left << "\tEnter a Photo name to search --> ";
  string inName;
  cin >> inName;
  PhotoType * showRecord;
  if ((showRecord=findEvent->FindByNameKey(this->master, inName))==NULL) {
    std::cout << "\tNo Photo in List" << '\n';
    return;
  }
  std::cout << "\tPhoto Information searched\n ";
  cout << "\t";
  cout.width(20);
  cout<< left<<"[Photo Name]" ;
  cout.width(20);
  cout<< left<<"[Event Name]";
  cout.width(20);
  cout<< left<<"[Contents]" << endl;
  showRecord->DisplayOnScreen();
}

//?????[문제 3-2-B-v] 이벤트명과 내용에 포함된 단어가 함께 일치하는 사진을 찾아서 화면에 출력하는 다음 함수를 구현

//이벤트명과 내용관련 키를 입력받아서 event list를 검색하여 존재하면 EventType 멤버함수 FindByContentsKey()를 호출하여
//  현 이벤트에 소속된 사진 중에서 입력된 내용과 일치하는 첫번째 사진의 포인터를 리턴 받아서
//  화면에 출력
void Application::SearchByEventNContents() {
  std::cout  << '\n';
  cout<< "\t********* [   Find by Event & Contents  ] *********" << '\n';

   cout.width(40);
   cout <<left << "\tEnter a Event name to search --> ";
   string eName;
   cin >> eName;
   EventType tEvent(eName);
   EventType * findEvent;
   if ((findEvent=this->eventList.RetrievePtr(tEvent))==NULL) {
     std::cout << "\tNo Event in List" << '\n';
     return;
   }
   cout.width(40);
   cout <<left << "\tEnter Contents to search --> ";
   string cName;
   cin >> cName;
   PhotoType * showRecord;
   if ((showRecord=findEvent->FindByContentsKey(this->master, cName))==NULL) {
     std::cout << "\tNo Contents in List" << '\n';
     return;
   }
   std::cout << "\tPhoto Information searched\n ";
   cout << "\t";
   cout.width(20);
   cout<< left<<"[Photo Name]" ;
   cout.width(20);
   cout<< left<<"[Event Name]";
   cout.width(20);
   cout<< left<<"[Contents]" << endl;
   showRecord->DisplayOnScreen();
}

// event 명을 입력받아서 리스트에서 해당 이벤트에서 찍은 모든 사진을 찾아서 화면에 출력
void Application::FindPhotoByEvent() {
  std::cout  << '\n';
  cout << "\t************ [   Find by EventName  ] ************" << '\n';
  cout.width(40);
  cout <<left << "\tEnter a Event name to search --> ";
   string inName;
   cin >> inName;
   PhotoType tRecord;
   tRecord.SetEventName(inName);
   int count = 0;
   cout << "\t";
   cout.width(20);
   cout<< left<<"[Photo Name]" ;
   cout.width(20);
   cout<< left<<"[Event Name]";
   cout.width(20);
   cout<< left<<"[Contents]" << endl;
   master.ResetList();
   while (master.GetNextItem(tRecord)) {
      if (tRecord.IsEqualEvent(inName)) {
         tRecord.DisplayOnScreen();
         count++;
      }
   }
   if (count==0) cout << "\n%%%% No Information in List! %%%%\n";
}


void Application::Run() {
   int command;
   while ((command = GetCommand())) {
      cout.setf(ios::left, ios::adjustfield);
      switch (command) {
      case  0:
         return;
      case 1:      // Read in a record and add to the list
         AddPhoto();
         break;
      case 2:           // 사진명을 입력받아서 해당 사진을 리스트에서 삭제
         DeletePhoto();
         break;
      case 3:     // 사진명을 입력받아서 리스트에서 검색.
         FindPhoto();
         break;
      case 4:     // 이벤트 명을 입력받아서 리스트에서 검색.
         FindPhotoByEvent();
         break;
      case 5:           // 리스트의 모든 사진을 화면에 출력
         DisplayList();
         break;
      case 6:           // 파일에서 모든 사진 읽기
         ReadAllFromFile();
         break;
      case 7:           // 리스트 모든 사진을 파일에 출력
         WriteAllToFile();
         break;
      case 8:
         DisplayByEventUsingEL();
         break;
      case 9:
         SearchByPhotoNameNEvent();
         break;
      case 10:
         SearchByEventNContents();
         break;
      default:
         cout << "Invalid operation \n";
         break;
      }
   }
}

// display menu, select a command, return ID of the command
int Application::GetCommand()
{
   int temp;
   while (1)
   {
    cout << endl << endl;
    cout << "\t----  ID-Command ---------------------------------------------" << endl;
    cout << "\t|        0.Quit                                               |" << endl;
    cout << "\t|        1.Add a new Photo to list                            |" << endl;
    cout << "\t|        2.Delete by photo name                               |" << endl;
    cout << "\t|        3.Retrieve by photo name                             |" << endl;
    cout << "\t|        4.Retrieve by event name                             |" << endl;
    cout << "\t|        5.Display all Photo on screen                        |" << endl;
    cout << "\t|        6.Read all Photo from disk                           |" << endl;
    cout << "\t|        7.Write all Photo to disk                            |" << endl;
    cout << "\t|        8.Retrieve by Event list                             |" << endl;
    cout << "\t|        9.Retrieve by Event & Photo                          |" << endl;
    cout << "\t|        10.Retrieve by Event & Content                       |" << endl;
    cout << "\t--------------------------------------------------------------" << endl;
    cout << "\t  Choose a Command-- >";
      if (cin.fail() || !(cin >> temp) || temp < 0 || temp>10)   // input fail or input value is out of bound
      {
         cout<<"\t ### Invalid Command Number. Select again ####"<<endl;
         cin.clear();   //clear flag
         cin.ignore(INT_MAX, '\n');   //empty input buffer
      }
      else {
         cin.clear();  // clear flag
         cin.ignore(INT_MAX, '\n');  // empty input buffer
         return temp;
      }
   }
}

// Read the photo records from file
int Application::ReadAllFromFile()
{
   string photoName, eventName;
   // intialize vector arrays
   master.MakeEmpty();
   // open input file
   ifstream inFile;
   inFile.open(inFileName);
   if (!inFile.is_open())
   {
      cout << "Unable to Open input file" << endl;
      return 0;
   }
   // read input data and display on the screen
   PhotoType temp;
   while (temp.ReadRecordFromFile(inFile))
   {
      //master.Add(temp);
      //?????[문제 3-2-B-i] 위 master.Add()를 지우고 아랫 명령을 활성화
      AddPhotoToList(temp);
   }
   cout << "\t****   [   Reading from disk is completed   ]   ****" << endl;
   return 1;
}


// write all photo records to disk.
int Application::WriteAllToFile()
{
   // open input file
   ofstream outFile;
   outFile.open(outFileName);
   if (!outFile.is_open())
   {
      cout << "Unable to Open output file" << endl;
      return 0;
   }
   // write all the records to file
   master.ResetList();
   PhotoType tRecord;
   while (master.GetNextItem(tRecord)) {
      tRecord.WriteRecordToFile(outFile);
   }
   cout << "\t****   [   Writing to disk is completed   ]   ****" << endl;
   return 1;
}
