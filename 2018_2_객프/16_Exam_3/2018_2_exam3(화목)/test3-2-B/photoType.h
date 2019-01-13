#pragma once
#include<iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

class PhotoType {
public:
   string GetPhotoName() { return photoName; } // photoName을 리턴
   string GetEventName() { return eventName; } // eventName을 리턴
   PhotoType(string pName = " \0", string eName = " \0", string eContents = " \0") {// constructor
      photoName = pName; eventName = eName;
   }
   bool ReadItemFromKB();  // 사진정보를 키보드로부터 입력read photo info from keyboard
   int ReadRecordFromFile(ifstream& inFile);  // read a record from file
   void WriteRecordToFile(ofstream& outFile);  // write a record to file

   void SetAll(string pName = " \0", string eName = " \0", string eContents = " \0") {// initalize record
      photoName = pName; eventName = eName;
   }
   void SetPhotoName(string name) { photoName = name; }
   void SetEventName(string name) { eventName = name;   }
   void DisplayOnScreen();   // 현 PhotoType 객체를 화면에 출력
   bool IsEqualEvent(string name) { // event name을 비교
      if (eventName == name) return true;
      else return false;    }
   bool operator==(PhotoType inItem) { // primary key인 photoName을 비교
      if (photoName == inItem.photoName) return true;
      else return false;    }
   bool operator<(PhotoType inItem) { // primary key인 photoName을 비교
      if (photoName < inItem.photoName) return true;
      else return false;
   }

   bool operator>(PhotoType inItem) { // primary key인 photoName을 비교
      if (photoName > inItem.photoName) return true;
      else return false;
   }

   //?????[문제 3-2-B-v] 아래의 함수를 구현한다.
   //사진의 contents에 key가 포함되면 true를 그렇지 않으면 false를 리턴한다.
   bool FindKeyFromContents(string key) {
     if (this->contents.find(key)!=std::string::npos) {
       return true;
     }
      return false;  //코드와 무관
   }


private:
   string photoName; // 사진 명
   string eventName; // event 명
   string contents;  // 사진에 대한 설명
};
