#pragma once
#include "photoType.h"
#include <iomanip>

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

// 사진 정보를 키보드로부터 입력
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

// 현 PhotoType 객체를 화면에 출력
void PhotoType::DisplayOnScreen() {
	cout << "  " << setw(14) << photoName << setw(14) << eventName << setw(14) << contents << endl;
}

