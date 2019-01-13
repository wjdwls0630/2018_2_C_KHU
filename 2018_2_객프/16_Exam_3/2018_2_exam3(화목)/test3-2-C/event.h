#pragma once
#include "base.h"
#include "list.h"
#include "photoType.h"
//?????[���� 3-2-C-ii] : derived class�� �����Ͻÿ�.
class EventType : public base {
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
	//event�� nameList�� �� ����Ű�� �߰�
	void AddPhotoKey(string inPhotoKey) {
		if (nameList.RetrievePtr(inPhotoKey)) { cout << " �� �̺�Ʈ�� �ߺ� ���� ���� \n"; }
		else nameList.Add(inPhotoKey);
	}

//?????[���� 3-2-B-iii]
//?????[���� 3-2-C-iii]
//name list�� �ִ� ���� �̸��� �̿��Ͽ� master list�� �˻��Ͽ� �ڼ��� ������ ȭ�鿡 ����
	void DisplayDetail(List<PhotoType>& master) {
		//???
	}

//?????[���� 3-2-B-iv]
//?????[���� 3-2-C-iii]
// nameList���� �Էµ� �������� �ִ� �� Ȯ���Ͽ� �����ϸ� master list���� ã ���ڵ� �����͸� ����
	PhotoType* FindByNameKey(List<PhotoType> &master, string inPhotoKey) {
		PhotoType ptemp(inPhotoKey);
		//???
	}

	//?????[���� 3-2-C-iv]
	//?????[���� 3-2-B-v]
	// �� �̺�Ʈ�� �Ҽӵ� ���� �߿��� contents�� �Էµ� Ű�� �����ϴ� ù��° ������ ã�Ƽ� �� ���� record�� �����͸� ����
	PhotoType* FindByContentsKey(List<PhotoType> &master, string contentKey) {
		nameList.ResetList();
		string *temp;
		PhotoType *pPtr, ptemp;
		while (temp = nameList.GetNextItemPtr()) {
			//???
		}
	}

};
