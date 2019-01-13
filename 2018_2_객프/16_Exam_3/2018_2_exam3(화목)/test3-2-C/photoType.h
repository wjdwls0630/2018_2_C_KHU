#pragma once
#include<iostream> 
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

class PhotoType {
public:
	string GetPhotoName() { return photoName; } // photoName�� ����
	string GetEventName() { return eventName; } // eventName�� ����
	PhotoType(string pName = " \0", string eName = " \0", string eContents = " \0") {// constructor
		photoName = pName; eventName = eName;
	}
	bool ReadItemFromKB();  // ���������� Ű����κ��� �Է�read photo info from keyboard
	int ReadRecordFromFile(ifstream& inFile);  // read a record from file
	void WriteRecordToFile(ofstream& outFile);  // write a record to file

	void SetAll(string pName = " \0", string eName = " \0", string eContents = " \0") {// initalize record
		photoName = pName; eventName = eName;
	}
	void SetPhotoName(string name) { photoName = name; }
	void SetEventName(string name) { eventName = name;	}
	void DisplayOnScreen();   // �� PhotoType ��ü�� ȭ�鿡 ���
	bool IsEqualEvent(string name) { // event name�� ��
		if (eventName == name) return true; 
		else return false; 	} 
	bool operator==(PhotoType inItem) { // primary key�� photoName�� ��
		if (photoName == inItem.photoName) return true;
		else return false; 	}
	bool operator<(PhotoType inItem) { // primary key�� photoName�� ��
		if (photoName < inItem.photoName) return true;
		else return false;
	}

	bool operator>(PhotoType inItem) { // primary key�� photoName�� ��
		if (photoName > inItem.photoName) return true;
		else return false;
	}

	//?????[���� 3-2-B-v]
	//������ contents�� key�� ���ԵǸ� true�� �׷��� ������ false�� �����Ѵ�. 
	bool FindKeyFromContents(string key) {
//???
		return false;  //�ڵ�� ����
	}


private:
	string photoName; // ���� ��
	string eventName; // event ��
	string contents;  // ������ ���� ����
};