#pragma once
#include <string>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std; 

class Common {
private:
	int x;
	int array[10];
public:
	Common() { x = 0; for (int i = 0; i < 10; i++) array[i] = i; }
	void Display() {
		cout << "\n global key: ";
		for (int i = 0; i < 5; i++)
		{
			array[i] += 100;
			cout << array[i] << " ,  ";
		}
		cout << endl;
	}

	void Set(int ax, int arr[]) { x = ax; for (int i = 0; i < 5; i++) array[i] = arr[i]; }
};

class baseClass {
protected:
		static Common global_key;
public:
	virtual void DisplayKey() = 0; 
	virtual void Add() = 0;
};

Common baseClass::global_key;

class iDerived :public baseClass{
private:
	int iVal;
public:
	iDerived() {}
	iDerived(int in) { iVal = in; }
	void Add() {
		cout << "\nEnter int number :";
		cin >> iVal;
	}
	void DisplayKey() {
		global_key.Display();
		cout << "\n local key   "<< iVal<<endl;
	}
};


class fDerived :public baseClass {
private:
	float fVal;
public:
	fDerived() {}
	fDerived(float in) { fVal = in; }
	void Add() {
		cout << "\nEnter float number :";
		cin >> fVal;
	}
	void DisplayKey() {
		global_key.Display();
		cout << "\n  local float num : " << fVal << endl;
	}
};


class sDerived :public baseClass {
private:
	string  sVal;
public:
	sDerived() {}
	sDerived(string in) { sVal = in; }
	void Add() {
		cout << "\nEnter string :";
		cin >> sVal;
	}

	void DisplayKey() {
		global_key.Display();
		cout << "\n  local string : " << sVal << endl;
	}
};

class Application {
private:
	vector<baseClass*> mList[30];
public:
	void AddItem(){
		int typeNum;
		baseClass* curPtr;

		cout << "\n Enter class type(1 for int, 2for float, 3 for string: ";
		cin >> typeNum;
		if (typeNum == 1)      curPtr = new iDerived;
		else if (typeNum == 2) curPtr = new fDerived;
		else				   curPtr = new sDerived;
		curPtr->Add();
		mList->push_back(curPtr);
	}

	void DisplayAll() {
		cout << " \n\n\n ****  Display All items in the list  **** \n";
		for (auto it : *mList) {
			it->DisplayKey();
		}
	}

};