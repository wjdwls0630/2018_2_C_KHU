#pragma once
#include "list.h"
#include "photoType.h"
//?????[문제 3-2-C-ii] : derived class로 정의하시요.
class EventType {
private:
	string name;
	List<string> nameList;
public:
	EventType(string eName) { name = eName;}
	EventType() { }
	bool operator==(EventType inEvent) { if (name == inEvent.name) return true; else return false; }
	bool operator<(EventType inEvent) { if (name < inEvent.name) return true; else return false; }
	bool operator>(EventType inEvent) { if (name > inEvent.name) return true; else return false; }
	void operator=(EventType inEvent) { name = inEvent.name; 
		string* strPtr;
		inEvent.nameList.ResetList();
		while (strPtr = inEvent.nameList.GetNextItemPtr()) { nameList.Add(*strPtr); }
	}

	void SetEventName(string in) { name = in; }
	string GetEventName() { return name; }
	//event의 nameList에 새 사진키를 추가 
	void AddPhotoKey(string inPhotoKey) {
		if (nameList.RetrievePtr(inPhotoKey)) { cout << " 현 이벤트에 중복 사진 존재 \n"; }
		else nameList.Add(inPhotoKey);
	}

//?????[문제 3-2-B-iii]
//?????[문제 3-2-C-iii]
//name list에 있는 사진 이름을 이용하여 master list를 검색하여 자세한 정보를 화면에 출력
	void DisplayDetail(List<PhotoType>& master) {
		//???
	}

//?????[문제 3-2-B-iv]
//?????[문제 3-2-C-iii]
// nameList에서 입력된 사진명이 있는 지 확인하여 존재하면 master list에서 찾 레코드 포인터를 리턴
	PhotoType* FindByNameKey(List<PhotoType> &master, string inPhotoKey) {
		PhotoType ptemp(inPhotoKey);
		//???
	}

	//?????[문제 3-2-C-iv]
	//?????[문제 3-2-B-v]
	// 현 이벤트에 소속된 사진 중에서 contents에 입력된 키를 포함하는 첫번째 사진을 찾아서 그 사진 record의 포인터를 리턴
	PhotoType* FindByContentsKey(List<PhotoType> &master, string contentKey) {
		nameList.ResetList();
		string *temp;
		PhotoType *pPtr, ptemp;
		while (temp = nameList.GetNextItemPtr()) {
			//???
		}
	}

};

