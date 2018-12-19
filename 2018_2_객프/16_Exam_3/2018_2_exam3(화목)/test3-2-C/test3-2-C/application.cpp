#include <iomanip>
#include "application.h"

//?????[���� 3-2-B-ii] �Ʒ��� ���� �� ������ master�� eventList�� �߰��ϴ� �Լ��� ����

// ���� ������ master list�� �������� ������ �ٷ� ����. 
// �����ϸ� master list�� �߰��ϰ� eventList �߰�
//    �߰��� event�� list�� �����ϸ� ���� event �׸� �Էµ� ���� Ű�� �߰��ϰ�
//          �������� ������ ���ο� event �׸��� ���鿡 ���� Ű�� �߰��Ͽ� event list�� �߰�. 
// event�׸� �� ����Ű �Է��� EventType ��� �Լ� AddPhotoKey(photoKey)�� ����Ѵ�.
int Application::AddPhotoToList(PhotoType item) {
	return 0;// �ڵ�� ����
}
// Ű����κ��� ���������� �Է¹޾Ƽ� ����Ʈ�� �߰�
void Application::AddPhoto() {
	PhotoType temp;
	if (!temp.ReadItemFromKB()) return;
	//master.Add(temp);
	AddPhotoToList(temp); 	//???? �̸� �ۼ���

}


// �������� �Է¹޾Ƽ� �ش� ������ ����Ʈ���� ����
void Application::DeletePhoto() {
	string inName;
	cout << "\t ������ ������ �Է� --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetPhotoName(inName);
	master.Delete(tRecord);
	}


//?????[���� 3-2-A-v] �Ʒ� DisplayList �Լ��� GetNextPtr�� RetrievePtr�Լ��� �̿��Ͽ� ���ۼ�

// ����Ʈ�� ����� ��� ���� ������ ȭ�鿡 ���
void Application::DisplayList() {
	cout << "\t ***  ���� ����Ʈ ȭ�� ���  ***\n";
	cout << "\t" << "  " << setw(14) << "[���� ��]" << setw(14) << "[�̺�Ʈ��]" << setw(14) << "[���� ����]" << endl;
	PhotoType tRecord;
	int i = 0;
	master.ResetList();
	while (master.GetNextItem(tRecord)) {
		cout << "\t";
		tRecord.DisplayOnScreen();
		i++;
	}
}


//?????[���� 3-2-A-v] �Ʒ� FindPhoto�Լ��� GetNextPtr�� RetrievePtr�Լ��� �̿��Ͽ� ���ۼ�

// �������� �Է¹޾Ƽ� �ش� ������ ã�Ƽ� �ڼ��� ������ ȭ�鿡 ���
void Application::FindPhoto() {
	string inName;
	cout << "\t ã���� �ϴ� ������ �Է� --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetPhotoName(inName);
	if (master.Retrieve(tRecord) > -1) {
		cout << "\t �˻��� ���� ���� ";
		tRecord.DisplayOnScreen();
		return ;
	}
	else 	cout << "\t ������ ����Ʈ�� �����ϴ�. \n";
}


//?????[���� 3-2-B-iii] �̺�Ʈ ����Ʈ�� �̿��Ͽ� �̺�Ʈ�� �˻��Ͽ� �Ҽӵ� �������� ȭ�鿡 ����ϴ� ���� �Լ��� ����
//?????[���� 3-2-C-iii] B���� �ۼ��� �Լ��� derived class�� Ư���� �츱 �� �ֵ��� ����

// �̺�Ʈ���� �Է¹޾Ƽ� event list���� �ش� event record�� ã�� 
// �����ϸ� EventType�� ����Լ� DisplayDetail()�� master list�� �����Ͽ� �ش� �̺�Ʈ���� ���� ��� ������ �ڼ��� ������ ȭ�鿡 ����Ѵ�.
void Application::DisplayByEventUsingEL() {
}


///?????[���� 3-2-B-iv] ������ ���� (������) AND (�̺�Ʈ��)���� ������ �˻��ϴ� SearchByPhotoNameNEvent()�� �����Ѵ�. 
//?????[���� 3-2-C-iii] B���� �ۼ��� �Լ��� derived class�� Ư���� �츱 �� �ֵ��� ����

// ������� event���� �޾Ƽ� �̺�Ʈ������ eventList���� �׸��� ã�� 
//    �̺�Ʈ�� �����ϸ� EventType ����Լ� FindByNameKey �Լ��� �̿��Ͽ� �̺�Ʈ�� �Էµ� ������ ���ԵǴ� ���� Ȯ���Ͽ�
//    �����ϸ� �ش� ���� �׸��� �����͸� ���޹޾Ƽ� ȭ�鿡 ����Ѵ�. 
void Application::SearchByPhotoNameNEvent() {
	//????
}

//?????[���� 3-2-B-v] �̺�Ʈ��� ���뿡 ���Ե� �ܾ �Բ� ��ġ�ϴ� ������ ã�Ƽ� ȭ�鿡 ����ϴ� ���� �Լ��� ����
//?????[���� 3-2-C-iv] B���� �ۼ��� �Լ��� derived class�� Ư���� �츱 �� �ֵ��� ����

//�̺�Ʈ��� ������� Ű�� �Է¹޾Ƽ� event list�� �˻��Ͽ� �����ϸ� EventType ����Լ� FindByContentsKey()�� ȣ���Ͽ� 
//  �� �̺�Ʈ�� �Ҽӵ� ���� �߿��� �Էµ� ����� ��ġ�ϴ� ù��° ������ �����͸� ���� �޾Ƽ� 
//  ȭ�鿡 ���
void Application::SearchByEventNContents() {
	string eName, cName;
	cout << "\t << �̺�Ʈ�� ������� �ܾ�� ���� �˻�  >>\n \t�˻��� ������ �̺�Ʈ�� ���� �ܾ �Է��ϼ��� --> ";
	cin >> eName >> cName;
	EventType tEvent, *eventPtr;
	PhotoType* photoPtr;
	tEvent.SetEventName(eName);
	//????
}

// event ���� �Է¹޾Ƽ� ����Ʈ���� �ش� �̺�Ʈ���� ���� ��� ������ ã�Ƽ� ȭ�鿡 ���
void Application::FindPhotoByEvent() {
	string inName;
	cout << "\t ã���� �ϴ� �̺�Ʈ �� �Է� --> ";
	cin >> inName;
	PhotoType tRecord;
	tRecord.SetEventName(inName);
	int count = 0;
	cout<<"\t"<< "  " << setw(14) << "[������]" << setw(14) << "[�̺�Ʈ ��]" << setw(14) << "[���� ����]" << endl;
	master.ResetList();
	while (master.GetNextItem(tRecord)) {
		if (tRecord.IsEqualEvent(inName)) {
			cout << "\t";
			tRecord.DisplayOnScreen();
			count++;
		}
	}
	if (count==0) cout << "\n%%%% ��ġ�ϴ� ������ ã�� ���߽��ϴ� %%%%\n";
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
		case 2:			  // �������� �Է¹޾Ƽ� �ش� ������ ����Ʈ���� ����
			DeletePhoto();
			break;
		case 3:	  // �������� �Է¹޾Ƽ� ����Ʈ���� �˻�.
			FindPhoto();
			break;
		case 4:	  // �̺�Ʈ ���� �Է¹޾Ƽ� ����Ʈ���� �˻�.
			FindPhotoByEvent();
			break;
		case 5:			  // ����Ʈ�� ��� ������ ȭ�鿡 ���
			DisplayList();
			break;
		case 6:			  // ���Ͽ��� ��� ���� �б�
			ReadAllFromFile();
			break;
		case 7:			  // ����Ʈ ��� ������ ���Ͽ� ���
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
		cout << "\n\t--- ID ------------ ������ �۾� --------------------" << endl;
		cout.setf(ios::left, ios::adjustfield);
		cout << "\t|" << setw(50) << "    0. ���α׷� ����" << "|\n";
		cout << "\t|" << setw(50) << "    1. �� ���� �߰�" << "|\n";
		cout << "\t|" << setw(50) << "    2. ���� ����" << "|\n";
		cout << "\t|" << setw(50) << "    3. ���� �̸����� �˻�" << "|\n";
		cout << "\t|" << setw(50) << "    4. �̺�Ʈ �̸����� �˻�" << "|\n";
		cout << "\t|" << setw(50) << "    5. ����Ʈ�� ��� ������ ȭ�鿡 ���" << "|\n";
		cout << "\t|" << setw(50) << "    6. ���Ͽ��� ��� ���� �б�" << "|\n";
		cout << "\t|" << setw(50) << "    7. ����Ʈ�� ��� ������ ���Ͽ� ���" << "|\n";
		cout << "\t|" << setw(50) << "    8. event list�� �̿��� �̺�Ʈ �˻�" << "|\n";
		cout << "\t|" << setw(50) << "    9. �̺���� ���������� �˻�" << "|\n";
		cout << "\t|" << setw(50) << "    10.�̺���� ���� Ű����� �˻�" << "|\n";
		cout << "\t----------------------------------------------------" << endl;
		cout << "\t ������ �۾� ���� --> ";
		if (cin.fail() || !(cin >> temp) || temp < 0 || temp>10)	// input fail or input value is out of bound
		{
			cout << "\t    ### ��ȿ���� ���� ���. �ٽ� �Է��ϼ���  ####" << endl;
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
