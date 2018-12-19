#include <iomanip>
#include "application.h"

//?????[문제 3-2-B-ii] 아래와 같이 새 사진을 master와 eventList에 추가하는 함수를 구현

// 사진 정보를 master list에 존재하지 않으면 바로 리턴. 
// 존재하면 master list에 추가하고 eventList 추가
//    추가할 event가 list에 존재하면 기존 event 항목에 입력된 사진 키를 추가하고
//          존재하지 않으면 새로운 event 항목을 만들에 사진 키를 추가하여 event list에 추가. 
// event항목에 새 사진키 입력은 EventType 멤버 함수 AddPhotoKey(photoKey)를 사용한다.
int Application::AddPhotoToList(PhotoType item) {
	return 0;// 코드와 무관
}
// 키보드로부터 사진정보를 입력받아서 리스트에 추가
void Application::AddPhoto() {
	PhotoType temp;
	if (!temp.ReadItemFromKB()) return;
	//master.Add(temp);
	AddPhotoToList(temp); 	//???? 미리 작성함

}


// 사진명을 입력받아서 해당 사진을 리스트에서 삭제
void Application::DeletePhoto() {
	string inName;
	cout << "\t 삭제할 사진명 입력 --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetPhotoName(inName);
	master.Delete(tRecord);
	}


//?????[문제 3-2-A-v] 아래 DisplayList 함수를 GetNextPtr과 RetrievePtr함수를 이용하여 재작성

// 리스트에 저장된 모드 사진 정보를 화면에 출력
void Application::DisplayList() {
	cout << "\t ***  사진 리스트 화면 출력  ***\n";
	cout << "\t" << "  " << setw(14) << "[사진 명]" << setw(14) << "[이벤트명]" << setw(14) << "[사진 설명]" << endl;
	PhotoType tRecord;
	int i = 0;
	master.ResetList();
	while (master.GetNextItem(tRecord)) {
		cout << "\t";
		tRecord.DisplayOnScreen();
		i++;
	}
}


//?????[문제 3-2-A-v] 아래 FindPhoto함수를 GetNextPtr과 RetrievePtr함수를 이용하여 재작성

// 사진명을 입력받아서 해당 사진을 찾아서 자세한 정보를 화면에 출력
void Application::FindPhoto() {
	string inName;
	cout << "\t 찾고자 하는 사진명 입력 --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetPhotoName(inName);
	if (master.Retrieve(tRecord) > -1) {
		cout << "\t 검색된 사진 정보 ";
		tRecord.DisplayOnScreen();
		return ;
	}
	else 	cout << "\t 사진이 리스트에 없습니다. \n";
}


//?????[문제 3-2-B-iii] 이벤트 리스트를 이용하여 이벤트를 검색하여 소속된 사진들을 화면에 출력하는 다음 함수를 구현
//?????[문제 3-2-C-iii] B에서 작성한 함수를 derived class의 특성을 살릴 수 있도록 수정

// 이벤트명을 입력받아서 event list에서 해당 event record를 찾고 
// 존재하면 EventType의 멤버함수 DisplayDetail()에 master list를 전달하여 해당 이벤트에서 찍은 모든 사진의 자세한 정보를 화면에 출력한다.
void Application::DisplayByEventUsingEL() {
}


///?????[문제 3-2-B-iv] 다음과 같이 (사진명) AND (이벤트명)으로 사진을 검색하는 SearchByPhotoNameNEvent()를 구현한다. 
//?????[문제 3-2-C-iii] B에서 작성한 함수를 derived class의 특성을 살릴 수 있도록 수정

// 사진명과 event명을 받아서 이벤트명으로 eventList에서 항목을 찾고 
//    이벤트가 존재하면 EventType 멤버함수 FindByNameKey 함수를 이용하여 이벤트에 입력된 사진이 포함되는 지를 확인하여
//    존재하면 해당 사진 항목의 포인터를 전달받아서 화면에 출력한다. 
void Application::SearchByPhotoNameNEvent() {
	//????
}

//?????[문제 3-2-B-v] 이벤트명과 내용에 포함된 단어가 함께 일치하는 사진을 찾아서 화면에 출력하는 다음 함수를 구현
//?????[문제 3-2-C-iv] B에서 작성한 함수를 derived class의 특성을 살릴 수 있도록 수정

//이벤트명과 내용관련 키를 입력받아서 event list를 검색하여 존재하면 EventType 멤버함수 FindByContentsKey()를 호출하여 
//  현 이벤트에 소속된 사진 중에서 입력된 내용과 일치하는 첫번째 사진의 포인터를 리턴 받아서 
//  화면에 출력
void Application::SearchByEventNContents() {
	string eName, cName;
	cout << "\t << 이벤트와 내용관련 단어로 사진 검색  >>\n \t검색할 사진의 이벤트와 내용 단어를 입력하세요 --> ";
	cin >> eName >> cName;
	EventType tEvent, *eventPtr;
	PhotoType* photoPtr;
	tEvent.SetEventName(eName);
	//????
}

// event 명을 입력받아서 리스트에서 해당 이벤트에서 찍은 모든 사진을 찾아서 화면에 출력
void Application::FindPhotoByEvent() {
	string inName;
	cout << "\t 찾고자 하는 이벤트 명 입력 --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetEventName(inName);
	int count = 0;
	cout<<"\t"<< "  " << setw(14) << "[사진명]" << setw(14) << "[이벤트 명]" << setw(14) << "[사진 설명]" << endl;
	master.ResetList();
	while (master.GetNextItem(tRecord)) {
		if (tRecord.IsEqualEvent(inName)) {
			cout << "\t";
			tRecord.DisplayOnScreen();
			count++;
		}
	}
	if (count==0) cout << "\n%%%% 일치하는 사진을 찾지 못했습니다 %%%%\n";
}


void Application::Run() {
	int command;
	while ((command = GetCommand())) {
		cout.setf(ios::left, ios::adjustfield);
		switch (command) {
		case  0:
			return;
		case 1:		// Read in a record and add to the list
			AddPhoto();
			break;
		case 2:			  // 사진명을 입력받아서 해당 사진을 리스트에서 삭제
			DeletePhoto();
			break;
		case 3:	  // 사진명을 입력받아서 리스트에서 검색.
			FindPhoto();
			break;
		case 4:	  // 이벤트 명을 입력받아서 리스트에서 검색.
			FindPhotoByEvent();
			break;
		case 5:			  // 리스트의 모든 사진을 화면에 출력
			DisplayList();
			break;
		case 6:			  // 파일에서 모든 사진 읽기
			ReadAllFromFile();
			break;
		case 7:			  // 리스트 모든 사진을 파일에 출력
			WriteAllToFile();
			break;
		case 8:
		//	DisplayByEventUsingEL(); //????
			break;
		case 9:
		//	SearchByPhotoNameNEvent();  //????
			break;
		case 10:
	//		SearchByEventNContents();  //????
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
		cout << "\n\t--- ID ------------ 수행할 작업 --------------------" << endl;
		cout.setf(ios::left, ios::adjustfield);
		cout << "\t|" << setw(50) << "    0. 프로그램 종료" << "|\n";
		cout << "\t|" << setw(50) << "    1. 새 사진 추가" << "|\n";
		cout << "\t|" << setw(50) << "    2. 사진 삭제" << "|\n";
		cout << "\t|" << setw(50) << "    3. 사진 이름으로 검색" << "|\n";
		cout << "\t|" << setw(50) << "    4. 이벤트 이름으로 검색" << "|\n";
		cout << "\t|" << setw(50) << "    5. 리스트의 모든 사진을 화면에 출력" << "|\n";
		cout << "\t|" << setw(50) << "    6. 파일에서 모든 사진 읽기" << "|\n";
		cout << "\t|" << setw(50) << "    7. 리스트의 모든 사진을 파일에 출력" << "|\n";
		cout << "\t|" << setw(50) << "    8. event list를 이용한 이벤트 검색" << "|\n";
		cout << "\t|" << setw(50) << "    9. 이벤명과 사진명으로 검색" << "|\n";
		cout << "\t|" << setw(50) << "    10.이벤명과 관련 키워드로 검색" << "|\n";
		cout << "\t----------------------------------------------------" << endl;
		cout << "\t 수행할 작업 선택 --> ";
		if (cin.fail() || !(cin >> temp) || temp < 0 || temp>10)	// input fail or input value is out of bound
		{
			cout << "\t    ### 유효하지 않은 명령. 다시 입력하세요  ####" << endl;
			cin.clear();	//clear flag
			cin.ignore(INT_MAX, '\n');	//empty input buffer
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
		AddPhotoToList(temp);  	//????
	}
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
	return 1;
}
