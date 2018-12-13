#ifndef application_hpp
#define application_hpp
#include "list.hpp"
#include "photoType.hpp"
using namespace std;

class Application {
public:
	Application();
	void Run();
	int GetCommand();
	void AddPhoto();
	void DeletePhoto();
	void FindPhoto();
	void FindPhotoByEvent();
	void DisplayList();

	int ReadAllFromFile();  // read all the records in file and store in vector arrays
	int WriteAllToFile(); // write all photo records to disk.

private:
	List<PhotoType> master;
	string inFileName; // input file ��
	string outFileName; // output file ��
};
Application::Application(): outFileName("quiz7_3.txt"), inFileName("quiz7_3.txt") {}
void Application::Run() {
	int command;
	while ((command = GetCommand())) {
		cout.setf(ios::left, ios::adjustfield);
		switch (command) {
		case  0:
			return;
		case 1:		// Read in a record and add to the list
			this->AddPhoto();
			break;
		case 2:
			DeletePhoto();
			break;
		case 3:
			FindPhoto();
			break;
		case 4:
			FindPhotoByEvent();
			break;
		case 5:
			DisplayList();
			break;
		case 6:
			ReadAllFromFile();
			break;
		case 7:
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
		cout << "\t|" << setw(50) << "    7. 리스트의 모든 사진 출력  " << "|\n";
		cout << "\t----------------------------------------------------" << endl;
		cout << "\t 수행할 작업 선택 --> ";
		if (cin.fail() || !(cin >> temp) || temp < 0 || temp>7)	// input fail or input value is out of bound
		{
			cout << "\t    ### Invalid Command Number. Select again ####" << endl;
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

// ����Ʈ�� ������ ���� ���� ������ ȭ�鿡 ����
void Application::DisplayList() {
	cout << "\t ***  사진 리스트 화면 출력  ***\n";
	cout << "\t" << "  " << setw(14) << "[사진 명]" << setw(14) << "[이벤트명]" << setw(14) << "[사진 설]" << endl;
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

#endif /* application_hpp */
