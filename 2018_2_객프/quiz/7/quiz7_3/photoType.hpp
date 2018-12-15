#ifndef photoType_hpp
#define photoType_hpp

using namespace std;

class PhotoType {
public:
	string GetPhotoName() { return photoName; } // photoName�� ����
	string GetEventName() { return eventName; } // eventName�� ����
	PhotoType(string pName = " \0", string eName = " \0", string eContents = " \0") {// constructor
		photoName = pName; eventName = eName;
	}
	bool ReadItemFromKB();  // ���������� Ű�����κ��� �Է�read photo info from keyboard
	int ReadRecordFromFile(ifstream& inFile);  // read a record from file
	void WriteRecordToFile(ofstream& outFile);  // write a record to file

	void SetAll(string pName = " \0", string eName = " \0", string eContents = " \0") {// initalize record
		photoName = pName; eventName = eName;
	}
	void SetPhotoName(string name) { photoName = name; }
	void SetEventName(string name) { eventName = name;	}
	void DisplayOnScreen();   // �� PhotoType ��ü�� ȭ�鿡 ����
	bool IsEqualEvent(string name) { // event name�� ����
		if (eventName == name) return true;
		else return false; 	}
	//?? [�׸� 2-1] PhotoType ��ü�� primary key�� photoName�� �������� �����ϴ� equal operator(==)�� �������϶�.
	bool operator<(PhotoType inItem);
  bool operator>(PhotoType inItem);
	bool operator==(PhotoType inItem);

private:
	string photoName; // ���� ��
	string eventName; // event ��
	string contents;  // ������ ���� ����
};
// write a record representing a photo file to output file
void PhotoType::WriteRecordToFile(ofstream& outFile)
{
	outFile << photoName << " " << eventName << " " << contents << endl;
}


// read a record from input file
// if the input fail flag is set, then return 0. Otherwise, return 1
int PhotoType::ReadRecordFromFile(ifstream& inFile)
{
	char temp[256];
	inFile >> photoName >> eventName;
	inFile.getline(temp, 255); // read contents
	contents.assign(temp);  // copy the input character array to string
	if (inFile.fail())
		return 0;

	inFile.clear();  // clear flag
					 //	inFile.ignore(INT_MAX, '\n');  // empty input buffer
	return 1;
}

// ���� ������ Ű�����κ��� �Է�
bool PhotoType::ReadItemFromKB(){
	char temp[256];
	cout << "\t Photo Name   --> ", cin >> photoName;
	cout << "\t Event Nmae   --> "; cin >> eventName;   // read event name
	cout << "\t Contents     --> ";
	cin.clear();  cin.ignore(INT_MAX, '\n');
	cin.getline(temp, 256);  // read contents
	contents.assign(temp);  // copy the input character array to string

	if (cin.fail())
	{
		cin.clear();	//clear flag
		cin.ignore(INT_MAX, '\n');	//empty input buffer
		cout << "\t  !!!  Record Read Error !!!\n";
		return 0;
	}
	cin.clear();  // clear flag
	return 1;
}
void PhotoType::DisplayOnScreen(){
	std::cout << "\t" << "  " << setw(14) << this->photoName << setw(14) << this->eventName << setw(14) << this->contents << endl;

}
bool PhotoType::operator<(PhotoType inItem){ return this->photoName<inItem.photoName; }
bool PhotoType::operator>(PhotoType inItem){ return this->photoName>inItem.photoName; }
bool PhotoType::operator==(PhotoType inItem){ return inItem.photoName==this->photoName;}


#endif /* photoType_hpp */
