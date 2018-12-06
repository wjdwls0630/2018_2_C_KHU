#include <iomanip>
#include "application.h"

//?? [항목 3-2] PhotoType과 List class의 멤버함수를 이용하여 AddPhoto()를 구현하라. 
// 키보드로부터 사진정보를 입력받아서 리스트에 추가

//??[항목 3-3] PhotoType과 List class의 멤버함수를 이용하여 DeletePhoto()를 구현하라. 
// 사진명을 키보드로부터 입력받아서 해당 사진을 리스트에서 삭제
// 삭제할 사진이 없으면 "\t 해당 사진이 리스트에 없습니다.\n" 출력


//??[항목 3-4] PhotoType과 List class의 멤버함수를 이용하여 FindPhoto()를 구현하라. 
// 사진명을 입력받아서 해당 사진을 찾아서 자세한 정보를 화면에 출력
// 찾는 사진이 없으면 "\t 사진이 리스트에 없습니다. \n" 메시지 출력


//??[항목 3-5] PhotoType과 List class의 멤버함수를 이용하여 FindPhotoByEvent()를 구현하라. 
// [힌트] 아래 DisplayList()에 사용한 ResetList()와 GetNextItem()함수를 이용

// event 명을 입력받아서 리스트에서 해당 이벤트에서 찍은 모든 사진을 찾아서 화면에 출력
// 만약 일치하는 사진이 없으면 "\n%%%% 일치하는 사진을 찾지 못했습니다 %%%%\n" 메시지 출력

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
		cout << "\t----------------------------------------------------" << endl;
		cout << "\t 수행할 작업 선택 --> ";
		if (cin.fail() || !(cin >> temp) || temp < 0 || temp>7)	// input fail or input value is out of bound
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
		master.Add(temp);
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

